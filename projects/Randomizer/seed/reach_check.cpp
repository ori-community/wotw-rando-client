#include <Randomizer/randomizer.h>
#include <Randomizer/seed/reach_check.h>

#include <Common/blocking_queue.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>

#include <Modloader/modloader.h>
#include <Modloader/windows_api/bootstrap.h>

#include <Core/enums/teleporter_type.h>
#include <Core/events/action.h>
#include <Core/events/task.h>
#include <utility>

namespace randomizer::seedgen_interop {
    namespace {
        const std::string seedgen_interop_dll_file = "seedgen_interop.dll";

        struct GetStatesResult {
            struct Data
            {
                std::unordered_map<core::api::uber_states::UberStateCondition, std::string> states;
            };

            Data data;
        };

        struct SeedgenInput {
            std::string areas;
            std::string locations;
            std::string states;
            std::string seed_file;
        };

        struct ReachCheckRequest {
            float health;
            float energy;
            int spirit_light;
            int gorlek_ore;
            int keystones;
            int shard_slots;
            char clean_water;
            std::vector<int> skills;
            std::vector<int> teleporters;
            std::vector<int> shards;
            std::vector<std::string> set_nodes;
            reach_check_callback_t callback;
        };

        template<typename T>
        struct RawVec {
            T* data;
            int length;
        };

        struct RawSeedgenInput {
            const char* areas;
            const char* locations;
            const char* states;
            const char* seed_file;
        };

        struct RawReachCheckRequest {
            float health;
            float energy;
            int spirit_light;
            int gorlek_ore;
            int keystones;
            int shard_slots;
            char clean_water;
            RawVec<int> skills;
            RawVec<int> teleporters;
            RawVec<int> shards;
            RawVec<const char*> set_nodes;
        };

        struct ReachCheckFunctions {
            void (*push_error)(ReachCheckResult::Data* data, const char* string);
            void (*push_reached)(ReachCheckResult::Data* data, const char* string);
        };

        struct GetStatesFunctions {
            void (*push_error)(ReachCheckResult::Data* data, const char* string);
            void (*push_state)(GetStatesResult::Data* data, const char* name, int32_t uber_group, int32_t uber_state, int32_t value, int32_t op);
        };

        enum class Status {
            Success,
            Error,
            Panic,
        };

        using reach_check_fn_t = Status (*)(RawSeedgenInput& input, RawReachCheckRequest& request, ReachCheckResult::Data* data, ReachCheckFunctions& functions);
        using get_states_fn_t = Status (*)(RawSeedgenInput& input, GetStatesResult::Data* data, GetStatesFunctions& functions);

        bool thread_is_running = false;
        common::BlockingQueue<ReachCheckRequest> reach_check_requests;
        std::vector<std::tuple<reach_check_callback_t, std::optional<ReachCheckResult>>> reach_check_results;
        std::mutex reach_check_results_mutex;
        SeedgenInput seedgen_input;
        std::mutex seedgen_input_mutex;
        std::atomic<bool> states_update_queued = true;
        std::unordered_map<core::api::uber_states::UberStateCondition, std::string> states;
        std::mutex states_mutex;

        void handle_requests() {
            auto handle = modloader::win::bootstrap::load_library(modloader::base_path() / seedgen_interop_dll_file);
            if (!handle) {
                return;
            }

            auto reach_check_fn = reinterpret_cast<reach_check_fn_t>(modloader::win::bootstrap::load_function(handle, "reach_check"));
            auto get_states_fn = reinterpret_cast<get_states_fn_t>(modloader::win::bootstrap::load_function(handle, "get_states"));

            if (!reach_check_fn || !get_states_fn) {
                return;
            }

            ReachCheckFunctions reach_check_functions = {
                .push_error = [](ReachCheckResult::Data* data, const char* error_message) {
                    modloader::error("reach_check", error_message);
                },
                .push_reached = [](ReachCheckResult::Data* data, const char* identifier) {
                    auto location = randomizer::location_collection().location(identifier);
                    if (location.has_value()) {
                        auto condition = location->condition;
                        data->reached.emplace(condition);
                    }
                }
            };

            GetStatesFunctions get_states_functions = {
                .push_error = [](ReachCheckResult::Data* data, const char* error_message) {
                    modloader::error("reach_check", error_message);
                },
                .push_state = [](GetStatesResult::Data* data, const char* name, int32_t uber_group, int32_t uber_state, int32_t value, int32_t op) {
                    data->states.emplace(
                        core::api::uber_states::UberStateCondition(
                            uber_group, uber_state, static_cast<BooleanOperator>(op), static_cast<double>(value)
                        ),
                        std::string(name)
                    );
                }
            };

            thread_is_running = true;
            while (!modloader::shutdown_requested) {
                auto request_optional = reach_check_requests.dequeue();
                if (modloader::shutdown_requested) {
                    break;
                }

                seedgen_input_mutex.lock();
                const auto seedgen_input_copy = seedgen_input;
                seedgen_input_mutex.unlock();

                RawSeedgenInput raw_input {
                    .areas = seedgen_input_copy.areas.c_str(),
                    .locations = seedgen_input_copy.locations.c_str(),
                    .states = seedgen_input_copy.states.c_str(),
                    .seed_file = seedgen_input_copy.seed_file.c_str()
                };

                auto states_updated = false;
                if (states_update_queued) {
                    GetStatesResult result = {};
                    auto status = get_states_fn(raw_input, &result.data, get_states_functions);
                    if (status == Status::Success) {
                        std::lock_guard _(states_mutex);
                        states = result.data.states;
                        modloader::info("reach_check", std::format("Queried {} states from seedgen", states.size()));
                        states_updated = true;
                    } else {
                        modloader::warn("reach_check", "Failed to query states from seedgen");
                    }

                    states_update_queued = false;
                }

                if (!request_optional.has_value()) {
                    continue;
                }

                auto request = request_optional.value();

                // If we just updated the states, requeue this request
                if (states_updated) {
                    core::events::schedule_task_for_next_update([=] {
                        reach_check(request.callback);
                    });
                    continue;
                }

                std::vector<const char*> set_nodes;
                set_nodes.reserve(request.set_nodes.size());
                for (auto const& node: request.set_nodes) {
                    set_nodes.push_back(node.c_str());
                }

                RawReachCheckRequest raw_request = {
                    .health = request.health,
                    .energy = request.energy,
                    .spirit_light = request.spirit_light,
                    .gorlek_ore = request.gorlek_ore,
                    .keystones = request.keystones,
                    .shard_slots = request.shard_slots,
                    .clean_water = request.clean_water,
                    .skills = RawVec<int>{request.skills.data(), static_cast<int>(request.skills.size())},
                    .teleporters = RawVec<int>{request.teleporters.data(), static_cast<int>(request.teleporters.size())},
                    .shards = RawVec<int>{request.shards.data(), static_cast<int>(request.shards.size())},
                    .set_nodes = RawVec<const char*>{set_nodes.data(), static_cast<int>(set_nodes.size())},
                };

                ReachCheckResult result = {};
                auto status = reach_check_fn(raw_input, raw_request, &result.data, reach_check_functions);
                if (status == Status::Success) {
                    std::lock_guard lock(reach_check_results_mutex);
                    reach_check_results.emplace_back(request.callback, result);
                } else {
                    std::lock_guard lock(reach_check_results_mutex);
                    reach_check_results.emplace_back(request.callback, std::nullopt);
                    modloader::warn("reach_check", "Reach check failed");
                }
            }

            thread_is_running = false;
            modloader::win::bootstrap::free_library(handle);
        }

        std::thread request_thread(handle_requests);
        auto on_before_update = core::api::game::event_bus().register_handler(
            GameEvent::FixedUpdate,
            EventTiming::After,
            [](auto, auto) {
                if (auto lock = std::unique_lock(reach_check_results_mutex, std::try_to_lock)) {
                    for (auto& [callback, result]: reach_check_results) {
                        callback(result);
                    }

                    reach_check_results.clear();
                }
            }
        );
    } // namespace

    bool ReachCheckResult::reachable(core::api::uber_states::UberStateCondition location) const {
        return data.reached.contains(location);
    }

    bool ReachCheckResult::is_same_as(const ReachCheckResult& other) const {
        return data.reached == other.data.reached;
    }

    std::vector<app::AbilityType__Enum> abilities{
        app::AbilityType__Enum::Bash,
        app::AbilityType__Enum::DoubleJump,
        app::AbilityType__Enum::ChargeJump, // Launch
        app::AbilityType__Enum::Glide,
        app::AbilityType__Enum::WaterBreath,
        app::AbilityType__Enum::Grenade,
        app::AbilityType__Enum::SpiritLeash, // Grapple
        app::AbilityType__Enum::GlowSpell, // Flash
        app::AbilityType__Enum::SpiritSpearSpell, // Spear
        app::AbilityType__Enum::MeditateSpell, // Regenerate
        app::AbilityType__Enum::Bow,
        app::AbilityType__Enum::Hammer,
        app::AbilityType__Enum::Sword,
        app::AbilityType__Enum::Digging, // Burrow
        app::AbilityType__Enum::DashNew, // Dash
        app::AbilityType__Enum::WaterDash,
        app::AbilityType__Enum::ChakramSpell, // Shuriken
        app::AbilityType__Enum::Blaze,
        app::AbilityType__Enum::TurretSpell, // Sentry
        app::AbilityType__Enum::FeatherFlap, // Flap
        app::AbilityType__Enum::DamageUpgradeA, // Ancestral Light Glades
        app::AbilityType__Enum::DamageUpgradeB, // Ancestral Light Burrows
    };

    std::vector<app::SpiritShardType__Enum> shards = {
        app::SpiritShardType__Enum::TripleJump,
        app::SpiritShardType__Enum::GlassCannon, // Overcharge
        app::SpiritShardType__Enum::AntiAir, // Wingclip
        app::SpiritShardType__Enum::SpiritMagnet,
        app::SpiritShardType__Enum::Splinter,
        app::SpiritShardType__Enum::Reckless,
        app::SpiritShardType__Enum::Barrier, // Resilience
        app::SpiritShardType__Enum::Vitality,
        app::SpiritShardType__Enum::Energy,
        app::SpiritShardType__Enum::BloodPact, // LifePact
        app::SpiritShardType__Enum::LastResort, // LastStand
        app::SpiritShardType__Enum::UltraBash,
        app::SpiritShardType__Enum::UltraLeash, // UltraGrapple
        app::SpiritShardType__Enum::Recycler, // Overflow
        app::SpiritShardType__Enum::Counterstrike, // Thorn
        app::SpiritShardType__Enum::HollowEnergy, // Catalyst
        app::SpiritShardType__Enum::Glue, // Sticky
        app::SpiritShardType__Enum::CombatLuck, // Finesse
        app::SpiritShardType__Enum::SpiritPower, // SpiritSurge
        app::SpiritShardType__Enum::Untouchable, // Lifeforce
        app::SpiritShardType__Enum::MirrorStrike, // Deflector
        app::SpiritShardType__Enum::Fracture,
    };

    void request_states_update_on_next_reach_check() {
        states_update_queued = true;
    }

    void reach_check(reach_check_callback_t callback) {
        if (thread_is_running && core::api::game::player::sein() != nullptr) {
            auto const& seed_info = game_seed().parser_output();

            seedgen_input.areas = seed_info.areas;
            seedgen_input.locations = seed_info.locations;
            seedgen_input.states = seed_info.states;
            seedgen_input.seed_file = seed_info.content;

            ReachCheckRequest request{
                .health = static_cast<float>(core::api::game::player::max_health().get()),
                .energy = core::api::game::player::max_energy().get(),
                .spirit_light = core::api::uber_states::UberState(UberStateGroup::RandoStats, 3).get<int>(),
                .gorlek_ore = core::api::game::player::ore().get(),
                .keystones = core::api::game::player::keystones().get(),
                .shard_slots = core::api::game::player::shard_slots().get(),
                .clean_water = core::api::uber_states::UberState(UberStateGroup::RandoState, 2000).get<char>(),
                .callback = std::move(callback)
            };

            for (auto ability: abilities) {
                if (core::api::game::player::ability(ability).get()) {
                    request.skills.push_back(static_cast<int>(ability));
                }
            }

            for (auto teleporter: teleporter_map()) {
                if (teleporter.second.get<bool>()) {
                    request.teleporters.push_back(static_cast<int>(teleporter.first));
                }
            }

            for (auto shard: shards) {
                if (core::api::game::player::shard(shard).get()) {
                    request.shards.push_back(static_cast<int>(shard));
                }
            }

            states_mutex.lock();
            for (auto const& [condition, name]: states) {
                if (condition.resolve()) {
                    request.set_nodes.push_back(name);
                }
            }
            states_mutex.unlock();

            reach_check_requests.enqueue(request);
            return;
        }

        // We couldn't queue the request, abort immediately
        callback(std::nullopt);
    }

    bool is_state(const core::api::uber_states::UberStateCondition& condition) {
        std::lock_guard _(states_mutex);
        return states.contains(condition);
    }

    auto on_shutdown = modloader::event_bus().register_handler(
        ModloaderEvent::Shutdown,
        [](auto) {
            if (request_thread.joinable()) {
                reach_check_requests.interrupt();
                request_thread.join();
            }
        }
    );
} // namespace randomizer::seed

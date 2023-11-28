#include <Randomizer/randomizer.h>
#include <Randomizer/seed/reach_check.h>

#include <Common/blocking_queue.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>

#include <Modloader/modloader.h>
#include <Modloader/windows_api/bootstrap.h>

#include <utility>
#include <Core/enums/teleporter_type.h>

namespace randomizer::seed {
    namespace {
        struct ReachCheckRequest {
            float health;
            float energy;
            int gorlek_ore;
            int keystones;
            int shard_slots;
            char clean_water;
            std::vector<int> skills;
            std::vector<int> teleporters;
            std::vector<int> shards;
            std::vector<std::string> nodes;
            std::string areas;
            std::string locations;
            std::string states;
            std::string seed_file;
            reach_check_callback callback;
        };

        template <typename T>
        struct RawVec {
            T* data;
            int length;
        };

        struct Input {
            float health;
            float energy;
            int gorlek_ore;
            int keystones;
            int shard_slots;
            char clean_water;
            RawVec<int> skills;
            RawVec<int> teleporters;
            RawVec<int> shards;
            RawVec<const char*> nodes;
            const char* areas;
            const char* locations;
            const char* states;
            const char* seed_file;
        };

        using rust_usable_function = void (*)(ReachCheckResult::Data* data, const char* string);
        struct Functions {
            rust_usable_function push_error;
            rust_usable_function push_reached;
        };

        enum class Status {
            Success,
            Error,
            Panic,
        };

        using seedgen_reach_check = Status (*)(Input& input, ReachCheckResult::Data* data, Functions& functions);

        bool thread_is_running = false;
        common::BlockingQueue<ReachCheckRequest> requests;
        std::vector<std::tuple<reach_check_callback, ReachCheckResult>> results;
        std::mutex results_mutex;

        void push_error(ReachCheckResult::Data* data, const char* error) {
            // TODO: Show message
            trace(modloader::MessageType::Error, 1, "reach_check", error);
        }

        void push_reached(ReachCheckResult::Data* data, const char* identifier) {
            auto location = randomizer::location_collection().location(identifier);
            if (location.has_value()) {
                auto condition = location->condition;
                data->reached.emplace(condition);
            }
        }

        void handle_requests() {
            auto handle = modloader::win::bootstrap::load_library(modloader::base_path() / "wotw_seedgen_c_interop.dll");
            if (!handle) {
                return;
            }

            auto func = reinterpret_cast<seedgen_reach_check>(modloader::win::bootstrap::load_function(handle, "reach_check"));
            if (!func) {
                return;
            }

            Functions functions = {
                .push_error = &push_error,
                .push_reached = &push_reached
            };

            thread_is_running = true;
            while (!modloader::shutdown_requested) {
                auto request = requests.dequeue();

                std::vector<const char*> nodes;
                for (auto const& node : request.nodes) {
                    nodes.push_back(node.c_str());
                }

                Input input = {
                    .health = request.health,
                    .energy = request.energy,
                    .gorlek_ore = request.gorlek_ore,
                    .keystones = request.keystones,
                    .shard_slots = request.shard_slots,
                    .clean_water = request.clean_water,
                    .skills = RawVec<int>{ request.skills.data(), static_cast<int>(request.skills.size()) },
                    .teleporters = RawVec<int>{ request.teleporters.data(), static_cast<int>(request.teleporters.size()) },
                    .shards = RawVec<int>{ request.shards.data(), static_cast<int>(request.shards.size()) },
                    .nodes = RawVec<const char*>{ nodes.data(), static_cast<int>(nodes.size()) },
                    .areas = request.areas.c_str(),
                    .locations = request.locations.c_str(),
                    .states = request.states.c_str(),
                    .seed_file = request.seed_file.c_str()
                };

                ReachCheckResult result = {};
                auto status = func(input, &result.data, functions);
                if (status == Status::Success) {
                    std::lock_guard<std::mutex> lock(results_mutex);
                    results.emplace_back(request.callback, result);
                } else {
                }
            }

            thread_is_running = false;
            modloader::win::bootstrap::free_library(handle);
        }

        std::thread request_thread(handle_requests);
        auto on_before_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
            if (auto lock = std::unique_lock(results_mutex, std::try_to_lock)) {
                for (auto [callback, result] : results) {
                    callback(result);
                }

                results.clear();
            }
        });
    } // namespace

    bool ReachCheckResult::reachable(core::api::uber_states::UberStateCondition location) const {
        auto test = location;
        if (static_cast<int>(test.state.group()) == 5377 && test.state.state() == 21860) {
            auto value = data.reached.contains(location);
            return value;
        }

        return data.reached.contains(location);
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

    void reach_check(reach_check_callback callback) {
        if (thread_is_running && core::api::game::player::sein() != nullptr) {
            auto const& seed_info = game_seed().info();
            ReachCheckRequest request{
                .health = static_cast<float>(core::api::game::player::max_health().get()),
                .energy = core::api::game::player::max_energy().get(),
                .gorlek_ore = core::api::game::player::ore().get(),
                .keystones = core::api::game::player::keystones().get(),
                .shard_slots = core::api::game::player::shard_slots().get(),
                .clean_water = core::api::uber_states::UberState(UberStateGroup::RandoState, 2000).get<char>(),

                .areas = seed_info.areas,
                .locations = seed_info.locations,
                .states = seed_info.states,
                .seed_file = seed_info.content,
                .callback = std::move(callback)
            };

            for (auto ability : abilities) {
                if (core::api::game::player::has_ability(ability)) {
                    request.skills.push_back(static_cast<int>(ability));
                }
            }

            for (auto teleporter : teleporter_map()) {
                if (teleporter.second.get<bool>()) {
                    request.teleporters.push_back(static_cast<int>(teleporter.first));
                }
            }

            for (auto shard : shards) {
                if (core::api::game::player::shard(shard).get()) {
                    request.shards.push_back(static_cast<int>(shard));
                }
            }

            for (auto const& state : randomizer::state_collection()) {
                if (state.condition.resolve()) {
                    request.nodes.push_back(state.name);
                }
            }

            requests.enqueue(request);
        }
    }
} // namespace randomizer::seed

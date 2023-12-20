#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/core.h>
#include <Modloader/il2cpp_math.h>
#include <Randomizer/game/teleport.h>
#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/commands.h>
#include <Randomizer/seed/seed.h>
#include <functional>

namespace randomizer::seed {
    namespace {
        bool prevent_grant = false;

        auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            game_seed().prevent_grants([](){ return prevent_grant; });
        });
    }

    enum class EqualityComparator {
        Equal,
        NotEqual,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        EqualityComparator,
        {
            {EqualityComparator::Equal,    "Equal"   },
            {EqualityComparator::NotEqual, "NotEqual"},
    }
    );

    enum class Comparator {
        Equal,
        NotEqual,
        Less,
        LessOrEqual,
        Greater,
        GreaterOrEqual,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        Comparator,
        {
            {Comparator::Equal,          "Equal"         },
            {Comparator::NotEqual,       "NotEqual"      },
            {Comparator::Less,           "Less"          },
            {Comparator::LessOrEqual,    "LessOrEqual"   },
            {Comparator::Greater,        "Greater"       },
            {Comparator::GreaterOrEqual, "GreaterOrEqual"},
    }
    );

    enum class LogicOperator {
        And,
        Or,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        LogicOperator,
        {
            {LogicOperator::And, "And"},
            {LogicOperator::Or,  "Or" },
    }
    );

    enum class ArithmeticOperator {
        Add,
        Subtract,
        Multiply,
        Divide,
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        ArithmeticOperator,
        {
            {ArithmeticOperator::Add,      "Add"     },
            {ArithmeticOperator::Subtract, "Subtract"},
            {ArithmeticOperator::Multiply, "Multiply"},
            {ArithmeticOperator::Divide,   "Divide"  },
    }
    );

    template<bool check_bool>
    struct Execute final : ICommand {
        Execute(const int index) :
            index(index) {}

        int index;

        void execute(Seed& seed, SeedMemory& memory) const override {
            if (check_bool && !memory.booleans.get(0)) {
                return;
            }

            seed.handle_command(index);
        }
    };

    template<typename T>
    struct Set final : ICommand {
        Set(const T value) :
            value(value) {}

        T value;

        void execute(Seed& seed, SeedMemory& memory) const override { memory.set(0, value); }
    };

    template<typename T>
    struct Copy final : ICommand {
        Copy(const std::size_t from, const std::size_t to) :
            from(from),
            to(to) {}

        std::size_t from;
        std::size_t to;

        void execute(Seed& seed, SeedMemory& memory) const override { memory.set(to, memory.get<T>(from)); }
    };

    template<typename T>
    struct Fetch final : ICommand {
        Fetch(const int group, const int member) :
            group(group),
            member(member) {}

        int group;
        int member;

        void execute(Seed& seed, SeedMemory& memory) const override {
            core::api::uber_states::UberState state(group, member);
            memory.set(0, state.get<T>());
        }
    };

    template<typename T>
    struct Store final : ICommand {
        Store(const int group, const int member, const bool check_triggers) :
            group(group),
            member(member),
            check_triggers(check_triggers) {}

        int group;
        int member;
        bool check_triggers;

        void execute(Seed& seed, SeedMemory& memory) const override {
            core::api::uber_states::UberState state(group, member);
            modloader::ScopedSetter setter(prevent_grant, true);
            state.set(memory.get<T>(0));
        }
    };

    template<typename T>
    struct CompareEqual final : ICommand {
        CompareEqual(const EqualityComparator op) :
            op(op) {}

        EqualityComparator op;

        void execute(Seed& seed, SeedMemory& memory) const override {
            memory.booleans.set(0, op == EqualityComparator::Equal && memory.get<T>(1) == memory.get<T>(0));
        }
    };

    template<typename T>
    struct Compare final : ICommand {
        Compare(const Comparator op) :
            op(op) {}

        Comparator op;

        void execute(Seed& seed, SeedMemory& memory) const override {
            switch (op) {
                case Comparator::Equal:
                    memory.booleans.set(0, memory.get<T>(1) == memory.get<T>(0));
                    break;
                case Comparator::NotEqual:
                    memory.booleans.set(0, memory.get<T>(1) != memory.get<T>(0));
                    break;
                case Comparator::Less:
                    memory.booleans.set(0, memory.get<T>(1) < memory.get<T>(0));
                    break;
                case Comparator::LessOrEqual:
                    memory.booleans.set(0, memory.get<T>(1) <= memory.get<T>(0));
                    break;
                case Comparator::Greater:
                    memory.booleans.set(0, memory.get<T>(1) > memory.get<T>(0));
                    break;
                case Comparator::GreaterOrEqual:
                    memory.booleans.set(0, memory.get<T>(1) >= memory.get<T>(0));
                    break;
            }
        }
    };

    struct LogicOperation final : ICommand {
        LogicOperation(const LogicOperator op) :
            op(op) {}

        LogicOperator op;

        void execute(Seed& seed, SeedMemory& memory) const override {
            switch (op) {
                case LogicOperator::And:
                    memory.booleans.set(0, memory.booleans.get(1) && memory.booleans.get(0));
                    break;
                case LogicOperator::Or:
                    memory.booleans.set(0, memory.booleans.get(1) || memory.booleans.get(0));
                    break;
            }
        }
    };

    template<typename T>
    struct ArithmeticOperation final : ICommand {
        ArithmeticOperation(const ArithmeticOperator op) :
            op(op) {}

        ArithmeticOperator op;

        void execute(Seed& seed, SeedMemory& memory) const override {
            switch (op) {
                case ArithmeticOperator::Add:
                    memory.set(0, memory.get<T>(1) + memory.get<T>(0));
                    break;
                case ArithmeticOperator::Subtract:
                    memory.set(0, memory.get<T>(1) - memory.get<T>(0));
                    break;
                case ArithmeticOperator::Multiply:
                    memory.set(0, memory.get<T>(1) * memory.get<T>(0));
                    break;
                case ArithmeticOperator::Divide:
                    memory.set(0, memory.get<T>(1) / memory.get<T>(0));
                    break;
            }
        }
    };

    struct Concatenate final : ICommand {
        void execute(Seed& seed, SeedMemory& memory) const override {
            memory.strings.set(0, memory.strings.get(1) + memory.strings.get(0));
        }
    };

    template<typename A, typename B>
    struct Cast final : ICommand {
        void execute(Seed& seed, SeedMemory& memory) const override {
            memory.set(0, static_cast<B>(memory.get<A>(0)));
        }
    };

    struct BoolToString final : ICommand {
        void execute(Seed& seed, SeedMemory& memory) const override {
            memory.set<std::string>(0, memory.get<bool>(0) ? "true" : "false");
        }
    };

    struct IntToString final : ICommand {
        void execute(Seed& seed, SeedMemory& memory) const override {
            memory.set(0, std::format("{}", memory.get<int>(0)));
        }
    };

    struct FloatToString final : ICommand {
        void execute(Seed& seed, SeedMemory& memory) const override {
            memory.set(0, std::format("{:.3f}", memory.get<float>(0)));
        }
    };

    struct DefineTimer final : ICommand {
        void execute(Seed& seed, SeedMemory& memory) const override {
            // TODO: Implement this or change it.
            throw std::exception("Not Implemented");
        }
    };

    struct IsInHitbox final : ICommand {
        void execute(Seed& seed, SeedMemory& memory) const override {
            app::Rect box = app::Rect{
                memory.floats.get(1),
                memory.floats.get(2),
                memory.floats.get(3) - memory.floats.get(1),
                memory.floats.get(0) - memory.floats.get(2),
            };

            memory.booleans.set(0, modloader::math::in_rect(core::api::game::player::get_position(), box));
        }
    };

    struct WorldName final : ICommand {
        WorldName(const int id) :
            id(id) {}

        int id;

        void execute(Seed& seed, SeedMemory& memory) const override {
            const auto world = multiplayer_universe().get_world(id);
            memory.strings.set(0, world == nullptr ? "" : world->name());
        }
    };

    struct Message final : ICommand {
        Message(const bool prioritized, const bool custom_timeout) :
            prioritized(prioritized),
            custom_timeout(custom_timeout) {}

        bool prioritized;
        bool custom_timeout;

        void execute(Seed& seed, SeedMemory& memory) const override {
            core::message_controller().queue_central({
                .text = core::Property<std::string>(memory.strings.get(0)),
                .duration = custom_timeout ? memory.floats.get(0) : 3.f,
                .prioritized = prioritized,
            });
        }
    };

    struct Save final : ICommand {
        void execute(Seed& seed, SeedMemory& memory) const override { core::api::game::save(); }
    };

    struct Checkpoint final : ICommand {
        void execute(Seed& seed, SeedMemory& memory) const override { core::api::game::checkpoint(); }
    };

    struct Warp final : ICommand {
        void execute(Seed& seed, SeedMemory& memory) const override {
            game::teleport({memory.floats.get(0), memory.floats.get(1), 0.f});
        }
    };

    struct Equip final : ICommand {
        Equip(const app::EquipmentType__Enum equipment, const app::SpellInventory_Binding__Enum slot) :
            equipment(equipment),
            slot(slot) {}

        app::EquipmentType__Enum equipment;
        app::SpellInventory_Binding__Enum slot;

        void execute(Seed& seed, SeedMemory& memory) const override {
            core::api::game::player::bind(slot, equipment);
        }
    };

    struct Unequip final : ICommand {
        Unequip(const app::EquipmentType__Enum equipment) :
            equipment(equipment) {}

        app::EquipmentType__Enum equipment;

        void execute(Seed& seed, SeedMemory& memory) const override {
            core::api::game::player::unbind(equipment);
        }
    };

    struct TriggerKeybind final : ICommand {
        TriggerKeybind(const Action action) :
            action(action) {}

        Action action;

        void execute(Seed& seed, SeedMemory& memory) const override {
            input::set_action(action, true);
            input::set_action(action, false);
        }
    };

    std::unique_ptr<ICommand> create_not_implemented(const nlohmann::json&) { return nullptr; }

    template<bool check>
    std::unique_ptr<ICommand> create_execute(const nlohmann::json& j) {
        return std::make_unique<Execute<check>>(j.at("index").get<int>());
    }

    template<typename T>
    std::unique_ptr<ICommand> create_set(const nlohmann::json& j) {
        return std::make_unique<Set<T>>(j.at("value").get<T>());
    }

    template<typename T>
    std::unique_ptr<ICommand> create_copy(const nlohmann::json& j) {
        return std::make_unique<Copy<T>>(j.at("from").get<std::size_t>(), j.at("to").get<std::size_t>());
    }

    template<typename T>
    std::unique_ptr<ICommand> create_fetch(const nlohmann::json& j) {
        const auto& identifier = j.at("uber_identifier");
        return std::make_unique<Fetch<T>>(identifier.at("group").get<int>(), identifier.at("member").get<int>());
    }

    template<typename T>
    std::unique_ptr<ICommand> create_store(const nlohmann::json& j) {
        const auto& identifier = j.at("uber_identifier");
        return std::make_unique<Store<T>>(identifier.at("group").get<int>(), identifier.at("member").get<int>(), j.at("check_triggers").get<bool>());
    }

    template<typename T>
    std::unique_ptr<ICommand> create_compare_equal(const nlohmann::json& j) {
        return std::make_unique<CompareEqual<T>>(j.at("operator").get<EqualityComparator>());
    }

    template<typename T>
    std::unique_ptr<ICommand> create_compare(const nlohmann::json& j) {
        return std::make_unique<Compare<T>>(j.at("operator").get<Comparator>());
    }

    std::unique_ptr<ICommand> create_logic(const nlohmann::json& j) { return std::make_unique<LogicOperation>(j.at("operator").get<LogicOperator>()); }

    template<typename T>
    std::unique_ptr<ICommand> create_arithmetic(const nlohmann::json& j) {
        return std::make_unique<ArithmeticOperation<T>>(j.at("operator").get<ArithmeticOperator>());
    }

    std::unique_ptr<ICommand> create_concatenate(const nlohmann::json&) { return std::make_unique<Concatenate>(); }

    template<typename A, typename B>
    std::unique_ptr<ICommand> create_cast(const nlohmann::json& j) {
        return std::make_unique<Cast<A, B>>();
    }

    std::unique_ptr<ICommand> create_bool_to_string(const nlohmann::json&) { return std::make_unique<BoolToString>(); }
    std::unique_ptr<ICommand> create_int_to_string(const nlohmann::json&) { return std::make_unique<IntToString>(); }
    std::unique_ptr<ICommand> create_float_to_string(const nlohmann::json&) { return std::make_unique<FloatToString>(); }
    std::unique_ptr<ICommand> create_define_timer(const nlohmann::json&) { return std::make_unique<DefineTimer>(); }
    std::unique_ptr<ICommand> create_is_in_hitbox(const nlohmann::json&) { return std::make_unique<IsInHitbox>(); }

    std::unique_ptr<ICommand> create_world_name(const nlohmann::json& j) { return std::make_unique<WorldName>(j.at("index").get<int>()); }

    template<bool prioritized, bool custom_timeout>
    std::unique_ptr<ICommand> create_message(const nlohmann::json&) {
        return std::make_unique<Message>(prioritized, custom_timeout);
    }

    std::unique_ptr<ICommand> create_save(const nlohmann::json&) { return std::make_unique<Save>(); }
    std::unique_ptr<ICommand> create_checkpoint(const nlohmann::json&) { return std::make_unique<Checkpoint>(); }
    std::unique_ptr<ICommand> create_warp(const nlohmann::json&) { return std::make_unique<Warp>(); }

    std::unique_ptr<ICommand> create_equip(const nlohmann::json& j) {
        return std::make_unique<Equip>(j.at("equipment").get<app::EquipmentType__Enum>(), j.at("slot").get<app::SpellInventory_Binding__Enum>());
    }

    std::unique_ptr<ICommand> create_unequip(const nlohmann::json& j) { return std::make_unique<Unequip>(j.at("equipment").get<app::EquipmentType__Enum>()); }

    std::unique_ptr<ICommand> create_trigger_keybind(const nlohmann::json& j) { return std::make_unique<TriggerKeybind>(j.at("bind").get<Action>()); }

    std::unordered_map<std::string, std::function<std::unique_ptr<ICommand>(const nlohmann::json& j)>> creation_functors{
        {"Execute", create_execute<false>},
        {"ExecuteIf", create_execute<true>},
        {"SetBoolean", create_set<bool>},
        {"SetInteger", create_set<int>},
        {"SetFloat", create_set<float>},
        {"SetString", create_set<std::string>},
        {"CopyBoolean", create_copy<bool>},
        {"CopyInteger", create_copy<int>},
        {"CopyFloat", create_copy<float>},
        {"CopyString", create_copy<std::string>},
        {"FetchBoolean", create_fetch<bool>},
        {"FetchInteger", create_fetch<int>},
        {"FetchFloat", create_fetch<float>},
        {"StoreBoolean", create_store<bool>},
        {"StoreInteger", create_store<int>},
        {"StoreFloat", create_store<float>},
        {"CompareBoolean", create_compare_equal<bool>},
        {"CompareInteger", create_compare<int>},
        {"CompareFloat", create_compare<float>},
        {"CompareString", create_compare_equal<std::string>},
        {"LogicOperation", create_logic},
        {"ArithmeticInteger", create_arithmetic<int>},
        {"ArithmeticFloat", create_arithmetic<float>},
        {"Concatenate", create_concatenate},
        {"IntegerToFloat", create_cast<int, float>},
        {"BooleanToString", create_bool_to_string},
        {"IntegerToString", create_int_to_string},
        {"FloatToString", create_float_to_string},
        {"DefineTimer", create_define_timer},
        {"IsInHitbox", create_is_in_hitbox},
        {"WorldName", create_world_name},
        {"ItemMessage", create_message<false, false>},
        {"ItemMessageWithTimeout", create_message<false, true>},
        {"PriorityMessage", create_message<true, true>},
        {"ControlledMessage", create_not_implemented},
        {"SetMessageText", create_not_implemented},
        {"SetMessageTimeout", create_not_implemented},
        {"DestroyMessage", create_not_implemented},
        {"Save", create_save},
        {"Checkpoint", create_checkpoint},
        {"Warp", create_warp},
        {"Equip", create_equip},
        {"Unequip", create_unequip},
        {"TriggerKeybind", create_trigger_keybind},
        {"EnableServerSync", create_not_implemented},
        {"DisableServerSync", create_not_implemented},
        {"SetSpoilerMapIcon", create_not_implemented},
        {"CreateWarpIcon", create_not_implemented},
        {"SetWarpIconLabel", create_not_implemented},
        {"DestroyWarpIcon", create_not_implemented},
        {"SetShopItemPrice", create_not_implemented},
        {"SetShopItemName", create_not_implemented},
        {"SetShopItemDescription", create_not_implemented},
        {"SetShopItemIcon", create_not_implemented},
        {"SetShopItemHidden", create_not_implemented},
        {"SetWheelItemName", create_not_implemented},
        {"SetWheelItemDescription", create_not_implemented},
        {"SetWheelItemIcon", create_not_implemented},
        {"SetWheelItemColor", create_not_implemented},
        {"SetWheelItemCommand", create_not_implemented},
        {"DestroyWheelItem", create_not_implemented},
        {"SwitchWheel", create_not_implemented},
        {"SetWheelPinned", create_not_implemented},
        {"ClearAllWheels", create_not_implemented},
    };
    std::unique_ptr<ICommand> create_command(const nlohmann::json& j) {
        if (j.is_string()) {
            const auto it = creation_functors.find(j.get<std::string>());
            if (it != creation_functors.end()) {
                return std::move(it->second(j));
            }
        } else {
            const auto it = creation_functors.find(begin(j).key());
            if (it != creation_functors.end()) {
                return std::move(it->second(begin(j).value()));
            }
        }

        return nullptr;
    }
} // namespace randomizer::seed

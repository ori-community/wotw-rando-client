#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/core.h>
#include <Core/messages/message_controller.h>
#include <Core/utils/json_serializers.h>
#include <Modloader/il2cpp_math.h>
#include <Randomizer/features/wheel.h>
#include <Randomizer/game/map/map.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/game/teleport.h>
#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/instructions.h>
#include <Randomizer/seed/seed.h>
#include <functional>
#include <utility>

namespace randomizer::seed {
    namespace {
        struct SeedTimer {
            core::api::uber_states::UberState toggle;
            core::api::uber_states::UberState value;
        };

        struct SeedMessage {
            core::messages::MessageHandle::MessageState last_state = core::messages::MessageHandle::MessageState::Queued;
            message_handle_ptr_t handle;
            std::optional<int> visible_callback;
            std::optional<int> hidden_callback;
        };

        struct SeedControlledMessage {
            std::shared_ptr<core::api::messages::MessageBox> message;
            std::optional<float> timeout;
        };

        std::unordered_map<std::size_t, std::shared_ptr<game::map::Icon>> warp_icons;
        std::unordered_map<std::size_t, SeedMessage> central_message_boxes;
        std::unordered_map<std::size_t, SeedControlledMessage> message_boxes;
        std::unordered_set<std::size_t> message_boxes_with_timeouts;
        std::vector<SeedTimer> timers;
        bool prevent_grant = false;

        auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            game_seed().prevent_grants([]() { return prevent_grant; });
        });

        auto on_update = core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [](auto, auto) {
            if (!core::api::game::in_game()) {
                central_message_boxes.clear();
                message_boxes_with_timeouts.clear();
                message_boxes.clear();
                timers.clear();
                return;
            }

            for (auto& message: central_message_boxes | std::views::values) {
                if (message.last_state == message.handle->state) {
                    continue;
                }

                if (message.handle->state == core::messages::MessageHandle::MessageState::Visible && message.visible_callback.has_value()) {
                    game_seed().handle_command(message.visible_callback.value());
                }

                if (message.last_state == core::messages::MessageHandle::MessageState::Visible && message.hidden_callback.has_value()) {
                    game_seed().handle_command(message.hidden_callback.value());
                }

                message.last_state = message.handle->state;
            }

            std::unordered_set<int> to_destroy;
            for (const auto id: message_boxes_with_timeouts) {
                auto& box = message_boxes.at(id);
                if (box.timeout.has_value()) {
                    box.timeout.value() -= core::api::game::delta_time();
                    if (box.timeout.value() < 0) {
                        to_destroy.emplace(id);
                    }
                }
            }

            for (const auto id: to_destroy) {
                message_boxes_with_timeouts.erase(id);
                message_boxes.erase(id);
            }

            for (const auto& timer: timers) {
                if (timer.toggle.get<bool>()) {
                    timer.value.set(timer.value.get<float>() + core::api::game::delta_time());
                }
            }
        });

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

        std::string parse_icon(const nlohmann::json& j) {
            const auto icon = j.begin();
            const auto& key = icon.key();
            if (key == "Shard") {
                return std::format("shard:{}", icon.value().get<int>());
            } else if (key == "Ability") {
                return std::format("ability:{}", icon.value().get<int>());
            } else if (key == "Equipment") {
                return std::format("spell:{}", icon.value().get<int>());
            } else if (key == "Opher") {
                return std::format("opher:{}", icon.value().get<int>());
            } else if (key == "Lupo") {
                return std::format("lupo:{}", icon.value().get<int>());
            } else if (key == "Grom") {
                return std::format("grom:{}", icon.value().get<int>());
            } else if (key == "Tuley") {
                return std::format("tuley:{}", icon.value().get<int>());
            } else if (key == "Path") {
                return std::format("file:{}", icon.value().get<std::string>());
            } else {
                throw RandoException(std::format("Invalid shop icon type '{}'", key));
            }
        }

        template<typename T>
        struct TypeStr {
            static constexpr std::string_view VALUE = "Unknown";
        };

        template<>
        struct TypeStr<bool> {
            static constexpr std::string_view VALUE = "Boolean";
        };

        template<>
        struct TypeStr<int> {
            static constexpr std::string_view VALUE = "Integer";
        };

        template<>
        struct TypeStr<float> {
            static constexpr std::string_view VALUE = "Float";
        };

        template<>
        struct TypeStr<std::string> {
            static constexpr std::string_view VALUE = "String";
        };

        template<typename E>
        E parse_enum(const nlohmann::json& j) {
            return static_cast<E>(j.get<int>());
        }

        template<bool check_bool>
        struct Execute final : IInstruction {
            explicit Execute(const int index) :
                index(index) {}

            int index;

            void execute(Seed& seed, SeedMemory& memory) const override {
                if (check_bool && !memory.booleans.get(0)) {
                    return;
                }

                seed.handle_command(index);
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                if (check_bool) {
                    return std::format("ExecuteIf ({}) {}", memory.booleans.get(0), index);
                } else {
                    return std::format("Execute {}", index);
                }
            }
        };

        template<typename T>
        struct Set final : IInstruction {
            explicit Set(const T value) :
                value(value) {}

            T value;

            void execute(Seed& seed, SeedMemory& memory) const override { memory.set(0, value); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Set{} 0 -> {}", TypeStr<T>::VALUE, value);
            }
        };

        template<typename T>
        struct Copy final : IInstruction {
            Copy(const std::size_t from, const std::size_t to) :
                from(from),
                to(to) {}

            std::size_t from;
            std::size_t to;

            void execute(Seed& seed, SeedMemory& memory) const override { memory.set(to, memory.get<T>(from)); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Copy{} -> {} -> {}", TypeStr<T>::VALUE, from, to);
            }
        };

        template<typename T>
        struct Fetch final : IInstruction {
            Fetch(const int group, const int member) :
                group(group),
                member(member) {}

            int group;
            int member;

            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                memory.set(0, state.get<T>());
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                return std::format("Fetch{} -> {}|{} ({})", TypeStr<T>::VALUE, group, member, state.get<T>());
            }
        };

        template<typename T>
        struct Store final : IInstruction {
            Store(const int group, const int member, const bool trigger_events) :
                group(group),
                member(member),
                trigger_events(trigger_events) {}

            int group;
            int member;
            bool trigger_events;

            void execute(Seed& seed, SeedMemory& memory) const override {
                core::api::uber_states::UberState state(group, member);
                modloader::ScopedSetter setter(prevent_grant, !trigger_events);
                state.set(memory.get<T>(0));
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Store{} -> {}|{} (trigger_events:{})", TypeStr<T>::VALUE, group, member, trigger_events);
            }
        };

        template<typename T>
        struct CompareEqual final : IInstruction {
            explicit CompareEqual(const EqualityComparator op) :
                op(op) {}

            EqualityComparator op;

            void execute(Seed& seed, SeedMemory& memory) const override {
                memory.booleans.set(0, op == EqualityComparator::Equal && memory.get<T>(0) == memory.get<T>(1));
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                nlohmann::json j;
                to_json(j, op);
                return std::format("Compare{} -> {} {} {}", TypeStr<T>::VALUE, memory.get<T>(0), j.get<std::string>(), memory.get<T>(1));
            }
        };

        template<typename T>
        struct Compare final : IInstruction {
            explicit Compare(const Comparator op) :
                op(op) {}

            Comparator op;

            void execute(Seed& seed, SeedMemory& memory) const override {
                switch (op) {
                    case Comparator::Equal:
                        memory.booleans.set(0, memory.get<T>(0) == memory.get<T>(1));
                        break;
                    case Comparator::NotEqual:
                        memory.booleans.set(0, memory.get<T>(0) != memory.get<T>(1));
                        break;
                    case Comparator::Less:
                        memory.booleans.set(0, memory.get<T>(0) < memory.get<T>(1));
                        break;
                    case Comparator::LessOrEqual:
                        memory.booleans.set(0, memory.get<T>(0) <= memory.get<T>(1));
                        break;
                    case Comparator::Greater:
                        memory.booleans.set(0, memory.get<T>(0) > memory.get<T>(1));
                        break;
                    case Comparator::GreaterOrEqual:
                        memory.booleans.set(0, memory.get<T>(0) >= memory.get<T>(1));
                        break;
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                nlohmann::json j;
                to_json(j, op);
                return std::format("Compare{} -> {} {} {}", TypeStr<T>::VALUE, memory.get<T>(0), j.get<std::string>(), memory.get<T>(1));
            }
        };

        struct LogicOperation final : IInstruction {
            explicit LogicOperation(const LogicOperator op) :
                op(op) {}

            LogicOperator op;

            void execute(Seed& seed, SeedMemory& memory) const override {
                switch (op) {
                    case LogicOperator::And:
                        memory.booleans.set(0, memory.booleans.get(0) && memory.booleans.get(1));
                        break;
                    case LogicOperator::Or:
                        memory.booleans.set(0, memory.booleans.get(0) || memory.booleans.get(1));
                        break;
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                nlohmann::json j;
                to_json(j, op);
                return std::format("LogicBoolean -> {} {} {}", memory.booleans.get(0), j.get<std::string>(), memory.booleans.get(1));
            }
        };

        template<typename T>
        struct ArithmeticOperation final : IInstruction {
            explicit ArithmeticOperation(const ArithmeticOperator op) :
                op(op) {}

            ArithmeticOperator op;

            void execute(Seed& seed, SeedMemory& memory) const override {
                switch (op) {
                    case ArithmeticOperator::Add:
                        memory.set(0, memory.get<T>(0) + memory.get<T>(1));
                        break;
                    case ArithmeticOperator::Subtract:
                        memory.set(0, memory.get<T>(0) - memory.get<T>(1));
                        break;
                    case ArithmeticOperator::Multiply:
                        memory.set(0, memory.get<T>(0) * memory.get<T>(1));
                        break;
                    case ArithmeticOperator::Divide:
                        memory.set(0, memory.get<T>(0) / memory.get<T>(1));
                        break;
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                nlohmann::json j;
                to_json(j, op);
                return std::format("Arithmetic{} -> {} {} {}", TypeStr<T>::VALUE, memory.get<T>(0), j.get<std::string>(), memory.get<T>(1));
            }
        };

        struct Concatenate final : IInstruction {
            void execute(Seed& seed, SeedMemory& memory) const override { memory.strings.set(0, memory.strings.get(0) + memory.strings.get(1)); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Concat -> '{}' '{}'", memory.strings.get(0), memory.strings.get(1));
            }
        };

        template<typename A, typename B>
        struct Cast final : IInstruction {
            void execute(Seed& seed, SeedMemory& memory) const override { memory.set(0, static_cast<B>(memory.get<A>(0))); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Cast {} to {} -> {}", TypeStr<A>::VALUE, TypeStr<B>::VALUE, memory.get<A>(0));
            }
        };

        struct Round final : IInstruction {
            void execute(Seed& seed, SeedMemory& memory) const override { memory.floats.set(0, std::round(memory.floats.get(0))); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format(
                    "Round {:.3} -> {:.0}", TypeStr<float>::VALUE, TypeStr<std::string>::VALUE, memory.get<float>(0), std::round(memory.get<float>(0))
                );
            }
        };

        struct BoolToString final : IInstruction {
            void execute(Seed& seed, SeedMemory& memory) const override { memory.set<std::string>(0, memory.get<bool>(0) ? "true" : "false"); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Cast {} to {} -> {}", TypeStr<bool>::VALUE, TypeStr<std::string>::VALUE, memory.get<bool>(0));
            }
        };

        struct IntToString final : IInstruction {
            void execute(Seed& seed, SeedMemory& memory) const override { memory.set(0, std::format("{}", memory.get<int>(0))); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Cast {} to {} -> {}", TypeStr<int>::VALUE, TypeStr<std::string>::VALUE, memory.get<int>(0));
            }
        };

        struct FloatToString final : IInstruction {
            void execute(Seed& seed, SeedMemory& memory) const override { memory.set(0, std::format("{:.3f}", memory.get<float>(0))); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Cast {} to {} -> {:.3}", TypeStr<float>::VALUE, TypeStr<std::string>::VALUE, memory.get<float>(0));
            }
        };

        struct DefineTimer final : IInstruction {
            explicit DefineTimer(const core::api::uber_states::UberState& toggle, const core::api::uber_states::UberState& value) :
                toggle(toggle),
                value(value) {}

            core::api::uber_states::UberState toggle;
            core::api::uber_states::UberState value;
            void execute(Seed& seed, SeedMemory& memory) const override { timers.push_back({toggle, value}); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Timer -> toggle({}) value({})", toggle.to_string(), value.to_string());
            }
        };

        struct IsInHitbox final : IInstruction {
            void execute(Seed& seed, SeedMemory& memory) const override {
                app::Rect box{
                    memory.floats.get(0),
                    memory.floats.get(1),
                    memory.floats.get(2) - memory.floats.get(0),
                    memory.floats.get(3) - memory.floats.get(1),
                };

                memory.booleans.set(0, modloader::math::in_rect(core::api::game::player::get_position(), box));
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("IsInHitBox -> {}, {}, {}, {}", memory.floats.get(0), memory.floats.get(1), memory.floats.get(2), memory.floats.get(3));
            }
        };

        struct WorldName final : IInstruction {
            explicit WorldName(const int id) :
                id(id) {}

            int id;

            void execute(Seed& seed, SeedMemory& memory) const override {
                const auto world = multiplayer_universe().get_world(id);
                memory.strings.set(0, world == nullptr ? "" : world->name());
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return std::format("WorldName {}", id); }
        };

        struct QueuedMessage final : IInstruction {
            QueuedMessage(const std::optional<std::size_t> id, const bool prioritized) :
                id(id),
                prioritized(prioritized) {}

            std::optional<std::size_t> id;
            bool prioritized;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const auto handle = core::message_controller().queue_central({
                    .text = core::Property<std::string>(memory.strings.get(0)),
                    .duration = memory.floats.get(0),
                    .prioritized = prioritized,
                });

                if (id.has_value()) {
                    central_message_boxes[id.value()] = {.handle = handle};
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format(
                    "Queued{}Message{} -> '{}' with timeout {}",
                    prioritized ? "Priority" : "",
                    id.has_value() ? std::format(" {}", id.value()) : "",
                    memory.strings.get(0),
                    memory.floats.get(0)
                );
            }
        };

        struct QueuedMessageText final : IInstruction {
            explicit QueuedMessageText(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const auto it = central_message_boxes.find(id);
                if (it == central_message_boxes.end() || it->second.handle->message.expired()) {
                    it->second.handle->message.lock()->text().set(memory.strings.get(0));
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("QueuedMessageText {} -> '{}'", id, memory.strings.get(0));
            }
        };

        struct QueuedMessageTimeout final : IInstruction {
            explicit QueuedMessageTimeout(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const auto it = central_message_boxes.find(id);
                if (it == central_message_boxes.end() || it->second.handle->message.expired()) {
                    it->second.handle->time_left = memory.floats.get(0);
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("QueuedMessageTimeout {} -> {:.3}", id, memory.floats.get(0));
            }
        };

        template<bool on_visible>
        struct QueuedMessageCallback final : IInstruction {
            explicit QueuedMessageCallback(const std::size_t id, const std::size_t command) :
                id(id),
                command(command) {}

            std::size_t id;
            std::size_t command;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const auto it = central_message_boxes.find(id);
                if (it == central_message_boxes.end()) {
                    on_visible ? it->second.visible_callback : it->second.hidden_callback = command;
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("QueuedMessage{}Callback {} -> {}", on_visible ? "Visible" : "Hidden", id, command);
            }
        };

        struct FreeMessageCreate final : IInstruction {
            explicit FreeMessageCreate(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                message_boxes_with_timeouts.erase(id);
                message_boxes[id].message = std::make_shared<core::api::messages::MessageBox>();
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return std::format("FreeMessageCreate {}", id); }
        };

        struct FreeMessageDestroy final : IInstruction {
            explicit FreeMessageDestroy(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                message_boxes.erase(id);
                message_boxes_with_timeouts.erase(id);
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return std::format("FreeMessageDestroy {}", id); }
        };

        struct FreeMessageShow final : IInstruction {
            explicit FreeMessageShow(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->show(false, memory.booleans.get(0));
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return std::format("FreeMessageShow {}", id); }
        };

        struct FreeMessageHide final : IInstruction {
            explicit FreeMessageHide(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->hide(false);
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return std::format("FreeMessageHide {}", id); }
        };

        struct FreeMessageText final : IInstruction {
            explicit FreeMessageText(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->text().set(memory.strings.get(0));
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("FreeMessageText {} -> '{}'", id, memory.strings.get(0));
            }
        };

        struct FreeMessageTimeout final : IInstruction {
            explicit FreeMessageTimeout(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].timeout = memory.floats.get(0);
                    message_boxes_with_timeouts.emplace(id);
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("FreeMessageTimeout {} -> {:.3}", id, memory.floats.get(0));
            }
        };

        struct FreeMessageBackground final : IInstruction {
            explicit FreeMessageBackground(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->show_box().set(memory.booleans.get(0));
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("FreeMessageBackground {} -> {}", id, memory.booleans.get(0));
            }
        };

        struct FreeMessagePosition final : IInstruction {
            explicit FreeMessagePosition(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->position().set(memory.floats.get(0), memory.floats.get(1), 0.f);
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("FreeMessagePosition {} -> {:.3}, {:.3}", id, memory.floats.get(0), memory.floats.get(1));
            }
        };

        struct FreeMessageAlignment final : IInstruction {
            FreeMessageAlignment(const std::size_t id, const app::AlignmentMode__Enum alignment) :
                id(id),
                alignment(alignment) {}

            std::size_t id;
            app::AlignmentMode__Enum alignment;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->alignment().set(alignment);
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("FreeMessageAlignment {} -> {}", id, static_cast<int>(alignment));
            }
        };

        struct FreeMessageScreenPosition final : IInstruction {
            FreeMessageScreenPosition(const std::size_t id, const core::api::messages::ScreenPosition screen_position) :
                id(id),
                screen_position(screen_position) {}

            std::size_t id;
            core::api::messages::ScreenPosition screen_position;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->screen_position().set(screen_position);
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("FreeMessageScreenPosition {} -> {}", id, static_cast<int>(screen_position));
            }
        };

        struct Save final : IInstruction {
            void execute(Seed& seed, SeedMemory& memory) const override { core::api::game::save(); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return "Save"; }
        };

        struct Checkpoint final : IInstruction {
            void execute(Seed& seed, SeedMemory& memory) const override { core::api::game::checkpoint(); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return "Checkpoint"; }
        };

        struct Warp final : IInstruction {
            void execute(Seed& seed, SeedMemory& memory) const override { game::teleport({memory.floats.get(0), memory.floats.get(1), 0.f}); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Warp -> {}, {}", memory.floats.get(0), memory.floats.get(1));
            }
        };

        struct Equip final : IInstruction {
            Equip(const app::EquipmentType__Enum equipment, const app::SpellInventory_Binding__Enum slot) :
                equipment(equipment),
                slot(slot) {}

            app::EquipmentType__Enum equipment;
            app::SpellInventory_Binding__Enum slot;

            void execute(Seed& seed, SeedMemory& memory) const override { core::api::game::player::bind(slot, equipment); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Equip -> {}, {}", static_cast<int>(equipment), static_cast<int>(slot));
            }
        };

        struct Unequip final : IInstruction {
            explicit Unequip(const app::EquipmentType__Enum equipment) :
                equipment(equipment) {}

            app::EquipmentType__Enum equipment;

            void execute(Seed& seed, SeedMemory& memory) const override { core::api::game::player::unbind(equipment); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("Unequip -> {}", static_cast<int>(equipment));
            }
        };

        struct TriggerKeybind final : IInstruction {
            explicit TriggerKeybind(const Action action) :
                action(action) {}

            Action action;
            void execute(Seed& seed, SeedMemory& memory) const override {
                input::set_action(action, true);
                input::set_action(action, false);
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("TriggerKeybind -> {}", static_cast<int>(action));
            }
        };

        template<bool sync>
        struct ServerSync final : IInstruction {
            explicit ServerSync(const int group, const int member) :
                group(group),
                member(member) {}

            int group;
            int member;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                multiplayer_universe().uber_state_handler().set_unsyncable(state, !sync);
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("ServerSync -> {}|{}", group, member);
            }
        };

        struct SetSpoiler final : IInstruction {
            explicit SetSpoiler(std::string location, const MapIcon icon) :
                location(std::move(location)),
                icon(icon) {}

            std::string location;
            MapIcon icon;

            void execute(Seed& seed, SeedMemory& memory) const override { game::map::set_spoiler_data(location, icon, memory.strings.get(0)); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return std::format("SetSpoiler -> {}", location); }
        };

        struct WarpIconCreate final : IInstruction {
            explicit WarpIconCreate(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const auto icon = add_icon(
                    game::map::FilterFlag::All | game::map::FilterFlag::Teleports | game::map::FilterFlag::InLogic | game::map::FilterFlag::Spoilers
                );

                icon->name().set("custom_warp_icon");
                icon->label().set("Warp");
                icon->icon().set(MapIcon::SavePedestal);
                icon->position().set(memory.floats.get(0), memory.floats.get(1));
                icon->can_teleport().set(true);
                warp_icons[id] = icon;
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return std::format("WarpIconCreate {}", id); }
        };

        struct WarpIconLabel final : IInstruction {
            explicit WarpIconLabel(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const auto icon = warp_icons.find(id);
                if (icon != warp_icons.end()) {
                    icon->second->name().set(std::format("custom_warp_icon -> {}", memory.strings.get(0)));
                    icon->second->label().set(memory.strings.get(0));
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("WarpIconLabel {} -> {}", id, memory.strings.get(0));
            }
        };

        struct WarpIconDestroy final : IInstruction {
            explicit WarpIconDestroy(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const auto icon = warp_icons.find(id);
                if (icon != warp_icons.end()) {
                    remove_icon(icon->second);
                    warp_icons.erase(icon);
                }
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return std::format("WarpIconDestroy {}", id); }
        };

        struct ShopPrice final : IInstruction {
            ShopPrice(const int group, const int member) :
                group(group),
                member(member) {}

            int group;
            int member;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                const auto slot = game::shops::shop_slot_from_state(state);
                slot->cost.set(memory.integers.get(0));
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("ShopPrice {}|{}", group, member);
            }
        };

        struct ShopName final : IInstruction {
            ShopName(const int group, const int member) :
                group(group),
                member(member) {}

            int group;
            int member;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                const auto slot = game::shops::shop_slot_from_state(state);
                slot->normal.name.set(memory.strings.get(0));
                slot->locked.name.set(memory.strings.get(0));
                slot->hidden.name.set(memory.strings.get(0));
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("ShopName {}|{}", group, member);
            }
        };

        struct ShopDescription final : IInstruction {
            ShopDescription(const int group, const int member) :
                group(group),
                member(member) {}

            int group;
            int member;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                const auto slot = game::shops::shop_slot_from_state(state);
                slot->normal.description.set(memory.strings.get(0));
                slot->locked.description.set(memory.strings.get(0));
                slot->hidden.description.set(memory.strings.get(0));
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("ShopDescription {}|{}", group, member);
            }
        };

        struct ShopIcon final : IInstruction {
            ShopIcon(const int group, const int member, std::string icon) :
                group(group),
                member(member),
                icon(std::move(icon)) {}

            int group;
            int member;
            std::string icon;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                const auto slot = game::shops::shop_slot_from_state(state);
                const auto texture = core::api::graphics::textures::get_texture(icon);
                slot->normal.icon = texture;
                slot->locked.icon = texture;
                slot->hidden.icon = texture;
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("ShopIcon {}|{}", group, member);
            }
        };

        struct ShopHidden final : IInstruction {
            ShopHidden(const int group, const int member) :
                group(group),
                member(member) {}

            int group;
            int member;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                const auto slot = game::shops::shop_slot_from_state(state);
                slot->is_hidden = memory.booleans.get(0);
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("ShopHidden {}|{} -> {}", group, member, memory.booleans.get(0));
            }
        };

        struct ShopLocked final : IInstruction {
            ShopLocked(const int group, const int member) :
                group(group),
                member(member) {}

            int group;
            int member;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                const auto slot = game::shops::shop_slot_from_state(state);
                slot->is_locked = memory.booleans.get(0);
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("ShopLocked {}|{} -> {}", group, member, memory.booleans.get(0));
            }
        };

        struct WheelItemName final : IInstruction {
            WheelItemName(const int wheel, const features::wheel::WheelItemPosition position) :
                wheel(wheel),
                position(position) {}

            int wheel;
            features::wheel::WheelItemPosition position;
            void execute(Seed& seed, SeedMemory& memory) const override { set_wheel_item_name(wheel, position, memory.strings.get(0)); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("WheelItemName {}, {}", wheel, static_cast<int>(position));
            }
        };

        struct WheelItemDescription final : IInstruction {
            WheelItemDescription(const int wheel, const features::wheel::WheelItemPosition position) :
                wheel(wheel),
                position(position) {}

            int wheel;
            features::wheel::WheelItemPosition position;
            void execute(Seed& seed, SeedMemory& memory) const override { set_wheel_item_description(wheel, position, memory.strings.get(0)); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("WheelItemDescription {}, {}", wheel, static_cast<int>(position));
            }
        };

        struct WheelItemIcon final : IInstruction {
            WheelItemIcon(const int wheel, const features::wheel::WheelItemPosition position, std::string icon) :
                wheel(wheel),
                position(position),
                icon(std::move(icon)) {}

            int wheel;
            features::wheel::WheelItemPosition position;
            std::string icon;
            void execute(Seed& seed, SeedMemory& memory) const override { set_wheel_item_texture(wheel, position, icon); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("WheelItemIcon {}, {}", wheel, static_cast<int>(position));
            }
        };

        struct WheelItemColor final : IInstruction {
            WheelItemColor(const int wheel, const features::wheel::WheelItemPosition position) :
                wheel(wheel),
                position(position) {}

            int wheel;
            features::wheel::WheelItemPosition position;
            void execute(Seed& seed, SeedMemory& memory) const override {
                set_wheel_item_color(wheel, position, memory.integers.get(0), memory.integers.get(1), memory.integers.get(2), memory.integers.get(3));
            }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("WheelItemColor {}, {}", wheel, static_cast<int>(position));
            }
        };

        struct WheelItemCommand final : IInstruction {
            WheelItemCommand(
                const int wheel,
                const features::wheel::WheelItemPosition position,
                const app::SpellInventory_Binding__Enum bind,
                const std::size_t command
            ) :
                wheel(wheel),
                position(position),
                bind(bind),
                command(command) {}

            int wheel;
            features::wheel::WheelItemPosition position;
            app::SpellInventory_Binding__Enum bind;
            std::size_t command;
            void execute(Seed& seed, SeedMemory& memory) const override {
                set_wheel_item_callback(wheel, position, bind, [&](auto, auto, auto) { call(); });
            }

            void call() const { game_seed().handle_command(command); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("WheelItemCommand {}, {}", wheel, static_cast<int>(position));
            }
        };

        struct WheelItemDestroy final : IInstruction {
            explicit WheelItemDestroy(const int wheel, const features::wheel::WheelItemPosition position) :
                wheel(wheel),
                position(position) {}

            int wheel;
            features::wheel::WheelItemPosition position;
            void execute(Seed& seed, SeedMemory& memory) const override { set_wheel_item_description(wheel, position, memory.strings.get(0)); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
                return std::format("WheelItemDestroy {}, {}", wheel, static_cast<int>(position));
            }
        };

        struct WheelSwitch final : IInstruction {
            explicit WheelSwitch(const int wheel) :
                wheel(wheel) {}

            int wheel;
            void execute(Seed& seed, SeedMemory& memory) const override { features::wheel::set_active_wheel(wheel); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return std::format("WheelSwitch {}", wheel); }
        };

        struct WheelPinned final : IInstruction {
            explicit WheelPinned(const int wheel) :
                wheel(wheel) {}

            int wheel;
            void execute(Seed& seed, SeedMemory& memory) const override { features::wheel::set_wheel_sticky(wheel, memory.booleans.get(0)); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return std::format("WheelPinned {}", wheel); }
        };

        struct WheelsClear final : IInstruction {
            void execute(Seed& seed, SeedMemory& memory) const override { features::wheel::clear_wheels(); }

            [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override { return "WheelsClear"; }
        };

        template<bool check>
        std::unique_ptr<IInstruction> create_execute(const nlohmann::json& j) {
            return std::make_unique<Execute<check>>(j.get<int>());
        }

        template<typename T>
        std::unique_ptr<IInstruction> create_set(const nlohmann::json& j) {
            return std::make_unique<Set<T>>(j.get<T>());
        }

        template<typename T>
        std::unique_ptr<IInstruction> create_copy(const nlohmann::json& j) {
            return std::make_unique<Copy<T>>(j.at(0).get<std::size_t>(), j.at(1).get<std::size_t>());
        }

        template<typename T>
        std::unique_ptr<IInstruction> create_fetch(const nlohmann::json& j) {
            return std::make_unique<Fetch<T>>(j.at("group").get<int>(), j.at("member").get<int>());
        }

        template<typename T>
        std::unique_ptr<IInstruction> create_store(const nlohmann::json& j) {
            return std::make_unique<Store<T>>(j.at(0).at("group").get<int>(), j.at(0).at("member").get<int>(), j.at(1).get<bool>());
        }

        template<typename T>
        std::unique_ptr<IInstruction> create_compare_equal(const nlohmann::json& j) {
            return std::make_unique<CompareEqual<T>>(parse_enum<EqualityComparator>(j));
        }

        template<typename T>
        std::unique_ptr<IInstruction> create_compare(const nlohmann::json& j) {
            return std::make_unique<Compare<T>>(parse_enum<Comparator>(j));
        }

        std::unique_ptr<IInstruction> create_logic(const nlohmann::json& j) { return std::make_unique<LogicOperation>(parse_enum<LogicOperator>(j)); }

        template<typename T>
        std::unique_ptr<IInstruction> create_arithmetic(const nlohmann::json& j) {
            return std::make_unique<ArithmeticOperation<T>>(parse_enum<ArithmeticOperator>(j));
        }

        std::unique_ptr<IInstruction> create_concatenate(const nlohmann::json&) { return std::make_unique<Concatenate>(); }

        template<typename A, typename B>
        std::unique_ptr<IInstruction> create_cast(const nlohmann::json& j) {
            return std::make_unique<Cast<A, B>>();
        }

        std::unique_ptr<IInstruction> create_round(const nlohmann::json&) { return std::make_unique<Round>(); }
        std::unique_ptr<IInstruction> create_bool_to_string(const nlohmann::json&) { return std::make_unique<BoolToString>(); }
        std::unique_ptr<IInstruction> create_int_to_string(const nlohmann::json&) { return std::make_unique<IntToString>(); }
        std::unique_ptr<IInstruction> create_float_to_string(const nlohmann::json&) { return std::make_unique<FloatToString>(); }
        std::unique_ptr<IInstruction> create_define_timer(const nlohmann::json& j) {
            core::api::uber_states::UberState toggle(j.at(0).at("group").get<int>(), j.at(0).at("member").get<int>());
            core::api::uber_states::UberState value(j.at(1).at("group").get<int>(), j.at(1).at("member").get<int>());
            return std::make_unique<DefineTimer>(toggle, value);
        }

        std::unique_ptr<IInstruction> create_is_in_hitbox(const nlohmann::json&) { return std::make_unique<IsInHitbox>(); }

        std::unique_ptr<IInstruction> create_world_name(const nlohmann::json& j) { return std::make_unique<WorldName>(j.at(0).get<int>()); }

        std::unique_ptr<IInstruction> create_save(const nlohmann::json&) { return std::make_unique<Save>(); }
        std::unique_ptr<IInstruction> create_checkpoint(const nlohmann::json&) { return std::make_unique<Checkpoint>(); }
        std::unique_ptr<IInstruction> create_warp(const nlohmann::json&) { return std::make_unique<Warp>(); }

        std::unique_ptr<IInstruction> create_equip(const nlohmann::json& j) {
            return std::make_unique<Equip>(parse_enum<app::EquipmentType__Enum>(j.at(0)), parse_enum<app::SpellInventory_Binding__Enum>(j.at(1)));
        }

        std::unique_ptr<IInstruction> create_unequip(const nlohmann::json& j) { return std::make_unique<Unequip>(parse_enum<app::EquipmentType__Enum>(j)); }

        std::unique_ptr<IInstruction> create_trigger_keybind(const nlohmann::json& j) { return std::make_unique<TriggerKeybind>(j.get<Action>()); }

        std::unique_ptr<IInstruction> create_q_message(const nlohmann::json& j) {
            const auto id = j.at(0).is_null() ? std::nullopt : std::make_optional(j.at(0).get<int>());
            const auto prioritized = j.at(1).get<bool>();
            return std::make_unique<QueuedMessage>(id, prioritized);
        }

        std::unique_ptr<IInstruction> create_q_message_text(const nlohmann::json& j) {
            const auto id = j.at(0).get<int>();
            return std::make_unique<QueuedMessageText>(id);
        }

        std::unique_ptr<IInstruction> create_q_message_timeout(const nlohmann::json& j) {
            const auto id = j.at(0).get<int>();
            return std::make_unique<QueuedMessageTimeout>(id);
        }

        template<bool on_visible>
        std::unique_ptr<IInstruction> create_q_message_callback(const nlohmann::json& j) {
            const auto id = j.at(0).get<int>();
            const auto command = j.at(1).get<int>();
            return std::make_unique<QueuedMessageCallback<on_visible>>(id, command);
        }

        std::unique_ptr<IInstruction> create_f_message_create(const nlohmann::json& j) { return std::make_unique<FreeMessageCreate>(j.get<std::size_t>()); }

        std::unique_ptr<IInstruction> create_f_message_destroy(const nlohmann::json& j) { return std::make_unique<FreeMessageDestroy>(j.get<std::size_t>()); }

        std::unique_ptr<IInstruction> create_f_message_show(const nlohmann::json& j) { return std::make_unique<FreeMessageShow>(j.get<std::size_t>()); }

        std::unique_ptr<IInstruction> create_f_message_hide(const nlohmann::json& j) { return std::make_unique<FreeMessageHide>(j.get<std::size_t>()); }

        std::unique_ptr<IInstruction> create_f_message_text(const nlohmann::json& j) { return std::make_unique<FreeMessageText>(j.get<std::size_t>()); }

        std::unique_ptr<IInstruction> create_f_message_timeout(const nlohmann::json& j) { return std::make_unique<FreeMessageTimeout>(j.get<std::size_t>()); }

        std::unique_ptr<IInstruction> create_f_message_background(const nlohmann::json& j) {
            return std::make_unique<FreeMessageBackground>(j.get<std::size_t>());
        }

        std::unique_ptr<IInstruction> create_f_message_position(const nlohmann::json& j) { return std::make_unique<FreeMessagePosition>(j.get<std::size_t>()); }

        std::unique_ptr<IInstruction> create_f_message_alignment(const nlohmann::json& j) {
            return std::make_unique<FreeMessageAlignment>(j.at(0).get<std::size_t>(), parse_enum<app::AlignmentMode__Enum>(j.at(0)));
        }

        std::unique_ptr<IInstruction> create_f_message_screen_position(const nlohmann::json& j) {
            return std::make_unique<FreeMessageScreenPosition>(j.at(0).get<std::size_t>(), parse_enum<core::api::messages::ScreenPosition>(j.at(1)));
        }

        template<bool sync>
        std::unique_ptr<IInstruction> create_server_sync(const nlohmann::json& j) {
            return std::make_unique<ServerSync<sync>>(j.at(0).get<int>(), j.at(1).get<int>());
        }

        std::unique_ptr<IInstruction> create_set_spoiler(const nlohmann::json& j) {
            return std::make_unique<SetSpoiler>(j.at(0).get<std::string>(), parse_enum<MapIcon>(j.at(1)));
        }

        std::unique_ptr<IInstruction> create_warp_icon_create(const nlohmann::json& j) { return std::make_unique<WarpIconCreate>(j.at(0).get<std::size_t>()); }

        std::unique_ptr<IInstruction> create_warp_icon_label(const nlohmann::json& j) { return std::make_unique<WarpIconLabel>(j.at(0).get<std::size_t>()); }

        std::unique_ptr<IInstruction> create_warp_icon_destroy(const nlohmann::json& j) {
            return std::make_unique<WarpIconDestroy>(j.at(0).get<std::size_t>());
        }

        std::unique_ptr<IInstruction> create_shop_price(const nlohmann::json& j) {
            return std::make_unique<ShopPrice>(j.at("group").get<int>(), j.at("member").get<int>());
        }

        std::unique_ptr<IInstruction> create_shop_name(const nlohmann::json& j) {
            return std::make_unique<ShopName>(j.at("group").get<int>(), j.at("member").get<int>());
        }

        std::unique_ptr<IInstruction> create_shop_description(const nlohmann::json& j) {
            return std::make_unique<ShopDescription>(j.at("group").get<int>(), j.at("member").get<int>());
        }

        std::unique_ptr<IInstruction> create_shop_icon(const nlohmann::json& j) {
            return std::make_unique<ShopIcon>(j.at(0).at("group").get<int>(), j.at(0).at("member").get<int>(), parse_icon(j.at(1)));
        }

        std::unique_ptr<IInstruction> create_shop_hidden(const nlohmann::json& j) {
            return std::make_unique<ShopHidden>(j.at("group").get<int>(), j.at("member").get<int>());
        }

        std::unique_ptr<IInstruction> create_shop_locked(const nlohmann::json& j) {
            return std::make_unique<ShopLocked>(j.at("group").get<int>(), j.at("member").get<int>());
        }

        std::unique_ptr<IInstruction> create_wheel_item_name(const nlohmann::json& j) {
            return std::make_unique<WheelItemName>(j.at(0).get<int>(), parse_enum<features::wheel::WheelItemPosition>(j.at(1)));
        }

        std::unique_ptr<IInstruction> create_wheel_item_description(const nlohmann::json& j) {
            return std::make_unique<WheelItemDescription>(j.at(0).get<int>(), parse_enum<features::wheel::WheelItemPosition>(j.at(1)));
        }

        std::unique_ptr<IInstruction> create_wheel_item_icon(const nlohmann::json& j) {
            return std::make_unique<WheelItemIcon>(j.at(0).get<int>(), parse_enum<features::wheel::WheelItemPosition>(j.at(1)), parse_icon(j.at(2)));
        }

        std::unique_ptr<IInstruction> create_wheel_item_color(const nlohmann::json& j) {
            return std::make_unique<WheelItemColor>(j.at(0).get<int>(), parse_enum<features::wheel::WheelItemPosition>(j.at(1)));
        }

        std::unique_ptr<IInstruction> create_wheel_item_command(const nlohmann::json& j) {
            return std::make_unique<WheelItemCommand>(
                j.at(0).get<int>(),
                parse_enum<features::wheel::WheelItemPosition>(j.at(1)),
                parse_enum<app::SpellInventory_Binding__Enum>(j.at(2)),
                j.at(3).get<std::size_t>()
            );
        }

        std::unique_ptr<IInstruction> create_wheel_item_destroy(const nlohmann::json& j) {
            return std::make_unique<WheelItemDestroy>(j.at(0).get<int>(), parse_enum<features::wheel::WheelItemPosition>(j.at(1)));
        }

        std::unique_ptr<IInstruction> create_wheel_switch(const nlohmann::json& j) { return std::make_unique<WheelSwitch>(j.get<int>()); }

        std::unique_ptr<IInstruction> create_wheel_pinned(const nlohmann::json& j) { return std::make_unique<WheelPinned>(j.get<int>()); }

        std::unique_ptr<IInstruction> create_wheels_clear(const nlohmann::json& j) { return std::make_unique<WheelsClear>(); }

        std::unordered_map<std::string, std::function<std::unique_ptr<IInstruction>(const nlohmann::json& j)>> creation_functors{
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
            {"Round", create_round},
            {"Concatenate", create_concatenate},
            {"IntegerToFloat", create_cast<int, float>},
            {"FloatToInteger", create_cast<float, int>},
            {"BooleanToString", create_bool_to_string},
            {"IntegerToString", create_int_to_string},
            {"FloatToString", create_float_to_string},
            {"DefineTimer", create_define_timer},
            {"IsInHitbox", create_is_in_hitbox},
            {"WorldName", create_world_name},
            {"QueuedMessage", create_q_message},
            {"QueuedMessageText", create_q_message_text},
            {"QueuedMessageTimeout", create_q_message_timeout},
            {"QueuedMessageVisibleCallback", create_q_message_callback<true>},
            {"QueuedMessageHiddenCallback", create_q_message_callback<false>},
            {"FreeMessage", create_f_message_create},
            {"FreeMessageDestroy", create_f_message_destroy},
            {"FreeMessageShow", create_f_message_show},
            {"FreeMessageHide", create_f_message_hide},
            {"FreeMessageText", create_f_message_text},
            {"FreeMessageTimeout", create_f_message_timeout},
            {"FreeMessageBackground", create_f_message_background},
            {"FreeMessagePosition", create_f_message_position},
            {"FreeMessageAlignment", create_f_message_alignment},
            {"FreeMessageScreenPosition", create_f_message_screen_position},
            {"Save", create_save},
            {"Checkpoint", create_checkpoint},
            {"Warp", create_warp},
            {"Equip", create_equip},
            {"Unequip", create_unequip},
            {"TriggerKeybind", create_trigger_keybind},
            {"EnableServerSync", create_server_sync<true>},
            {"DisableServerSync", create_server_sync<false>},
            {"SetSpoilerMapIcon", create_set_spoiler},
            {"CreateWarpIcon", create_warp_icon_create},
            {"SetWarpIconLabel", create_warp_icon_label},
            {"DestroyWarpIcon", create_warp_icon_destroy},
            {"SetShopItemPrice", create_shop_price},
            {"SetShopItemName", create_shop_name},
            {"SetShopItemDescription", create_shop_description},
            {"SetShopItemIcon", create_shop_icon},
            {"SetShopItemHidden", create_shop_hidden},
            {"SetShopItemLocked", create_shop_locked},
            {"SetWheelItemName", create_wheel_item_name},
            {"SetWheelItemDescription", create_wheel_item_description},
            {"SetWheelItemIcon", create_wheel_item_icon},
            {"SetWheelItemColor", create_wheel_item_color},
            {"SetWheelItemCommand", create_wheel_item_command},
            {"DestroyWheelItem", create_wheel_item_destroy},
            {"SwitchWheel", create_wheel_switch},
            {"SetWheelPinned", create_wheel_pinned},
            {"ClearAllWheels", create_wheels_clear},
        };
    } // namespace

    std::unique_ptr<IInstruction> create_instruction(const nlohmann::json& j) {
        if (j.is_string()) {
            const auto it = creation_functors.find(j.get<std::string>());
            if (it == creation_functors.end()) {
                throw RandoException("Unknown command");
            }

            return std::move(it->second(j));
        } else {
            const auto it = creation_functors.find(j.begin().key());
            if (it == creation_functors.end()) {
                throw RandoException("Unknown command");
            }

            return std::move(it->second(j.begin().value()));
        }
    }

    void destroy_volatile_seed_data() {
        timers.clear();
        central_message_boxes.clear();
        for (const auto& icon: warp_icons | std::views::values) {
            remove_icon(icon);
        }

        warp_icons.clear();
    }
} // namespace randomizer::seed

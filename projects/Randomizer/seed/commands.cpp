#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/core.h>
#include <Core/utils/json_serializers.h>
#include <Modloader/il2cpp_math.h>
#include <Randomizer/features/wheel.h>
#include <Randomizer/game/map/map.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/game/teleport.h>
#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/commands.h>
#include <Randomizer/seed/seed.h>
#include <functional>

namespace randomizer::seed {
    namespace {
        struct SeedMessage {
            std::shared_ptr<core::api::messages::MessageBox> message;
            std::optional<float> timeout;
        };

        std::unordered_map<std::size_t, std::shared_ptr<game::map::Icon>> warp_icons;
        std::unordered_map<std::size_t, SeedMessage> message_boxes;
        std::unordered_set<std::size_t> message_boxes_with_timeouts;
        bool prevent_grant = false;

        auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            game_seed().prevent_grants([]() { return prevent_grant; });
        });

        auto on_update = core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [](auto, auto) {
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

        template<bool check_bool>
        struct Execute final : ICommand {
            explicit Execute(const int index) :
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
            explicit Set(const T value) :
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
            explicit CompareEqual(const EqualityComparator op) :
                op(op) {}

            EqualityComparator op;

            void execute(Seed& seed, SeedMemory& memory) const override {
                memory.booleans.set(0, op == EqualityComparator::Equal && memory.get<T>(1) == memory.get<T>(0));
            }
        };

        template<typename T>
        struct Compare final : ICommand {
            explicit Compare(const Comparator op) :
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
            explicit LogicOperation(const LogicOperator op) :
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
            explicit ArithmeticOperation(const ArithmeticOperator op) :
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
            void execute(Seed& seed, SeedMemory& memory) const override { memory.strings.set(0, memory.strings.get(1) + memory.strings.get(0)); }
        };

        template<typename A, typename B>
        struct Cast final : ICommand {
            void execute(Seed& seed, SeedMemory& memory) const override { memory.set(0, static_cast<B>(memory.get<A>(0))); }
        };

        struct BoolToString final : ICommand {
            void execute(Seed& seed, SeedMemory& memory) const override { memory.set<std::string>(0, memory.get<bool>(0) ? "true" : "false"); }
        };

        struct IntToString final : ICommand {
            void execute(Seed& seed, SeedMemory& memory) const override { memory.set(0, std::format("{}", memory.get<int>(0))); }
        };

        struct FloatToString final : ICommand {
            void execute(Seed& seed, SeedMemory& memory) const override { memory.set(0, std::format("{:.3f}", memory.get<float>(0))); }
        };

        struct DefineTimer final : ICommand {
            void execute(Seed& seed, SeedMemory& memory) const override {
                // TODO: Implement this or change it.
                throw std::exception("Not Implemented");
            }
        };

        struct IsInHitbox final : ICommand {
            void execute(Seed& seed, SeedMemory& memory) const override {
                app::Rect box{
                    memory.floats.get(1),
                    memory.floats.get(2),
                    memory.floats.get(3) - memory.floats.get(1),
                    memory.floats.get(0) - memory.floats.get(2),
                };

                memory.booleans.set(0, modloader::math::in_rect(core::api::game::player::get_position(), box));
            }
        };

        struct WorldName final : ICommand {
            explicit WorldName(const int id) :
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

        struct ControlledMessageCreate final : ICommand {
            explicit ControlledMessageCreate(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                message_boxes_with_timeouts.erase(id);
                message_boxes[id].message = std::make_shared<core::api::messages::MessageBox>();
            }
        };

        struct ControlledMessageDestroy final : ICommand {
            explicit ControlledMessageDestroy(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                message_boxes.erase(id);
                message_boxes_with_timeouts.erase(id);
            }
        };

        struct ControlledMessageShow final : ICommand {
            explicit ControlledMessageShow(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->show(false, memory.booleans.get(0));
                }
            }
        };

        struct ControlledMessageHide final : ICommand {
            explicit ControlledMessageHide(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->hide(false);
                }
            }
        };

        struct ControlledMessageText final : ICommand {
            explicit ControlledMessageText(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->text().set(memory.strings.get(0));
                }
            }
        };

        struct ControlledMessageTimeout final : ICommand {
            explicit ControlledMessageTimeout(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].timeout = memory.floats.get(0);
                    message_boxes_with_timeouts.emplace(id);
                }
            }
        };

        struct ControlledMessageBackground final : ICommand {
            explicit ControlledMessageBackground(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->show_box().set(memory.booleans.get(0));
                }
            }
        };

        struct ControlledMessagePosition final : ICommand {
            explicit ControlledMessagePosition(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->position().set(memory.floats.get(0), memory.floats.get(1), 0.f);
                }
            }
        };

        struct ControlledMessageAlignment final : ICommand {
            ControlledMessageAlignment(const std::size_t id, const app::AlignmentMode__Enum alignment) :
                id(id),
                alignment(alignment) {}

            std::size_t id;
            app::AlignmentMode__Enum alignment;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->alignment().set(alignment);
                }
            }
        };

        struct ControlledMessageScreenPosition final : ICommand {
            ControlledMessageScreenPosition(const std::size_t id, const core::api::messages::ScreenPosition screen_position) :
                id(id),
                screen_position(screen_position) {}

            std::size_t id;
            core::api::messages::ScreenPosition screen_position;
            void execute(Seed& seed, SeedMemory& memory) const override {
                if (message_boxes.contains(id)) {
                    message_boxes[id].message->screen_position().set(screen_position);
                }
            }
        };

        struct Save final : ICommand {
            void execute(Seed& seed, SeedMemory& memory) const override { core::api::game::save(); }
        };

        struct Checkpoint final : ICommand {
            void execute(Seed& seed, SeedMemory& memory) const override { core::api::game::checkpoint(); }
        };

        struct Warp final : ICommand {
            void execute(Seed& seed, SeedMemory& memory) const override { game::teleport({memory.floats.get(0), memory.floats.get(1), 0.f}); }
        };

        struct Equip final : ICommand {
            Equip(const app::EquipmentType__Enum equipment, const app::SpellInventory_Binding__Enum slot) :
                equipment(equipment),
                slot(slot) {}

            app::EquipmentType__Enum equipment;
            app::SpellInventory_Binding__Enum slot;

            void execute(Seed& seed, SeedMemory& memory) const override { core::api::game::player::bind(slot, equipment); }
        };

        struct Unequip final : ICommand {
            explicit Unequip(const app::EquipmentType__Enum equipment) :
                equipment(equipment) {}

            app::EquipmentType__Enum equipment;

            void execute(Seed& seed, SeedMemory& memory) const override { core::api::game::player::unbind(equipment); }
        };

        struct TriggerKeybind final : ICommand {
            explicit TriggerKeybind(const Action action) :
                action(action) {}

            Action action;
            void execute(Seed& seed, SeedMemory& memory) const override {
                input::set_action(action, true);
                input::set_action(action, false);
            }
        };

        template<bool sync>
        struct ServerSync final : ICommand {
            explicit ServerSync(const int group, const int member) :
                group(group),
                member(member) {}

            int group;
            int member;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                multiplayer_universe().uber_state_handler().set_unsyncable(state, !sync);
            }
        };

        struct SetSpoiler final : ICommand {
            explicit SetSpoiler(const std::string& location, const MapIcon icon) :
                location(location),
                icon(icon) {}

            std::string location;
            MapIcon icon;

            void execute(Seed& seed, SeedMemory& memory) const override { game::map::set_spoiler_data(location, icon, memory.strings.get(0)); }
        };

        struct WarpIconCreate final : ICommand {
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
        };

        struct WarpIconLabel final : ICommand {
            explicit WarpIconLabel(const std::size_t id) :
                id(id) {}

            std::size_t id;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const auto icon = warp_icons.find(id);
                if (icon != warp_icons.end()) {
                    icon->second->name().set(std::format("custom_warp_icon: {}", memory.strings.get(0)));
                    icon->second->label().set(memory.strings.get(0));
                }
            }
        };

        struct WarpIconDestroy final : ICommand {
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
        };

        struct ShopPrice final : ICommand {
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
        };

        struct ShopName final : ICommand {
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
        };

        struct ShopDescription final : ICommand {
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
        };

        struct ShopIcon final : ICommand {
            ShopIcon(const int group, const int member) :
                group(group),
                member(member) {}

            int group;
            int member;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                const auto slot = game::shops::shop_slot_from_state(state);
                const auto texture = core::api::graphics::textures::get_texture(memory.strings.get(0));
                slot->normal.icon = texture;
                slot->locked.icon = texture;
                slot->hidden.icon = texture;
            }
        };

        struct ShopHidden final : ICommand {
            ShopHidden(const int group, const int member) :
                group(group),
                member(member) {}

            int group;
            int member;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                const auto slot = game::shops::shop_slot_from_state(state);
                slot->visibility = memory.booleans.get(0) ? game::shops::SlotVisibility::Hidden : game::shops::SlotVisibility::Visible;
            }
        };

        struct ShopLocked final : ICommand {
            ShopLocked(const int group, const int member) :
                group(group),
                member(member) {}

            int group;
            int member;
            void execute(Seed& seed, SeedMemory& memory) const override {
                const core::api::uber_states::UberState state(group, member);
                const auto slot = game::shops::shop_slot_from_state(state);
                slot->visibility = memory.booleans.get(0) ? game::shops::SlotVisibility::Locked : game::shops::SlotVisibility::Visible;
            }
        };

        struct WheelItemName final : ICommand {
            WheelItemName(const int wheel, const features::wheel::WheelItemPosition position) :
                wheel(wheel),
                position(position) {}

            int wheel;
            features::wheel::WheelItemPosition position;
            void execute(Seed& seed, SeedMemory& memory) const override { set_wheel_item_name(wheel, position, memory.strings.get(0)); }
        };

        struct WheelItemDescription final : ICommand {
            WheelItemDescription(const int wheel, const features::wheel::WheelItemPosition position) :
                wheel(wheel),
                position(position) {}

            int wheel;
            features::wheel::WheelItemPosition position;
            void execute(Seed& seed, SeedMemory& memory) const override { set_wheel_item_description(wheel, position, memory.strings.get(0)); }
        };

        struct WheelItemIcon final : ICommand {
            WheelItemIcon(const int wheel, const features::wheel::WheelItemPosition position, const std::string& icon) :
                wheel(wheel),
                position(position),
                icon(icon) {}

            int wheel;
            features::wheel::WheelItemPosition position;
            std::string icon;
            void execute(Seed& seed, SeedMemory& memory) const override { set_wheel_item_texture(wheel, position, icon); }
        };

        struct WheelItemColor final : ICommand {
            WheelItemColor(const int wheel, const features::wheel::WheelItemPosition position) :
                wheel(wheel),
                position(position) {}

            int wheel;
            features::wheel::WheelItemPosition position;
            void execute(Seed& seed, SeedMemory& memory) const override {
                set_wheel_item_color(wheel, position, memory.integers.get(0), memory.integers.get(1), memory.integers.get(2), memory.integers.get(3));
            }
        };

        struct WheelItemCommand final : ICommand {
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
        };

        struct WheelItemDestroy final : ICommand {
            explicit WheelItemDestroy(const int wheel, const features::wheel::WheelItemPosition position) :
                wheel(wheel),
                position(position) {}

            int wheel;
            features::wheel::WheelItemPosition position;
            void execute(Seed& seed, SeedMemory& memory) const override { set_wheel_item_description(wheel, position, memory.strings.get(0)); }
        };

        struct WheelSwitch final : ICommand {
            explicit WheelSwitch(const int wheel) :
                wheel(wheel) {}

            int wheel;
            void execute(Seed& seed, SeedMemory& memory) const override { features::wheel::set_active_wheel(wheel); }
        };

        struct WheelPinned final : ICommand {
            explicit WheelPinned(const int wheel) :
                wheel(wheel) {}

            int wheel;
            void execute(Seed& seed, SeedMemory& memory) const override { features::wheel::set_wheel_sticky(wheel, memory.booleans.get(0)); }
        };

        struct WheelsClear final : ICommand {
            void execute(Seed& seed, SeedMemory& memory) const override { features::wheel::clear_wheels(); }
        };

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

        std::unique_ptr<ICommand> create_unequip(const nlohmann::json& j) {
            return std::make_unique<Unequip>(j.at("equipment").get<app::EquipmentType__Enum>());
        }

        std::unique_ptr<ICommand> create_trigger_keybind(const nlohmann::json& j) { return std::make_unique<TriggerKeybind>(j.at("bind").get<Action>()); }

        std::unique_ptr<ICommand> create_c_message_create(const nlohmann::json& j) {
            return std::make_unique<ControlledMessageCreate>(j.at("id").get<std::size_t>());
        }

        std::unique_ptr<ICommand> create_c_message_destroy(const nlohmann::json& j) {
            return std::make_unique<ControlledMessageDestroy>(j.at("id").get<std::size_t>());
        }

        std::unique_ptr<ICommand> create_c_message_show(const nlohmann::json& j) {
            return std::make_unique<ControlledMessageShow>(j.at("id").get<std::size_t>());
        }

        std::unique_ptr<ICommand> create_c_message_hide(const nlohmann::json& j) {
            return std::make_unique<ControlledMessageHide>(j.at("id").get<std::size_t>());
        }

        std::unique_ptr<ICommand> create_c_message_text(const nlohmann::json& j) {
            return std::make_unique<ControlledMessageText>(j.at("id").get<std::size_t>());
        }

        std::unique_ptr<ICommand> create_c_message_timeout(const nlohmann::json& j) {
            return std::make_unique<ControlledMessageTimeout>(j.at("id").get<std::size_t>());
        }

        std::unique_ptr<ICommand> create_c_message_background(const nlohmann::json& j) {
            return std::make_unique<ControlledMessageBackground>(j.at("id").get<std::size_t>());
        }

        std::unique_ptr<ICommand> create_c_message_position(const nlohmann::json& j) {
            return std::make_unique<ControlledMessagePosition>(j.at("id").get<std::size_t>());
        }

        std::unique_ptr<ICommand> create_c_message_alignment(const nlohmann::json& j) {
            return std::make_unique<ControlledMessageAlignment>(j.at("id").get<std::size_t>(), j.at("alignment").get<app::AlignmentMode__Enum>());
        }

        std::unique_ptr<ICommand> create_c_message_screen_position(const nlohmann::json& j) {
            return std::make_unique<ControlledMessageScreenPosition>(
                j.at("id").get<std::size_t>(), j.at("screen_position").get<core::api::messages::ScreenPosition>()
            );
        }

        template<bool sync>
        std::unique_ptr<ICommand> create_server_sync(const nlohmann::json& j) {
            const auto& identifier = j.at("uber_identifier");
            return std::make_unique<ServerSync<sync>>(identifier.at("group").get<int>(), identifier.at("member").get<int>());
        }

        std::unique_ptr<ICommand> create_set_spoiler(const nlohmann::json& j) {
            return std::make_unique<SetSpoiler>(j.at("location").get<std::string>(), j.at("icon").get<MapIcon>());
        }

        std::unique_ptr<ICommand> create_warp_icon_create(const nlohmann::json& j) { return std::make_unique<WarpIconCreate>(j.at("id").get<std::size_t>()); }

        std::unique_ptr<ICommand> create_warp_icon_label(const nlohmann::json& j) { return std::make_unique<WarpIconLabel>(j.at("id").get<std::size_t>()); }

        std::unique_ptr<ICommand> create_warp_icon_destroy(const nlohmann::json& j) { return std::make_unique<WarpIconDestroy>(j.at("id").get<std::size_t>()); }

        std::unique_ptr<ICommand> create_shop_price(const nlohmann::json& j) {
            const auto& identifier = j.at("uber_identifier");
            return std::make_unique<ShopPrice>(identifier.at("group").get<int>(), identifier.at("member").get<int>());
        }

        std::unique_ptr<ICommand> create_shop_name(const nlohmann::json& j) {
            const auto& identifier = j.at("uber_identifier");
            return std::make_unique<ShopName>(identifier.at("group").get<int>(), identifier.at("member").get<int>());
        }

        std::unique_ptr<ICommand> create_shop_description(const nlohmann::json& j) {
            const auto& identifier = j.at("uber_identifier");
            return std::make_unique<ShopDescription>(identifier.at("group").get<int>(), identifier.at("member").get<int>());
        }

        std::unique_ptr<ICommand> create_shop_icon(const nlohmann::json& j) {
            const auto& identifier = j.at("uber_identifier");
            return std::make_unique<ShopIcon>(identifier.at("group").get<int>(), identifier.at("member").get<int>());
        }

        std::unique_ptr<ICommand> create_shop_hidden(const nlohmann::json& j) {
            const auto& identifier = j.at("uber_identifier");
            return std::make_unique<ShopHidden>(identifier.at("group").get<int>(), identifier.at("member").get<int>());
        }

        std::unique_ptr<ICommand> create_shop_locked(const nlohmann::json& j) {
            const auto& identifier = j.at("uber_identifier");
            return std::make_unique<ShopLocked>(identifier.at("group").get<int>(), identifier.at("member").get<int>());
        }

        std::unique_ptr<ICommand> create_wheel_item_name(const nlohmann::json& j) {
            return std::make_unique<WheelItemName>(j.at("wheel").get<int>(), j.at("position").get<features::wheel::WheelItemPosition>());
        }

        std::unique_ptr<ICommand> create_wheel_item_description(const nlohmann::json& j) {
            return std::make_unique<WheelItemDescription>(j.at("wheel").get<int>(), j.at("position").get<features::wheel::WheelItemPosition>());
        }

        std::unique_ptr<ICommand> create_wheel_item_icon(const nlohmann::json& j) {
            const auto& icon = j.at("icon").begin();
            const auto key = icon.key();
            std::string path;
            if (key == "Shard") {
                path = std::format("shard:{}", icon.value().get<int>());
            } else if (key == "Ability") {
                path = std::format("ability:{}", icon.value().get<int>());
            } else if (key == "Equipment") {
                path = std::format("spell:{}", icon.value().get<int>());
            } else if (key == "OpherIcon") {
                path = std::format("opher:{}", icon.value().get<int>());
            } else if (key == "LupoIcon") {
                path = std::format("lupo:{}", icon.value().get<int>());
            } else if (key == "GromIcon") {
                path = std::format("grom:{}", icon.value().get<int>());
            } else if (key == "TuleyIcon") {
                path = std::format("tuley:{}", icon.value().get<int>());
            } else {
                path = std::format("file:{}", icon.value().get<std::string>());
            }

            return std::make_unique<WheelItemIcon>(
                j.at("wheel").get<int>(),
                j.at("position").get<features::wheel::WheelItemPosition>(),
                path
            );
        }

        std::unique_ptr<ICommand> create_wheel_item_color(const nlohmann::json& j) {
            return std::make_unique<WheelItemColor>(j.at("wheel").get<int>(), j.at("position").get<features::wheel::WheelItemPosition>());
        }

        std::unique_ptr<ICommand> create_wheel_item_command(const nlohmann::json& j) {
            return std::make_unique<WheelItemCommand>(
                j.at("wheel").get<int>(),
                j.at("position").get<features::wheel::WheelItemPosition>(),
                j.at("bind").get<app::SpellInventory_Binding__Enum>(),
                j.at("command").get<std::size_t>()
            );
        }

        std::unique_ptr<ICommand> create_wheel_item_destroy(const nlohmann::json& j) {
            return std::make_unique<WheelItemDestroy>(j.at("wheel").get<int>(), j.at("position").get<features::wheel::WheelItemPosition>());
        }

        std::unique_ptr<ICommand> create_wheel_switch(const nlohmann::json& j) {
            return std::make_unique<WheelSwitch>(j.at("wheel").get<int>());
        }

        std::unique_ptr<ICommand> create_wheel_pinned(const nlohmann::json& j) {
            return std::make_unique<WheelPinned>(j.at("wheel").get<int>());
        }

        std::unique_ptr<ICommand> create_wheels_clear(const nlohmann::json& j) {
            return std::make_unique<WheelsClear>();
        }

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
            {"ControlledMessage", create_c_message_create},
            {"DestroyMessage", create_c_message_destroy},
            {"ShowMessage", create_c_message_show},
            {"HideMessage", create_c_message_hide},
            {"SetMessageText", create_c_message_text},
            {"SetMessageTimeout", create_c_message_timeout},
            {"SetMessageBackground", create_c_message_background},
            {"SetMessagePosition", create_c_message_position},
            {"SetMessageAlignment", create_c_message_alignment},
            {"SetMessageScreenPosition", create_c_message_screen_position},
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

    void destroy_all_seed_icons() {
        for (const auto& icon: warp_icons | std::views::values) {
            remove_icon(icon);
        }

        warp_icons.clear();
    }
} // namespace randomizer::seed

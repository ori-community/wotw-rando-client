#include <Core/api/game/game.h>
#include <Core/core.h>
#include <Core/messages/message_controller.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/instructions.h>
#include <Randomizer/seed/instructions/arithmetic_float.h>
#include <Randomizer/seed/instructions/arithmetic_integer.h>
#include <Randomizer/seed/instructions/boolean_to_string.h>
#include <Randomizer/seed/instructions/compare_boolean.h>
#include <Randomizer/seed/instructions/compare_float.h>
#include <Randomizer/seed/instructions/compare_integer.h>
#include <Randomizer/seed/instructions/compare_string.h>
#include <Randomizer/seed/instructions/concatenate.h>
#include <Randomizer/seed/instructions/copy_boolean.h>
#include <Randomizer/seed/instructions/copy_float.h>
#include <Randomizer/seed/instructions/copy_integer.h>
#include <Randomizer/seed/instructions/copy_string.h>
#include <Randomizer/seed/instructions/create_warp_icon.h>
#include <Randomizer/seed/instructions/debug_log.h>
#include <Randomizer/seed/instructions/define_timer.h>
#include <Randomizer/seed/instructions/destroy_warp_icon.h>
#include <Randomizer/seed/instructions/destroy_wheel_item.h>
#include <Randomizer/seed/instructions/disable_server_sync.h>
#include <Randomizer/seed/instructions/enable_server_sync.h>
#include <Randomizer/seed/instructions/equip.h>
#include <Randomizer/seed/instructions/execute.h>
#include <Randomizer/seed/instructions/execute_if.h>
#include <Randomizer/seed/instructions/fetch_boolean.h>
#include <Randomizer/seed/instructions/fetch_float.h>
#include <Randomizer/seed/instructions/fetch_integer.h>
#include <Randomizer/seed/instructions/float_to_integer.h>
#include <Randomizer/seed/instructions/float_to_string.h>
#include <Randomizer/seed/instructions/free_message.h>
#include <Randomizer/seed/instructions/free_message_alignment.h>
#include <Randomizer/seed/instructions/free_message_coordinate_system.h>
#include <Randomizer/seed/instructions/free_message_hide.h>
#include <Randomizer/seed/instructions/free_message_horizontal_anchor.h>
#include <Randomizer/seed/instructions/free_message_position.h>
#include <Randomizer/seed/instructions/free_message_show.h>
#include <Randomizer/seed/instructions/free_message_vertical_anchor.h>
#include <Randomizer/seed/instructions/integer_to_float.h>
#include <Randomizer/seed/instructions/integer_to_string.h>
#include <Randomizer/seed/instructions/is_in_hitbox.h>
#include <Randomizer/seed/instructions/logic_operation.h>
#include <Randomizer/seed/instructions/message_background.h>
#include <Randomizer/seed/instructions/message_destroy.h>
#include <Randomizer/seed/instructions/message_text.h>
#include <Randomizer/seed/instructions/message_timeout.h>
#include <Randomizer/seed/instructions/queued_message.h>
#include <Randomizer/seed/instructions/queued_message_hidden_callback.h>
#include <Randomizer/seed/instructions/queued_message_visible_callback.h>
#include <Randomizer/seed/instructions/reset_all_wheels.h>
#include <Randomizer/seed/instructions/round.h>
#include <Randomizer/seed/instructions/save.h>
#include <Randomizer/seed/instructions/save_at.h>
#include <Randomizer/seed/instructions/set_boolean.h>
#include <Randomizer/seed/instructions/set_float.h>
#include <Randomizer/seed/instructions/set_integer.h>
#include <Randomizer/seed/instructions/set_map_message.h>
#include <Randomizer/seed/instructions/set_shop_item_description.h>
#include <Randomizer/seed/instructions/set_shop_item_hidden.h>
#include <Randomizer/seed/instructions/set_shop_item_icon.h>
#include <Randomizer/seed/instructions/set_shop_item_locked.h>
#include <Randomizer/seed/instructions/set_shop_item_name.h>
#include <Randomizer/seed/instructions/set_shop_item_price.h>
#include <Randomizer/seed/instructions/set_spoiler_map_icon.h>
#include <Randomizer/seed/instructions/set_string.h>
#include <Randomizer/seed/instructions/set_warp_icon_label.h>
#include <Randomizer/seed/instructions/set_wheel_item_color.h>
#include <Randomizer/seed/instructions/set_wheel_item_command.h>
#include <Randomizer/seed/instructions/set_wheel_item_description.h>
#include <Randomizer/seed/instructions/set_wheel_item_icon.h>
#include <Randomizer/seed/instructions/set_wheel_item_name.h>
#include <Randomizer/seed/instructions/set_wheel_pinned.h>
#include <Randomizer/seed/instructions/store_boolean.h>
#include <Randomizer/seed/instructions/store_float.h>
#include <Randomizer/seed/instructions/store_integer.h>
#include <Randomizer/seed/instructions/switch_wheel.h>
#include <Randomizer/seed/instructions/trigger_keybind.h>
#include <Randomizer/seed/instructions/unequip.h>
#include <Randomizer/seed/instructions/warp.h>
#include <Randomizer/seed/instructions/world_name.h>
#include <Randomizer/seed/seed.h>
#include <functional>
#include <utility>

namespace randomizer::seed {
    namespace {
        [[maybe_unused]]
        auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            game_seed().prevent_grants([]() { return game_seed().environment().prevent_grant; });
        });

        [[maybe_unused]]
        auto on_update = core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [](auto, auto) {
            if (!core::api::game::in_game()) {
                game_seed().environment().queued_message_boxes.clear();
                game_seed().environment().message_boxes_with_timeouts.clear();
                game_seed().environment().free_message_boxes.clear();
                game_seed().environment().timers.clear();
                return;
            }

            for (auto& message: game_seed().environment().queued_message_boxes | std::views::values) {
                if (message.last_state == message.handle->state) {
                    continue;
                }

                if (message.handle->state == core::messages::QueuedMessageHandle::QueuedMessageState::Visible && message.visible_callback.has_value()) {
                    game_seed().execute_command(message.visible_callback.value());
                }

                if (message.last_state == core::messages::QueuedMessageHandle::QueuedMessageState::Visible && message.hidden_callback.has_value()) {
                    game_seed().execute_command(message.hidden_callback.value());
                }

                message.last_state = message.handle->state;
            }

            std::unordered_set<int> to_destroy;
            for (const auto id: game_seed().environment().message_boxes_with_timeouts) {
                auto& box = game_seed().environment().free_message_boxes.at(id);
                if (box.timeout.has_value()) {
                    box.timeout.value() -= core::api::game::delta_time();
                    if (box.timeout.value() < 0) {
                        to_destroy.emplace(id);
                    }
                }
            }

            for (const auto id: to_destroy) {
                game_seed().environment().message_boxes_with_timeouts.erase(id);
                game_seed().environment().free_message_boxes.erase(id);
            }

            for (const auto& timer: game_seed().environment().timers) {
                if (!core::api::game::game_controller()->fields._IsSuspended_k__BackingField && timer.toggle.get<bool>()) {
                    timer.value.set(timer.value.get<float>() + core::api::game::delta_time());
                }
            }
        });

        using instruction_factories_t = std::unordered_map<std::string, std::function<std::unique_ptr<IInstruction>(const nlohmann::json& j)>>;

        template<class T>
        void register_instruction(instruction_factories_t& factories) {
            factories.emplace(T::INSTRUCTION_NAME, [](const nlohmann::json& j) {
                try {
                    return T::from_json(j);
                } catch (const InstructionError& e) {
                    modloader::error(
                        "instructions",
                        std::format(
                            "Failed to parse instruction {}: {}",
                            T::INSTRUCTION_NAME,
                            e.what()
                        )
                    );
                    throw;
                }
            });
        }

        instruction_factories_t instruction_factories = ([] -> instruction_factories_t {
            using namespace instructions;
            instruction_factories_t factories;

            register_instruction<ArithmeticFloat>(factories);
            register_instruction<ArithmeticInteger>(factories);
            register_instruction<BooleanToString>(factories);
            register_instruction<CompareBoolean>(factories);
            register_instruction<CompareFloat>(factories);
            register_instruction<CompareInteger>(factories);
            register_instruction<CompareString>(factories);
            register_instruction<Concatenate>(factories);
            register_instruction<CopyBoolean>(factories);
            register_instruction<CopyFloat>(factories);
            register_instruction<CopyInteger>(factories);
            register_instruction<CopyString>(factories);
            register_instruction<CreateWarpIcon>(factories);
            register_instruction<DebugLog>(factories);
            register_instruction<DefineTimer>(factories);
            register_instruction<DestroyWarpIcon>(factories);
            register_instruction<DestroyWheelItem>(factories);
            register_instruction<DisableServerSync>(factories);
            register_instruction<EnableServerSync>(factories);
            register_instruction<Equip>(factories);
            register_instruction<Execute>(factories);
            register_instruction<ExecuteIf>(factories);
            register_instruction<FetchBoolean>(factories);
            register_instruction<FetchFloat>(factories);
            register_instruction<FetchInteger>(factories);
            register_instruction<FloatToInteger>(factories);
            register_instruction<FloatToString>(factories);
            register_instruction<FreeMessage>(factories);
            register_instruction<FreeMessageAlignment>(factories);
            register_instruction<FreeMessageCoordinateSystem>(factories);
            register_instruction<FreeMessageHide>(factories);
            register_instruction<FreeMessageHorizontalAnchor>(factories);
            register_instruction<FreeMessagePosition>(factories);
            register_instruction<FreeMessageShow>(factories);
            register_instruction<FreeMessageVerticalAnchor>(factories);
            register_instruction<IntegerToFloat>(factories);
            register_instruction<IntegerToString>(factories);
            register_instruction<IsInHitbox>(factories);
            register_instruction<LogicOperation>(factories);
            register_instruction<MessageBackground>(factories);
            register_instruction<MessageDestroy>(factories);
            register_instruction<MessageText>(factories);
            register_instruction<MessageTimeout>(factories);
            register_instruction<QueuedMessage>(factories);
            register_instruction<QueuedMessageHiddenCallback>(factories);
            register_instruction<QueuedMessageVisibleCallback>(factories);
            register_instruction<ResetAllWheels>(factories);
            register_instruction<Round>(factories);
            register_instruction<Save>(factories);
            register_instruction<SaveAt>(factories);
            register_instruction<SetBoolean>(factories);
            register_instruction<SetFloat>(factories);
            register_instruction<SetInteger>(factories);
            register_instruction<SetMapMessage>(factories);
            register_instruction<SetShopItemDescription>(factories);
            register_instruction<SetShopItemHidden>(factories);
            register_instruction<SetShopItemIcon>(factories);
            register_instruction<SetShopItemLocked>(factories);
            register_instruction<SetShopItemName>(factories);
            register_instruction<SetShopItemPrice>(factories);
            register_instruction<SetSpoilerMapIcon>(factories);
            register_instruction<SetString>(factories);
            register_instruction<SetWarpIconLabel>(factories);
            register_instruction<SetWheelItemColor>(factories);
            register_instruction<SetWheelItemCommand>(factories);
            register_instruction<SetWheelItemDescription>(factories);
            register_instruction<SetWheelItemIcon>(factories);
            register_instruction<SetWheelItemName>(factories);
            register_instruction<SetWheelPinned>(factories);
            register_instruction<StoreBoolean>(factories);
            register_instruction<StoreFloat>(factories);
            register_instruction<StoreInteger>(factories);
            register_instruction<SwitchWheel>(factories);
            register_instruction<TriggerKeybind>(factories);
            register_instruction<Unequip>(factories);
            register_instruction<Warp>(factories);
            register_instruction<WorldName>(factories);

            return factories;
        })();
    } // namespace

    std::unique_ptr<IInstruction> create_instruction(const nlohmann::json& j) {
        if (j.is_string()) {
            const auto it = instruction_factories.find(j.get<std::string>());
            if (it == instruction_factories.end()) {
                throw RandoException("Unknown command");
            }

            return std::move(it->second(j));
        } else {
            const auto it = instruction_factories.find(j.begin().key());
            if (it == instruction_factories.end()) {
                throw RandoException("Unknown command");
            }

            return std::move(it->second(j.begin().value()));
        }
    }

    void destroy_free_message_boxes() {
        game_seed().environment().free_message_boxes.clear();
    }

    nlohmann::json SaveSlotIconMetaData::json_serialize() {

        nlohmann::json j = *this;
        return j;
    }

    void SaveSlotIconMetaData::json_deserialize(nlohmann::json& j) {
        j.get_to(*this);
    }

    void SaveSlotIconMetaData::save(SeedExecutionEnvironment& seed_environment) {
        seed_environment.warp_icons.clear();
        for (auto const& [id, icon] : seed_environment.warp_icons) {
            warp_icons[id] = IconData{
                icon->name().get_unprocessed(),
                icon->label().get_unprocessed(),
                icon->icon().get(),
                icon->position().get(),
                icon->visible().get(),
                icon->label_visible().get(),
                icon->opacity().get(),
                icon->can_teleport().get(),
            };
        }
    }

    void SaveSlotIconMetaData::load(SeedExecutionEnvironment& seed_environment) {
        for (auto const& [id, icon_data] : warp_icons) {
            const auto icon = add_icon(
                game::map::FilterFlag::All | game::map::FilterFlag::Teleports | game::map::FilterFlag::InLogic | game::map::FilterFlag::Spoilers
            );

            icon->name().set(icon_data.name);
            icon->label().set(icon_data.label);
            icon->icon().set(icon_data.icon);
            icon->position().set(icon_data.position);
            icon->visible().set(icon_data.visible);
            icon->label_visible().set(icon_data.label_visible);
            icon->opacity().set(icon_data.opacity);
            icon->can_teleport().set(icon_data.can_teleport);
            seed_environment.warp_icons[id] = icon;
        }
    }
} // namespace randomizer::seed

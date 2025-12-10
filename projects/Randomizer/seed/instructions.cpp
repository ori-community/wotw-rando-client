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
#include <Randomizer/seed/instructions/box_trigger.h>
#include <Randomizer/seed/instructions/box_trigger_destroy.h>
#include <Randomizer/seed/instructions/box_trigger_enter_callback.h>
#include <Randomizer/seed/instructions/box_trigger_leave_callback.h>
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
#include <Randomizer/seed/instructions/free_message_box_width.h>
#include <Randomizer/seed/instructions/free_message_coordinate_system.h>
#include <Randomizer/seed/instructions/free_message_hide.h>
#include <Randomizer/seed/instructions/free_message_horizontal_anchor.h>
#include <Randomizer/seed/instructions/free_message_position.h>
#include <Randomizer/seed/instructions/free_message_show.h>
#include <Randomizer/seed/instructions/free_message_vertical_anchor.h>
#include <Randomizer/seed/instructions/integer_to_float.h>
#include <Randomizer/seed/instructions/integer_to_string.h>
#include <Randomizer/seed/instructions/is_in_box.h>
#include <Randomizer/seed/instructions/logic_operation.h>
#include <Randomizer/seed/instructions/message_background.h>
#include <Randomizer/seed/instructions/message_destroy.h>
#include <Randomizer/seed/instructions/message_text.h>
#include <Randomizer/seed/instructions/message_timeout.h>
#include <Randomizer/seed/instructions/queued_message.h>
#include <Randomizer/seed/instructions/queued_message_hidden_callback.h>
#include <Randomizer/seed/instructions/queued_message_shown_callback.h>
#include <Randomizer/seed/instructions/reset_all_wheels.h>
#include <Randomizer/seed/instructions/round.h>
#include <Randomizer/seed/instructions/save.h>
#include <Randomizer/seed/instructions/save_at.h>
#include <Randomizer/seed/instructions/set_boolean.h>
#include <Randomizer/seed/instructions/set_debugger_trace.h>
#include <Randomizer/seed/instructions/set_float.h>
#include <Randomizer/seed/instructions/set_integer.h>
#include <Randomizer/seed/instructions/set_map_message.h>
#include <Randomizer/seed/instructions/close_menu.h>
#include <Randomizer/seed/instructions/close_weapon_wheel.h>
#include <Randomizer/seed/instructions/set_shop_item_description.h>
#include <Randomizer/seed/instructions/set_shop_item_hidden.h>
#include <Randomizer/seed/instructions/set_shop_item_icon.h>
#include <Randomizer/seed/instructions/set_shop_item_locked.h>
#include <Randomizer/seed/instructions/set_shop_item_name.h>
#include <Randomizer/seed/instructions/set_shop_item_price.h>
#include <Randomizer/seed/instructions/set_side_map_message.h>
#include <Randomizer/seed/instructions/create_spoiler_map_icon.h>
#include <Randomizer/seed/instructions/set_string.h>
#include <Randomizer/seed/instructions/set_text_with_id.h>
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
            game_seed().prevent_grants([]() { return game_seed().environment().should_prevent_grant(); });
        });

        [[maybe_unused]]
        auto on_update = core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [](auto, auto) {
            if (!core::api::game::in_game()) {
                game_seed().environment().reset();
                return;
            }

            game_seed().environment().process_queued_message_box_visibility_callbacks();
            game_seed().environment().process_free_message_boxes(core::api::game::delta_time());
            game_seed().environment().process_timers(core::api::game::delta_time());
            game_seed().environment().process_box_triggers();
        });

        using instruction_factories_t = std::unordered_map<std::string, std::function<std::unique_ptr<IInstruction>(const nlohmann::json& j)>>;

        template<class T>
        void register_instruction(instruction_factories_t& factories) {
            factories.emplace(T::INSTRUCTION_NAME, [](const nlohmann::json& j) {
                try {
                    return T::from_json(j);
                } catch (const InstructionError& e) {
                    modloader::error("instructions", std::format("Failed to parse instruction {}: {}", T::INSTRUCTION_NAME, e.what()));
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
            register_instruction<BoxTrigger>(factories);
            register_instruction<BoxTriggerDestroy>(factories);
            register_instruction<BoxTriggerEnterCallback>(factories);
            register_instruction<BoxTriggerLeaveCallback>(factories);
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
            register_instruction<FreeMessageBoxWidth>(factories);
            register_instruction<FreeMessageCoordinateSystem>(factories);
            register_instruction<FreeMessageHide>(factories);
            register_instruction<FreeMessageHorizontalAnchor>(factories);
            register_instruction<FreeMessagePosition>(factories);
            register_instruction<FreeMessageShow>(factories);
            register_instruction<FreeMessageVerticalAnchor>(factories);
            register_instruction<IntegerToFloat>(factories);
            register_instruction<IntegerToString>(factories);
            register_instruction<IsInBox>(factories);
            register_instruction<LogicOperation>(factories);
            register_instruction<MessageBackground>(factories);
            register_instruction<MessageDestroy>(factories);
            register_instruction<MessageText>(factories);
            register_instruction<MessageTimeout>(factories);
            register_instruction<QueuedMessage>(factories);
            register_instruction<QueuedMessageHiddenCallback>(factories);
            register_instruction<QueuedMessageShownCallback>(factories);
            register_instruction<ResetAllWheels>(factories);
            register_instruction<Round>(factories);
            register_instruction<Save>(factories);
            register_instruction<SaveAt>(factories);
            register_instruction<SetBoolean>(factories);
            register_instruction<SetDebuggerTrace>(factories);
            register_instruction<SetFloat>(factories);
            register_instruction<SetInteger>(factories);
            register_instruction<SetMapMessage>(factories);
            register_instruction<CloseMenu>(factories);
            register_instruction<CloseWeaponWheel>(factories);
            register_instruction<SetShopItemDescription>(factories);
            register_instruction<SetShopItemHidden>(factories);
            register_instruction<SetShopItemIcon>(factories);
            register_instruction<SetShopItemLocked>(factories);
            register_instruction<SetShopItemName>(factories);
            register_instruction<SetShopItemPrice>(factories);
            register_instruction<SetSideMapMessage>(factories);
            register_instruction<CreateSpoilerMapIcon>(factories);
            register_instruction<SetString>(factories);
            register_instruction<SetTextWithId>(factories);
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

    PersistentSeedMemory::PersistentSeedMemory() {
        on_new_game_registration_handle = core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::Before, [this](auto, auto) {
            queue_input_unlocked_callback([this] { memory = SeedMemory(); });
        });
    }

    std::vector<std::byte> PersistentSeedMemory::serialize() {
        core::utils::ByteStream stream;
        stream.write(memory.booleans.values.size());
        stream.write(reinterpret_cast<std::byte*>(memory.booleans.values.data()), memory.booleans.values.size() * sizeof(char));
        stream.write(memory.integers.values.size());
        stream.write(reinterpret_cast<std::byte*>(memory.integers.values.data()), memory.integers.values.size() * sizeof(int));
        stream.write(memory.floats.values.size());
        stream.write(reinterpret_cast<std::byte*>(memory.floats.values.data()), memory.floats.values.size() * sizeof(float));
        stream.write(memory.strings.values.size());
        for (const auto& str: memory.strings.values) {
            stream.write(str.size());
            stream.write_string(str);
        }

        return stream.buffer;
    }

    void PersistentSeedMemory::deserialize(core::utils::ByteStream& stream) {
        memory = SeedMemory();

        auto length = stream.read<std::size_t>();
        memory.booleans.values.resize(length);
        stream.read(reinterpret_cast<std::byte*>(memory.booleans.values.data()), length * sizeof(char));

        length = stream.read<std::size_t>();
        memory.integers.values.resize(length);
        stream.read(reinterpret_cast<std::byte*>(memory.integers.values.data()), length * sizeof(int));

        length = stream.read<std::size_t>();
        memory.floats.values.resize(length);
        stream.read(reinterpret_cast<std::byte*>(memory.floats.values.data()), length * sizeof(float));

        length = stream.read<std::size_t>();
        memory.strings.values.resize(length);
        for (auto i = 0; i < length; ++i) {
            const auto str_length = stream.read<std::size_t>();
            stream.read_string(str_length);
        }
    }

    SeedExecutionEnvironment::SeedExecutionEnvironment(Seed& seed) : m_seed(seed) {
        m_event_bus_handles.push_back(core::api::game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::After, [this](auto, auto) {
            restore_serialized_data_to_runtime();
        }));

        m_event_bus_handles.push_back(core::api::game::event_bus().register_handler(GameEvent::Respawn, EventTiming::After, [this](auto, auto) {
            restore_serialized_data_to_runtime();
        }));
    }

    nlohmann::json SeedExecutionEnvironment::json_serialize() {
        m_serialized_free_message_boxes.clear();
        for (const auto& [id, free_message_box]: m_free_message_boxes) {
            const auto is_visible = free_message_box.message_box->get_visibility() == core::api::messages::MessageBox::Visibility::Visible ||
                free_message_box.message_box->get_visibility() == core::api::messages::MessageBox::Visibility::FadingIn;

            m_serialized_free_message_boxes[id] = {
                free_message_box.message_box->coordinate_system().get(),
                free_message_box.message_box->position().get(),
                free_message_box.message_box->text().get_unprocessed(),
                free_message_box.message_box->text_alignment().get(),
                free_message_box.message_box->box_width().get(),
                free_message_box.message_box->box_horizontal_anchor().get(),
                free_message_box.message_box->box_vertical_anchor().get(),
                free_message_box.message_box->show_background().get(),
                free_message_box.timeout,
                is_visible,
            };
        }

        m_serialized_warp_icons.clear();
        for (const auto& [id, icon]: m_warp_icons) {
            m_serialized_warp_icons[id] = {
                icon->label_text.get_unprocessed(),
                icon->world_position.get(),
            };
        }

        nlohmann::json j = *this;
        return j;
    }

    void SeedExecutionEnvironment::json_deserialize(nlohmann::json& j) {
        j.get_to(*this);
    }

    void SeedExecutionEnvironment::reset() {
        m_free_message_boxes.clear();
        m_queued_message_boxes.clear();
        m_timers.clear();
        m_prevent_grant = false;
        m_spoiler_map_icons.clear();
    }

    void SeedExecutionEnvironment::process_queued_message_box_visibility_callbacks() {
        for (auto& message: m_queued_message_boxes | std::views::values) {
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
    }

    void SeedExecutionEnvironment::process_free_message_boxes(float delta) {
        std::unordered_set<int> to_destroy;
        for (auto& [id, free_message_box]: m_free_message_boxes) {
            if (free_message_box.timeout.has_value()) {
                free_message_box.timeout.value() -= delta;
                if (free_message_box.timeout.value() < 0) {
                    to_destroy.emplace(id);
                }
            }
        }

        for (const auto id: to_destroy) {
            m_free_message_boxes.erase(id);
        }
    }

    void SeedExecutionEnvironment::process_timers(float delta) const {
        const auto game_controller = core::api::game::game_controller();
        for (const auto& timer: m_timers) {
            if (!game_controller->fields._IsSuspended_k__BackingField && timer.toggle.get<bool>()) {
                timer.value.set(timer.value.get<float>() + delta);
            }
        }
    }

    void SeedExecutionEnvironment::process_box_triggers() {
        for (auto& box_trigger: m_box_triggers | std::views::values) {
            const auto player_is_inside = box_trigger.is_inside(modloader::math::to_vec2(core::api::game::player::get_position()));

            if (player_is_inside == box_trigger.runtime_state.player_was_inside_box_at_last_check) {
                continue;
            }

            box_trigger.runtime_state.player_was_inside_box_at_last_check = player_is_inside;

            if (player_is_inside) {
                if (box_trigger.on_enter_command_id.has_value()) {
                    m_seed.execute_command(*box_trigger.on_enter_command_id);
                }
            } else {
                if (box_trigger.on_leave_command_id.has_value()) {
                    m_seed.execute_command(*box_trigger.on_leave_command_id);
                }
            }
        }
    }

    void SeedExecutionEnvironment::clear_free_message_boxes() { m_free_message_boxes.clear(); }

    void SeedExecutionEnvironment::set_warp_icon(const std::size_t id, const map::icons::MapIcon::ptr_t& icon) { m_warp_icons[id] = icon; }

    void SeedExecutionEnvironment::modify_warp_icon(const std::size_t id, const std::function<void(map::icons::MapIcon::ptr_t&)>& fn) {
        if (!m_warp_icons.contains(id)) {
            return;
        }

        fn(m_warp_icons[id]);
    }

    auto SeedExecutionEnvironment::erase_warp_icon(std::size_t id) -> void {
        const auto icon = m_warp_icons.find(id);
        if (icon != m_warp_icons.end()) {
            m_warp_icons.erase(icon);
        }
    }

    void SeedExecutionEnvironment::add_timer(const SeedTimer& timer) {
        const auto timer_exists = std::ranges::any_of(m_timers.begin(), m_timers.end(), [&timer](const auto& t) {
            return t.value == timer.value;
        });

        if (timer_exists) {
            modloader::warn(
                "instructions",
                std::format(
                    "DefineTimer: Cannot define timer on {} because a timer already exists with that target.",
                    timer.value
                )
            );
            return;
        }

        m_timers.push_back(timer);
    }

    void SeedExecutionEnvironment::execute_without_grants(const std::function<void()>& fn) {
        modloader::ScopedSetter _(m_prevent_grant, true);
        fn();
    }

    void SeedExecutionEnvironment::add_free_message_box(std::size_t id, const std::shared_ptr<core::api::messages::MessageBox>& message_box) {
        m_free_message_boxes[id].message_box = message_box;
        m_queued_message_boxes.erase(id);
    }

    void SeedExecutionEnvironment::add_queued_message_box(std::size_t id, const message_handle_ptr_t& handle) {
        m_queued_message_boxes[id] = {.handle = handle};
        m_free_message_boxes.erase(id);
    }

    void SeedExecutionEnvironment::modify_free_message_box(std::size_t id, const std::function<void(core::api::messages::MessageBox&)>& fn) {
        if (!m_free_message_boxes.contains(id)) {
            return;
        }

        fn(*m_free_message_boxes[id].message_box);
    }

    void SeedExecutionEnvironment::modify_queued_message_box(std::size_t id, const std::function<void(core::api::messages::MessageBox&)>& fn) {
        if (!m_queued_message_boxes.contains(id)) {
            return;
        }

        fn(*m_queued_message_boxes[id].handle->message.lock());
    }

    void SeedExecutionEnvironment::set_queued_message_box_hidden_callback(const std::size_t id, std::size_t callback_command_id) {
        const auto it = m_queued_message_boxes.find(id);
        if (it != m_queued_message_boxes.end()) {
            it->second.hidden_callback = callback_command_id;
        }
    }

    void SeedExecutionEnvironment::set_queued_message_box_visible_callback(const std::size_t id, std::size_t callback_command_id) {
        const auto it = m_queued_message_boxes.find(id);
        if (it != m_queued_message_boxes.end()) {
            it->second.visible_callback = callback_command_id;
        }
    }

    void SeedExecutionEnvironment::remove_free_message_box(const std::size_t id) {
        m_free_message_boxes.erase(id);
    }

    void SeedExecutionEnvironment::set_queued_message_box_timeout(const std::size_t id, float timeout) const {
        if (m_queued_message_boxes.contains(id)) {
            m_queued_message_boxes.at(id).handle->time_left = timeout;
        }
    }

    void SeedExecutionEnvironment::set_free_message_box_timeout(std::size_t id, float timeout) {
        if (m_free_message_boxes.contains(id)) {
            m_free_message_boxes.at(id).timeout = timeout;
        }
    }

    void SeedExecutionEnvironment::set_spoiler_map_icon(const std::size_t id, const map::icons::MapIcon::ptr_t& map_icon) {
        m_spoiler_map_icons[id] = map_icon;
    }

    void SeedExecutionEnvironment::set_box_trigger(std::size_t id, const SeedBoxTrigger& box_trigger) {
        m_box_triggers[id] = box_trigger;
    }

    void SeedExecutionEnvironment::modify_box_trigger(std::size_t id, const std::function<void(SeedBoxTrigger&)>& fn) {
        if (!m_box_triggers.contains(id)) {
            return;
        }

        fn(m_box_triggers[id]);
    }

    void SeedExecutionEnvironment::destroy_box_trigger(std::size_t id) {
        m_box_triggers.erase(id);
    }

    void SeedExecutionEnvironment::restore_serialized_data_to_runtime() {
        m_free_message_boxes.clear();
        for (const auto [id, serialized_box]: m_serialized_free_message_boxes) {
            const auto free_message_box = std::make_shared<core::api::messages::MessageBox>();
            free_message_box->text_processor(general_text_processor());
            free_message_box->coordinate_system().set(serialized_box.coordinate_system);
            free_message_box->position().set(serialized_box.position);
            free_message_box->text().set(serialized_box.text);
            free_message_box->text_alignment().set(serialized_box.text_alignment);
            free_message_box->box_width().set(serialized_box.box_width);
            free_message_box->box_horizontal_anchor().set(serialized_box.horizontal_anchor);
            free_message_box->box_vertical_anchor().set(serialized_box.vertical_anchor);
            free_message_box->show_background().set(serialized_box.show_background);

            if (serialized_box.visible) {
                free_message_box->show(true, false);
            }

            m_free_message_boxes[id] = {
                .message_box = free_message_box,
                .timeout = serialized_box.timeout,
            };
        }

        m_warp_icons.clear();
        for (const auto& [id, serialized_icon] : m_serialized_warp_icons) {
            const auto warp_icon = instructions::CreateWarpIcon::create_warp_icon(serialized_icon.position, serialized_icon.label);
            m_warp_icons[id] = warp_icon;
        }
    }

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

    void to_json(nlohmann::json& j, const SeedTimer& timer) {
        j = nlohmann::json{
                {"toggle",
                 {
                     {"group", timer.toggle.group_int()},
                     {"state", timer.toggle.state()},
                 }},
                {"value",
                 {
                     {"group", timer.value.group_int()},
                     {"state", timer.value.state()},
                 }}
        };
    }

    void from_json(const nlohmann::json& j, SeedTimer& timer) {
        const auto j_toggle = j.at("toggle");
        const auto j_value = j.at("value");
        timer.toggle = core::api::uber_states::UberState(j_toggle.at("group").get<int>(), j_toggle.at("state").get<int>());
        timer.value = core::api::uber_states::UberState(j_value.at("group").get<int>(), j_value.at("state").get<int>());
    }
} // namespace randomizer::seed

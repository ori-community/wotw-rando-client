#include <conditions/new_setup_state_override.h>
#include <features/wheel.h>
#include <game/shops/shop.h>
#include <game/teleport.h>
#include <randomizer.h>
#include <seed/items/apply_uber_state.h>
#include <seed/items/call.h>
#include <seed/items/counting_message.h>
#include <seed/items/empty.h>
#include <seed/items/icon.h>
#include <seed/items/message.h>
#include <seed/items/refill.h>
#include <seed/items/skip_state.h>
#include <seed/items/value_modifier.h>
#include <seed/legacy_parser/parser.h>
#include <timer.h>

#include <Common/ext.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/graphics/textures.h>
#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/core.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>

#include <Modloader/il2cpp_math.h>
#include <Modloader/modloader.h>

#include <cmath>
#include <fstream>
#include <magic_enum.hpp>
#include <regex>
#include <span>
#include <string>

namespace randomizer::seed::legacy_parser {
    using location_type = core::api::uber_states::UberStateCondition;
    // Hacky way to do it, but can't be bothered to pass it all the way down.
    location_data::LocationCollection const* current_location_data = nullptr;

    struct ParserData {
        Seed::Data& data;
        ItemData& location_data;
        int& next_location_id;
        int& next_procedure_id;
    };

    enum class ActionType {
        SpiritLight = 0,
        Resource = 1,
        Ability = 2,
        Shard = 3,
        SystemCommand = 4,
        Teleporter = 5,
        Message = 6,
        UberState = 8,
        QuestEvent = 9,
        BonusItem = 10,
        WeaponUpgrade = 11,
        ZoneHint = 12,
        CheckableHint = 13,
        Relic = 14,
        SysMessage = 15,
        Wheel = 16,
        Shop = 17
    };

    enum class ResourceType {
        Health = 0,
        Energy = 1,
        Ore = 2,
        Keystone = 3,
        ShardSlot = 4
    };

    enum class SystemCommand {
        Save = 0,
        SetResource = 1,
        Checkpoint = 2,
        SupressMagic = 3,
        StopIfEqual = 4,
        StopIfGreater = 5,
        StopIfLess = 6,
        SetState = 7,
        Warp = 8,
        StartTimer = 9,
        StopTimer = 10,
        RedirectState = 11,
        SetHealth = 12,
        SetEnergy = 13,
        SetSpiritLight = 14,
        Bind = 15,
        AHKSignal = 16,
        GrantIfEqual = 17,
        GrantIfGreater = 18,
        GrantIfLess = 19,
        DisableSync = 20,
        EnableSync = 21,
        CreateWarp = 22,
        DestroyWarp = 23,
        GrantIfBounds = 24,
        GrantIfCondEqual = 25,
        GrantIfCondGreater = 26,
        GrantIfCondLess = 27,
        Unbind = 28,
        SaveString = 29,
        AppendString = 30,
    };

    void set_location(items::Message* message, location_type const& location) {
        auto const& location_data = current_location_data->location(location);
        if (location_data.has_value() && location_data.value().position.has_value()) {
            const auto position = location_data.value().position.value();
            message->info.starting_world_position = app::Vector3{ position.x, position.y, 0 };
        }
    }

    bool parse_action(location_type const& location, std::span<std::string> parts, ParserData& data);

    void parse_parts(std::string_view str, std::vector<std::string>& parts) {
        enum class ReadMode {
            Normal,
            Ptr
        };

        std::string next;
        ReadMode mode = ReadMode::Normal;
        std::stringstream stream((std::string(str)));
        char c = static_cast<char>(stream.get());
        while (!stream.eof()) {
            if (mode == ReadMode::Normal && c == '|') {
                parts.push_back(next);
                next.clear();
            } else if (mode == ReadMode::Normal && c == '$' && stream.peek() == '(') {
                mode = ReadMode::Ptr;
                next += c;
            } else if (mode == ReadMode::Ptr && c == ')') {
                mode = ReadMode::Normal;
                next += c;
            } else {
                next += c;
            }

            c = static_cast<char>(stream.get());
        }

        parts.push_back(next);
    }

    bool parse_spirit_light(location_type const& location, std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 1) {
            return false;
        }

        int spirit_light;
        if (!string_convert(parts[0], spirit_light)) {
            return false;
        }

        auto assigner = std::make_shared<items::ValueModifier<int, items::ValueOperator::Add>>();
        assigner->variable = core::api::game::player::spirit_light();
        assigner->value.set(spirit_light);
        data.location_data.items[data.next_location_id++] = assigner;

        std::string currency = "Spirit Light";
        if (!core::settings::use_default_currency_name()) {
            const auto slug_hash = std::hash<std::string>()(data.data.info.slug);
            const auto location_hash = std::hash<location_type>()(location);
            currency = core::text::get_random_text_with_hash(*static_text_entry::Currency, slug_hash ^ location_hash);
        }

        const auto text = fmt::format("{} {}", spirit_light, currency);
        auto message = std::make_shared<items::Message>();
        set_location(message.get(), location);
        message->should_save_as_last = true;
        message->info.text = text;
        data.location_data.items[data.next_location_id++] = message;

        data.location_data.names.emplace_back().assign(message->info.text);
        data.location_data.icons.emplace_back().assign(app::WorldMapIconType__Enum::Experience);

        return true;
    }

    bool parse_resource(location_type const& location, std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 1) {
            return false;
        }

        int resource_type_int;
        if (!string_convert(parts[0], resource_type_int)) {
            return false;
        }

        auto message = std::make_shared<items::Message>();
        set_location(message.get(), location);
        message->should_save_as_last = true;
        const auto resource_type = static_cast<ResourceType>(resource_type_int);
        switch (resource_type) {
            case ResourceType::Health: {
                auto adder = std::make_shared<items::ValueModifier<int, items::ValueOperator::Add>>();
                adder->variable = core::api::game::player::max_health();
                adder->value.set(5);
                data.location_data.items[data.next_location_id++] = adder;
                auto refill = std::make_shared<items::Refill>();
                refill->type = items::Refill::RefillType::Health;
                data.location_data.items[data.next_location_id++] = refill;
                data.location_data.icons.emplace_back().assign(app::WorldMapIconType__Enum::HealthFragment);
                message->info.text = "Health Fragment";
                break;
            }
            case ResourceType::Energy: {
                auto adder = std::make_shared<items::ValueModifier<float, items::ValueOperator::Add>>();
                adder->variable = core::api::game::player::max_energy();
                adder->value.set(0.5f);
                data.location_data.items[data.next_location_id++] = adder;
                auto refill = std::make_shared<items::Refill>();
                refill->type = items::Refill::RefillType::Energy;
                data.location_data.items[data.next_location_id++] = refill;
                data.location_data.icons.emplace_back().assign(app::WorldMapIconType__Enum::EnergyFragment);
                message->info.text = "Energy Fragment";
                break;
            }
            case ResourceType::Ore: {
                auto adder = std::make_shared<items::ValueModifier<int, items::ValueOperator::Add>>();
                adder->variable = core::api::game::player::ore();
                adder->value.set(1);
                data.location_data.items[data.next_location_id++] = adder;
                data.location_data.icons.emplace_back().assign(app::WorldMapIconType__Enum::Ore);
                message->info.text = "Gorlek Ore";
                break;
            }
            case ResourceType::Keystone: {
                auto adder = std::make_shared<items::ValueModifier<int, items::ValueOperator::Add>>();
                adder->variable = core::api::game::player::keystones();
                adder->value.set(1);
                data.location_data.items[data.next_location_id++] = adder;
                data.location_data.icons.emplace_back().assign(app::WorldMapIconType__Enum::Keystone);
                message->info.text = "Keystone";
                break;
            }
            case ResourceType::ShardSlot: {
                auto adder = std::make_shared<items::ValueModifier<int, items::ValueOperator::Add>>();
                adder->variable = core::api::game::player::shard_slots();
                adder->value.set(1);
                data.location_data.items[data.next_location_id++] = adder;
                data.location_data.icons.emplace_back().assign(app::WorldMapIconType__Enum::ShardSlotUpgrade);
                message->info.text = "Shard Slot";
                break;
            }
            default:
                return false;
        }

        data.location_data.items[data.next_location_id++] = message;
        return true;
    }

    bool parse_ability(location_type const& location, std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 1) {
            return false;
        }

        int ability_type_int;
        if (!string_convert(parts[0], ability_type_int)) {
            return false;
        }

        const auto should_add = !parts[0].starts_with("-");
        ability_type_int = should_add ? ability_type_int : -ability_type_int;
        auto assigner = std::make_shared<items::ValueModifier<bool, items::ValueOperator::Assign>>();
        assigner->variable.assign(core::api::uber_states::UberState(6, 1000 + ability_type_int));
        assigner->value.set(should_add);
        data.location_data.items[data.next_location_id++] = assigner;
        auto message = std::make_shared<items::Message>();
        set_location(message.get(), location);
        message->should_save_as_last = true;
        const auto text = should_add
            ? fmt::format("[ability({0})]", ability_type_int)
            : fmt::format("Removed [ability({0})]", ability_type_int);
        message->info.text = text;
        data.location_data.items[data.next_location_id++] = message;
        data.location_data.icons.emplace_back().assign(app::WorldMapIconType__Enum::AbilityPedestal);
        data.location_data.names.emplace_back().assign(text);
        return true;
    }

    bool parse_shard(location_type const& location, std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 1) {
            return false;
        }

        int shard_type_int;
        if (!string_convert(parts[0], shard_type_int)) {
            return false;
        }

        const auto should_add = !parts[0].starts_with("-");
        shard_type_int = should_add ? shard_type_int : -shard_type_int;
        const auto shard_type = static_cast<app::SpiritShardType__Enum>(shard_type_int);
        auto assigner = std::make_shared<items::ValueModifier<bool, items::ValueOperator::Assign>>();
        assigner->variable = core::api::game::player::shard(shard_type);
        assigner->value.set(should_add);
        data.location_data.items[data.next_location_id++] = assigner;

        auto message = std::make_shared<items::Message>();
        set_location(message.get(), location);
        message->should_save_as_last = true;
        const auto text = should_add
            ? fmt::format("[shard({0})]", shard_type_int)
            : fmt::format("Removed [shard({0})]", shard_type_int);
        message->info.text = text;
        data.location_data.items[data.next_location_id++] = message;
        data.location_data.icons.emplace_back().assign(app::WorldMapIconType__Enum::AbilityPedestal);
        data.location_data.names.emplace_back().assign(text);
        return true;
    }

    bool parse_stop_if(std::span<std::string> parts, ParserData& data, BooleanOperator op) {
        int group;
        int state;
        double value;
        if (!string_convert(parts[0], group) || !string_convert(parts[1], state) || !string_convert(parts[2], value)) {
            return false;
        }

        auto stop = std::make_shared<items::Empty>();
        stop->stop.assign(core::api::uber_states::UberStateCondition{ { group, state }, op, value });
        data.location_data.items[data.next_location_id++] = stop;
        return true;
    }

    bool parse_grant_if_state( // NOLINT
        location_type const& location,
        core::api::uber_states::UberState const& state,
        std::span<std::string> parts,
        ParserData& data,
        BooleanOperator op
    ) {
        if (parts.size() < 2) {
            return false;
        }

        double value;
        if (!string_convert(parts[0], value)) {
            return false;
        }

        auto skip = std::make_shared<items::Empty>();
        auto condition = core::api::uber_states::UberStateCondition{ { state.group(), state.state() }, op, value };
        data.location_data.items[data.next_location_id++] = skip;
        auto skip_value = data.next_location_id;

        auto sub_parts = std::span<std::string>(parts.begin() + 1, parts.end());
        parse_action(location, sub_parts, data);

        skip_value = data.next_location_id - skip_value;
        skip->skip.assign(core::set_get<int>{
            [](int value) {},
            [condition, skip_value]() { return condition.resolve() ? 0 : skip_value; },
        });

        return true;
    }

    bool parse_grant_if( // NOLINT
        location_type const& location,
        std::span<std::string> parts,
        ParserData& data,
        BooleanOperator op
    ) {
        if (parts.size() < 2) {
            return false;
        }

        int group;
        int state;
        if (!string_convert(parts[0], group) || !string_convert(parts[1], state)) {
            return false;
        }

        auto sub_parts = std::span<std::string>(parts.begin() + 2, parts.end());
        return parse_grant_if_state(location, { group, state }, sub_parts, data, op);
    }

    bool parse_grant_if_bounds( // NOLINT
        location_type const& location,
        std::span<std::string> parts,
        ParserData& data
    ) {
        if (parts.size() < 4) {
            return false;
        }

        app::Rect rect{};
        if (
            !string_convert(parts[0], rect.m_XMin) ||
            !string_convert(parts[1], rect.m_YMin) ||
            !string_convert(parts[2], rect.m_Width) ||
            !string_convert(parts[3], rect.m_Height)
        ) {
            return false;
        }

        if (rect.m_XMin > rect.m_Width) {
            std::swap(rect.m_XMin, rect.m_Width);
        }

        if (rect.m_YMin > rect.m_Height) {
            std::swap(rect.m_YMin, rect.m_Height);
        }

        rect.m_Width -= rect.m_XMin;
        rect.m_Height -= rect.m_YMin;

        auto skip = std::make_shared<items::Empty>();
        data.location_data.items[data.next_location_id++] = skip;
        auto skip_value = data.next_location_id;

        auto sub_parts = std::span<std::string>(parts.begin() + 1, parts.end());
        parse_action(location, sub_parts, data);

        skip_value = data.next_location_id - skip_value;
        skip->skip.assign(core::set_get<int>{
            [](int value) {},
            [rect, skip_value]() { return modloader::math::in_rect(core::api::game::player::get_position(), rect) ? 0 : skip_value; },
        });

        return true;
    }

    bool parse_save(ParserData& data, bool checkpoint) {
        auto caller = std::make_shared<items::Call>();
        if (checkpoint) {
            caller->func = []() {
                if (core::api::game::can_save()) {
                    core::api::game::save();
                }
            };
        } else {
            caller->func = []() {
                if (core::api::game::can_save()) {
                    core::api::game::checkpoint();
                }
            };
        }

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_warp(std::span<std::string> parts, ParserData& data) {
        if (parts.size() < 2) {
            return false;
        }

        app::Vector3 position{};
        if (!string_convert(parts[0], position.x) || !string_convert(parts[1], position.y)) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        caller->func = [position]() { game::teleport(position, true); };
        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_timer(std::span<std::string> parts, ParserData& data, bool start) {
        if (parts.size() < 2) {
            return false;
        }

        int group;
        int state;
        if (!string_convert(parts[0], group) || !string_convert(parts[1], state)) {
            return false;
        }

        core::api::uber_states::UberState timer_state(group, state);
        auto caller = std::make_shared<items::Call>();
        caller->func = [timer_state, start]() { timer::uber_state_timer(timer_state, start); };
        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_redirect_state(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 3) {
            return false;
        }

        conditions::applier_key key;
        int state;
        if (!string_convert(parts[1], key.second) || !string_convert(parts[2], state)) {
            return false;
        }

        key.first = parts[0];
        auto caller = std::make_shared<items::Call>();
        caller->func = [key, state]() { conditions::register_new_setup_redirect(key, state); };
        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_bind(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 2) {
            return false;
        }

        int binding;
        int equip;
        if (!string_convert(parts[0], binding) || !string_convert(parts[1], equip)) {
            return false;
        }

        if (binding < 0 || binding > 2) {
            return false;
        }

        auto binding_type = static_cast<app::SpellInventory_Binding__Enum>(binding);
        auto equip_type = static_cast<app::EquipmentType__Enum>(equip);
        if (!magic_enum::enum_contains(equip_type)) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        caller->func = [binding_type, equip_type]() { core::api::game::player::bind(binding_type, equip_type); };
        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_unbind(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 1) {
            return false;
        }

        int equip;
        if (!string_convert(parts[0], equip)) {
            return false;
        }

        auto equip_type = static_cast<app::EquipmentType__Enum>(equip);
        if (!magic_enum::enum_contains(equip_type)) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        caller->func = [equip_type]() { core::api::game::player::unbind(equip_type); };
        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_sync(std::span<std::string> parts, ParserData& data, bool unsyncable) {
        if (parts.size() != 2) {
            return false;
        }

        int group;
        int state;
        if (!string_convert(parts[0], group) || !string_convert(parts[1], state)) {
            return false;
        }

        core::api::uber_states::UberState sync_state(group, state);
        auto caller = std::make_shared<items::Call>();
        caller->func = [sync_state, unsyncable]() { multiplayer_universe().uber_state_handler().set_unsyncable(sync_state, unsyncable); };
        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_create_warp(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 3) {
            return false;
        }

        auto icon = std::make_shared<items::CreateIcon>();
        if (!string_convert(parts[0], icon->id) || !string_convert(parts[1], icon->position.x) || !string_convert(parts[2], icon->position.y)) {
            return false;
        }

        icon->flags = game::map::FilterFlag::All | game::map::FilterFlag::Teleports;
        icon->type = app::WorldMapIconType__Enum::SavePedestal;
        icon->can_teleport = true;
        data.location_data.items[data.next_location_id++] = icon;
        return true;
    }

    bool parse_destroy_warp(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 1) {
            return false;
        }

        auto icon = std::make_shared<items::DestroyIcon>();
        if (!string_convert(parts[0], icon->id)) {
            return false;
        }

        data.location_data.items[data.next_location_id++] = icon;
        return true;
    }

    bool parse_string(std::span<std::string> parts, ParserData& data, bool append) {
        if (parts.size() < 2) {
            return false;
        }

        int id;
        if (!string_convert(parts[0], id)) {
            return false;
        }

        std::string text;
        for (auto it = parts.begin() + 1; it != parts.end(); ++it) {
            if (!text.empty()) {
                text += "|";
            }

            text += *it;
        }

        auto caller = std::make_shared<items::Call>();
        caller->func = [append, id, text]() {
            std::string actual_text(append ? core::text::get_text(id) : "");
            actual_text += text;
            core::text::clear_text(id);
            core::text::register_text(id, actual_text);
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_sys_command(location_type const& location, std::span<std::string> parts, ParserData& data) { // NOLINT
        int sys_command_int;
        if (!string_convert(parts[0], sys_command_int)) {
            return false;
        }

        auto sys_command = static_cast<SystemCommand>(sys_command_int);
        auto next_parts = std::span<std::string>(parts.begin() + 1, parts.end());
        switch (sys_command) {
            case SystemCommand::Save:
                return parse_save(data, false);
            case SystemCommand::Checkpoint:
                return parse_save(data, true);
            case SystemCommand::StopIfEqual:
                return parse_stop_if(next_parts, data, BooleanOperator::Equals);
            case SystemCommand::StopIfGreater:
                return parse_stop_if(next_parts, data, BooleanOperator::Greater);
            case SystemCommand::StopIfLess:
                return parse_stop_if(next_parts, data, BooleanOperator::Lesser);
            case SystemCommand::GrantIfEqual:
                return parse_grant_if(location, next_parts, data, BooleanOperator::Equals);
            case SystemCommand::GrantIfGreater:
                return parse_grant_if(location, next_parts, data, BooleanOperator::Greater);
            case SystemCommand::GrantIfLess:
                return parse_grant_if(location, next_parts, data, BooleanOperator::Lesser);
            case SystemCommand::GrantIfCondEqual:
                return parse_grant_if_state(location, location.state, next_parts, data, BooleanOperator::Equals);
            case SystemCommand::GrantIfCondGreater:
                return parse_grant_if_state(location, location.state, next_parts, data, BooleanOperator::Greater);
            case SystemCommand::GrantIfCondLess:
                return parse_grant_if_state(location, location.state, next_parts, data, BooleanOperator::Lesser);
            case SystemCommand::GrantIfBounds:
                return parse_grant_if_bounds(location, next_parts, data);
            case SystemCommand::Warp:
                return parse_warp(next_parts, data);
            case SystemCommand::StartTimer:
                return parse_timer(next_parts, data, true);
            case SystemCommand::StopTimer:
                return parse_timer(next_parts, data, false);
            case SystemCommand::RedirectState:
                return parse_redirect_state(next_parts, data);
            case SystemCommand::Bind:
                return parse_bind(next_parts, data);
            case SystemCommand::Unbind:
                return parse_unbind(next_parts, data);
            case SystemCommand::EnableSync:
                return parse_sync(next_parts, data, false);
            case SystemCommand::DisableSync:
                return parse_sync(next_parts, data, true);
            case SystemCommand::CreateWarp:
                return parse_create_warp(next_parts, data);
            case SystemCommand::DestroyWarp:
                return parse_destroy_warp(next_parts, data);
            case SystemCommand::SaveString:
                return parse_string(next_parts, data, false);
            case SystemCommand::AppendString:
                return parse_string(next_parts, data, true);
            case SystemCommand::AHKSignal:
                modloader::warn("legacy_parser", "Use of deprecated command SystemCommand.AHKSignal.");
                return false;
            case SystemCommand::SetHealth:
                modloader::warn("legacy_parser", "Use of deprecated command SystemCommand.SetHealth use virtual uber states instead.");
                return false;
            case SystemCommand::SetEnergy:
                modloader::warn("legacy_parser", "Use of deprecated command SystemCommand.SetEnergy use virtual uber states instead.");
                return false;
            case SystemCommand::SetSpiritLight:
                modloader::warn("legacy_parser", "Use of deprecated command SystemCommand.SetSpiritLight use virtual uber states instead.");
                return false;
            case SystemCommand::SetResource:
                modloader::warn("legacy_parser", "Use of deprecated command SystemCommand.SetResource use virtual uber states instead.");
                return false;
            case SystemCommand::SupressMagic:
                modloader::warn("legacy_parser", "Use of deprecated command SystemCommand.SuppressMagic use virtual uber states instead.");
                return false;
            case SystemCommand::SetState:
                modloader::warn("legacy_parser", "Use of deprecated command SystemCommand.SetState use uber states instead.");
                return false;
            default:
                return false;
        }
    }

    bool parse_teleporter(location_type const& location, std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 1) {
            return false;
        }

        int teleporter_int;
        if (!string_convert(parts[0], teleporter_int)) {
            return false;
        }

        const auto should_add = !parts[0].starts_with("-");
        teleporter_int = should_add ? teleporter_int : -teleporter_int;
        auto assigner = std::make_shared<items::ValueModifier<bool, items::ValueOperator::Assign>>();
        assigner->value.set(should_add);
        auto teleporter_name = "Unknown";
        switch (teleporter_int) {
            case 0:
                assigner->variable.assign(core::api::uber_states::UberState(24922, 42531));
                teleporter_name = "Midnight Burrows";
                break;
            case 1:
                assigner->variable.assign(core::api::uber_states::UberState(11666, 61594));
                teleporter_name = "Howl's Den";
                break;
            case 3:
                assigner->variable.assign(core::api::uber_states::UberState(53632, 18181));
                teleporter_name = "Wellspring";
                break;
            case 4:
                assigner->variable.assign(core::api::uber_states::UberState(28895, 54235));
                teleporter_name = "Baurs Reach";
                break;
            case 5:
                assigner->variable.assign(core::api::uber_states::UberState(937, 26601));
                teleporter_name = "Kwolok's Hollow";
                break;
            case 6:
                assigner->variable.assign(core::api::uber_states::UberState(18793, 38871));
                teleporter_name = "Mouldwood Depths";
                break;
            case 7:
                assigner->variable.assign(core::api::uber_states::UberState(58674, 7071));
                teleporter_name = "Woods Entrance";
                break;
            case 8:
                assigner->variable.assign(core::api::uber_states::UberState(58674, 1965));
                teleporter_name = "Woods Exit";
                break;
            case 9:
                assigner->variable.assign(core::api::uber_states::UberState(58674, 10029));
                teleporter_name = "Feeding Grounds";
                break;
            case 10:
                assigner->variable.assign(core::api::uber_states::UberState(20120, 49994));
                teleporter_name = "Central Wastes";
                break;
            case 11:
                assigner->variable.assign(core::api::uber_states::UberState(20120, 41398));
                teleporter_name = "Outer Ruins";
                break;
            case 12:
                assigner->variable.assign(core::api::uber_states::UberState(16155, 41465));
                teleporter_name = "Willow's End";
                break;
            case 14:
                assigner->variable.assign(core::api::uber_states::UberState(10289, 4928));
                teleporter_name = "Inner Ruins";
                break;
            case 2: {
                assigner->variable.assign(core::api::uber_states::UberState(945, 58183));
                teleporter_name = "Central Luma";
                if (should_add) {
                    auto lower_water = std::make_shared<items::ValueModifier<bool, items::ValueOperator::Assign>>();
                    lower_water->variable.assign(core::api::uber_states::UberState(5377, 63173));
                    lower_water->value.set(should_add);
                    data.location_data.items[data.next_location_id++] = lower_water;
                }
                break;
            }
            case 13:
                assigner->variable.assign(core::api::uber_states::UberState(1370, 61594));
                teleporter_name = "Luma Boss";
                break;
            case 15:
                assigner->variable.assign(core::api::uber_states::UberState(16155, 50867));
                teleporter_name = "Shriek";
                break;
            case 16:
                assigner->variable.assign(core::api::uber_states::UberState(21786, 10185));
                teleporter_name = "Inkwater Marsh";
                break;
            case 17:
                assigner->variable.assign(core::api::uber_states::UberState(42178, 42096));
                teleporter_name = "Glades";
                break;
            default:
                return false;
        }

        data.location_data.items[data.next_location_id++] = assigner;
        auto message = std::make_shared<items::Message>();
        set_location(message.get(), location);
        message->should_save_as_last = true;
        const auto text = should_add
            ? fmt::format("{0} TP", teleporter_name)
            : fmt::format("Removed {0} TP", teleporter_name);
        message->info.text = fmt::format("#{0}#", text);
        data.location_data.items[data.next_location_id++] = message;
        data.location_data.icons.emplace_back().assign(app::WorldMapIconType__Enum::SavePedestal);
        data.location_data.names.emplace_back().assign(text);
        return true;
    }

    bool parse_message(location_type const& location, std::span<std::string> parts, ParserData& data) {
        auto message = std::make_shared<items::Message>();
        set_location(message.get(), location);
        message->should_save_as_last = true;
        message->info.duration = 4;
        for (const auto& part : parts) {
            if (part.starts_with("f=")) {
                int frames;
                if (string_convert(parts[0].substr(2), frames)) {
                    message->info.duration = static_cast<float>(frames) / 60.f;
                }
            } else if (part.starts_with("p=")) {
                // Not used anymore.
            } else if (part == "noclear") {
                // Not used anymore.
            } else if (part == "quiet") {
                // Not used anymore.
            } else if (part == "instant" || part == "prioritized") {
                message->info.prioritized = true;
            } else if (part == "nofade") {
                message->info.instant_fade = true;
            } else if (part == "prepend") {
                // Not used anymore.
            } else {
                if (!message->info.text.empty()) {
                    message->info.text += "|";
                }

                message->info.text += part;
            }
        }

        data.location_data.items[data.next_location_id++] = message;
        data.location_data.names.emplace_back().assign(message->info.text);
        return true;
    }

    std::regex ptr_regex(R"(\$\(([0-9]+)\|([0-9]+)\))");
    std::regex range_regex(R"(\[([^,\]]+),([^,\]]+)\])");

    bool gen_from_frag(const std::string& frag, core::DynamicValue<double>& value) {
        std::smatch results;
        if (std::regex_match(frag, results, ptr_regex)) {
            int group;
            int state;
            string_convert(results[0].str(), group);
            string_convert(results[1].str(), state);
            value.assign(core::api::uber_states::UberState(group, state));
        } else {
            double constant_value;
            if (string_convert(frag, constant_value)) {
                value.set(constant_value);
            } else {
                return false;
            }
        }

        return true;
    }

    bool parse_uber_state(std::span<std::string> parts, ParserData& data) {
        if (parts.size() < 4 || parts.size() > 5) {
            return false;
        }

        int group;
        if (!string_convert(parts[0], group)) {
            return false;
        }

        int state;
        if (!string_convert(parts[1], state)) {
            return false;
        }

        // auto type = uberTypeFromString(extras[2]);
        const bool negative = parts[3].starts_with('-');
        const bool is_modifier = parts[3].starts_with('+') || negative;
        if (is_modifier) {
            parts[3] = parts[3].substr(1);
        }

        if (parts.size() > 4) {
            if (!parts[4].starts_with("skip")) {
                return false;
            }

            auto skip = std::make_shared<items::SkipState>();
            skip->state = core::api::uber_states::UberState(group, state);
            data.location_data.items[data.next_location_id++] = skip;
        }

        std::smatch results;
        if (std::regex_match(parts[3], results, range_regex)) {
            core::DynamicValue<double> start;
            core::DynamicValue<double> end;
            gen_from_frag(results[0], start);
            gen_from_frag(results[1], end);

            auto setget = core::set_get<double>{
                [](auto value) {},
                [start, end, negative]() {
                    const auto lower = start.get();
                    const auto upper = end.get();
                    const auto random_value = core::random();
                    const auto sign = negative ? -1.f : 1.f;
                    return sign * random_value * (upper - lower) + lower;
                },
            };

            if (is_modifier) {
                if (negative) {
                    auto setter = std::make_shared<items::ValueModifier<double, items::ValueOperator::Add>>();
                    setter->variable.assign(core::api::uber_states::UberState(group, state));
                    setter->value.assign(setget);
                    data.location_data.items[data.next_location_id++] = setter;
                } else {
                    auto setter = std::make_shared<items::ValueModifier<double, items::ValueOperator::Sub>>();
                    setter->variable.assign(core::api::uber_states::UberState(group, state));
                    setter->value.assign(setget);
                    data.location_data.items[data.next_location_id++] = setter;
                }
            } else {
                auto setter = std::make_shared<items::ValueModifier<double, items::ValueOperator::Add>>();
                setter->variable.assign(core::api::uber_states::UberState(group, state));
                setter->value.assign(setget);
                data.location_data.items[data.next_location_id++] = setter;
            }
        } else if (is_modifier) {
            if (negative) {
                auto setter = std::make_shared<items::ValueModifier<double, items::ValueOperator::Sub>>();
                setter->variable.assign(core::api::uber_states::UberState(group, state));
                gen_from_frag(parts[3], setter->value);
                data.location_data.items[data.next_location_id++] = setter;
            } else {
                auto setter = std::make_shared<items::ValueModifier<double, items::ValueOperator::Add>>();
                setter->variable.assign(core::api::uber_states::UberState(group, state));
                gen_from_frag(parts[3], setter->value);
                data.location_data.items[data.next_location_id++] = setter;
            }
        } else {
            auto setter = std::make_shared<items::ValueModifier<double, items::ValueOperator::Assign>>();
            setter->variable.assign(core::api::uber_states::UberState(group, state));
            gen_from_frag(parts[3], setter->value);
            data.location_data.items[data.next_location_id++] = setter;
        }

        return true;
    }

    bool parse_quest_event(location_type const& location, std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 1) {
            return false;
        }

        int quest_event_int;
        // If we add more than one event, don't early out here.
        if (!string_convert(parts[0], quest_event_int) || quest_event_int != 0) {
            return false;
        }

        const auto should_add = !parts[0].starts_with("-");

        auto assigner = std::make_shared<items::ValueModifier<bool, items::ValueOperator::Assign>>();
        assigner->value.set(should_add);
        assigner->variable.assign(core::api::uber_states::UberState(6, 2000));
        data.location_data.items[data.next_location_id++] = assigner;

        auto applier = std::make_shared<items::ApplyUberState>();
        applier->state = core::api::uber_states::UberState(937, 34641);
        data.location_data.items[data.next_location_id++] = applier;

        applier = std::make_shared<items::ApplyUberState>();
        applier->state = core::api::uber_states::UberState(37858, 12379);
        data.location_data.items[data.next_location_id++] = applier;

        applier = std::make_shared<items::ApplyUberState>();
        applier->state = core::api::uber_states::UberState(37858, 10720);
        data.location_data.items[data.next_location_id++] = applier;

        auto quest_event = "Clean Water";
        const auto text = should_add
            ? fmt::format("{0}", quest_event)
            : fmt::format("Removed {0}", quest_event);

        auto message = std::make_shared<items::Message>();
        set_location(message.get(), location);
        message->should_save_as_last = true;
        message->info.text = fmt::format("*{0}*", text);
        data.location_data.items[data.next_location_id++] = message;

        data.location_data.icons.emplace_back().assign(app::WorldMapIconType__Enum::QuestEnd);
        data.location_data.names.emplace_back().assign(text);

        return true;
    }

    bool parse_bonus_item(location_type const& location, std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 1) {
            return false;
        }

        int bonus_type_int;
        if (!string_convert(parts[0], bonus_type_int)) {
            return false;
        }

        std::string bonus_item;
        switch (bonus_type_int) {
            case 30:
                bonus_item = "Health Regeneration";
                break;
            case 31:
                bonus_item = "Energy Regeneration";
                break;
            case 35:
                bonus_item = "Extra Double Jump";
                break;
            case 36:
                bonus_item = "Extra Air Dash";
                break;
            default:
                return false;
        }

        auto item = std::make_shared<items::ValueModifier<int, items::ValueOperator::Add>>();
        item->variable.assign(core::api::uber_states::UberState(4, bonus_type_int));
        item->value.set(1);
        data.location_data.items[data.next_location_id++] = item;

        auto message = std::make_shared<items::Message>();
        set_location(message.get(), location);
        message->should_save_as_last = true;
        message->info.text = fmt::format(R"(#{0}[if([state_int(4, {1})] > 1, x[state_int(4, {1})],)]#)", bonus_item, bonus_type_int);
        data.location_data.items[data.next_location_id++] = message;

        data.location_data.icons.emplace_back().assign(app::WorldMapIconType__Enum::Seed);
        data.location_data.names.emplace_back().assign(bonus_item);

        return true;
    }

    bool parse_weapon_upgrade(location_type const& location, std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 1) {
            return false;
        }

        int weapon_upgrade_int;
        if (!string_convert(parts[0], weapon_upgrade_int)) {
            return false;
        }

        auto item = std::make_shared<items::ValueModifier<float, items::ValueOperator::Assign>>();
        item->value.set(1.f);
        std::string upgrade;
        switch (weapon_upgrade_int) {
            case 0:
            case 1:
                item->variable.assign(core::api::uber_states::UberState(4, weapon_upgrade_int));
                item->value.assign(core::set_get<float>{
                    [](auto value) {},
                    [weapon_upgrade_int]() {
                        return std::powf(1.25f, core::api::uber_states::UberState(4, 50 + weapon_upgrade_int).get<float>());
                    },
                });
                break;
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                item->variable.assign(core::api::uber_states::UberState(4, weapon_upgrade_int));
                item->value.assign(core::set_get<float>{
                    [](auto value) {},
                    [weapon_upgrade_int]() {
                        return std::powf(0.5f, core::api::uber_states::UberState(4, 50 + weapon_upgrade_int).get<float>());
                    },
                });
                break;
            case 45:
                upgrade = "Shock Smash";
                item->variable.assign(core::api::uber_states::UberState(3440, 5687));
                break;
            case 46:
                upgrade = "Static Star";
                item->variable.assign(core::api::uber_states::UberState(3440, 46488));
                break;
            case 47:
                upgrade = "Sentry Speed";
                item->variable.assign(core::api::uber_states::UberState(3440, 10776));
                break;
            case 48:
                upgrade = "Charge Blaze";
                item->variable.assign(core::api::uber_states::UberState(3440, 61898));
                break;
            case 49:
                upgrade = "Exploding Spike";
                item->variable.assign(core::api::uber_states::UberState(3440, 57376));
                break;
            default:
                return false;
        }

        auto message = std::make_shared<items::Message>();
        set_location(message.get(), location);
        message->should_save_as_last = true;
        message->info.text = fmt::format("#{0}#", upgrade);
        set_location(message.get(), location);
        data.location_data.items[data.next_location_id++] = message;

        data.location_data.items[data.next_location_id++] = item;
        data.location_data.names.emplace_back().assign(upgrade);

        return true;
    }

    bool parse_relic(std::span<std::string> parts, ParserData& data) {
        // return Relic.Build((ZoneType)pickupData.ParseToByte("BuildPickup.RelicZone"), extras.FirstOrElse(""));
        // TODO: Implement
        return false;
    }

    bool parse_sys_message(std::span<std::string> parts, ParserData& data) {
        int sys_message_type;
        if (!string_convert(parts[0], sys_message_type)) {
            return false;
        }

        // TODO: RelicList, MapRelicList and GoalProgress should be implemented in headers/seedgen.
        switch (sys_message_type) {
            case 0:
                // RelicList
                // var rzs = RelicZones;
                // if (rzs.Count == 0)
                //    return "";
                // int cur = 0;
                // int tot = 0;
                // var s = String.Join(", ", rzs.Select(z => {
                //    int totz = Counts[z];
                //    int curz = UberGet.value(ZoneToId[z]).Byte;
                //    cur += curz;
                //    tot += totz;
                //    var w = "";
                //    if (curz >= totz)
                //        w = "@";
                //    else if (CurrentZone == z)
                //        w = "#";
                //    return $"{w}{z}{w}";
                //}));
                // var c = cur == tot ? "$" : "";
                // return $"{c}Relics ({cur}/{tot}):{c} {s}";
                return false;
            case 1:
                // MapRelicList
                // var rzs = RelicZones;
                // if (rzs.Count == 0)
                //     return "";
                // if (rzs.Contains(zone)) {
                //     if (UberGet.value(ZoneToId[zone]).Byte >= Counts[zone])
                //         return " $(Relic found)$";
                //     else
                //         return " (Relic not found)";
                // }
                // return " (Relicless)";
                return false;
            case 2: {
                auto message = std::make_shared<items::Message>();
                message->should_save_as_last = true;
                message->info.text = "[state_int(6, 2)]/[seed(pickup_count)]";
                data.location_data.items[data.next_location_id++] = message;
                data.location_data.names.emplace_back().assign(message->info.text);
                break;
            }
            case 3:
                // GoalProgress
                // auto message = std::make_shared<items::Message>();
                // message->info.text = "[world(name)]";
                // message->info.should_save_as_last = true;
                // data.items.push_back(message);

                // if (InterOp.Utils.get_game_state() != GameState.Game)
                //     return ""; // don't even try!

                // var goalMsgs = new List<String>();
                // if (Flags.Contains(Flag.ALL_WISPS)) {
                //     var max = UberStateController.Wisps.Count;
                //     var amount = UberStateController.Wisps.Count((UberState s) = > s.GetValue().Bool);
                //     var w = amount == max ? met : unmet;
                //     goalMsgs.Add($ "{w}Wisps: {amount}/{max}{w}");
                // }

                // if (Flags.Contains(Flag.ALL_TREES)) {
                //     var amount = SaveController.TreeCount;
                //     var w = amount == 14 ? met : unmet;
                //     goalMsgs.Add($ "{w}Trees: {amount}/{14}{w}");
                // }

                // if (Flags.Contains(Flag.ALL_QUESTS)) {
                //     var max = UberStateController.Quests.Count;
                //     var amount = UberStateController.Quests.Count((UberState s) = > s.GetValue().Int == s.Value.Int);
                //     var w = amount == max ? met : unmet;
                //     goalMsgs.Add($ "{w}Quests: {amount}/{max}{w}");
                // }

                // var msg = String.Join(", ", goalMsgs);
                // if (withRelics && Flags.Contains(Flag.RELICS))
                //     msg += "\n" + Relic.RelicMessage();
                // return goalMsgs.Count > 0 ? (progress ? "\n" : "") + msg : msg;
                // return SeedController.GoalModeMessages(withRelics
                //                                        : false);
                return false;
            case 4: {
                std::vector<std::string> pieces;
                split_str(parts[1], pieces, ',');
                if (pieces.size() % 2 != 0) {
                    return false;
                }

                auto counter = std::make_shared<items::CountingMessage>();
                for (auto it = pieces.begin(); it != pieces.end(); it += 2) {
                    auto& target = counter->targets.emplace_back();
                    core::api::uber_states::parse_condition(std::span<std::string>(it, 2), target);
                }

                data.location_data.items[data.next_location_id++] = counter;
                data.location_data.names.emplace_back().assign([counter]() { return counter->message_text(); });
                break;
            }
            case 5: {
                // WorldName
                auto message = std::make_shared<items::Message>();
                message->info.text = "[world(name)]";
                message->should_save_as_last = true;
                data.location_data.items[data.next_location_id++] = message;
                data.location_data.names.emplace_back().assign(message->info.text);
                break;
            }
            default:
                return false;
        }

        return true;
    }

    bool parse_wheel_name(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 3) {
            return false;
        }

        int wheel;
        int item;
        if (!string_convert(parts[0], wheel) || !string_convert(parts[1], item)) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        auto& name = parts[2];
        caller->func = [wheel, item, name]() {
            features::wheel::set_wheel_item_name(wheel, item, name);
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_wheel_description(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 3) {
            return false;
        }

        int wheel;
        int item;
        if (!string_convert(parts[0], wheel) || !string_convert(parts[1], item)) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        auto& description = parts[2];
        caller->func = [wheel, item, description]() {
            features::wheel::set_wheel_item_description(wheel, item, description);
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_wheel_texture(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 3) {
            return false;
        }

        int wheel;
        int item;
        if (!string_convert(parts[0], wheel) || !string_convert(parts[1], item)) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        auto& texture = parts[2];
        caller->func = [wheel, item, texture]() {
            features::wheel::set_wheel_item_texture(wheel, item, texture);
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_wheel_color(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 6) {
            return false;
        }

        int wheel;
        int item;
        app::Color color{};
        if (
            !string_convert(parts[0], wheel) ||
            !string_convert(parts[1], item) ||
            !string_convert(parts[2], color.r) ||
            !string_convert(parts[3], color.g) ||
            !string_convert(parts[4], color.b) ||
            !string_convert(parts[5], color.a)
        ) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        caller->func = [wheel, item, color]() {
            features::wheel::set_wheel_item_color(
                wheel,
                item,
                static_cast<int>(color.r),
                static_cast<int>(color.g),
                static_cast<int>(color.b),
                static_cast<int>(color.a)
            );
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_wheel_action(location_type const& location, std::span<std::string> parts, ParserData& data) { // NOLINT
        if (parts.size() != 3) {
            return false;
        }

        int wheel;
        int item;
        int binding;
        if (!string_convert(parts[0], wheel) || !string_convert(parts[1], item) || !string_convert(parts[2], binding)) {
            return false;
        }

        auto binding_type = static_cast<app::SpellInventory_Binding__Enum>(binding);
        if (!magic_enum::enum_contains(binding_type)) {
            return false;
        }

        auto procedure_id = data.next_procedure_id++;
        auto& procedure = data.data.procedures[procedure_id];
        ParserData procedure_data{
            .data = data.data,
            .location_data = procedure,
            .next_location_id = data.next_location_id,
            .next_procedure_id = data.next_procedure_id,
        };

        if (!parse_action(location, std::span<std::string>(parts.begin() + 3, parts.end()), procedure_data)) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        caller->func = [wheel, item, binding_type, procedure_id]() {
            features::wheel::set_wheel_item_callback(wheel, item, binding_type, [procedure_id](auto, auto, auto) {
                game_seed().call_procedure(procedure_id);
            });
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_wheel_sticky(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 2) {
            return false;
        }

        int wheel;
        bool sticky;
        if (!string_convert(parts[0], wheel) || !string_convert(parts[1], sticky)) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        caller->func = [wheel, sticky]() {
            features::wheel::set_wheel_sticky(wheel, sticky);
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_wheel_active(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 1) {
            return false;
        }

        int wheel;
        if (!string_convert(parts[0], wheel)) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        caller->func = [wheel]() {
            features::wheel::set_active_wheel(wheel);
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_wheel_clear_item(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 2) {
            return false;
        }

        int wheel;
        int item;
        if (!string_convert(parts[0], wheel) || !string_convert(parts[1], item)) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        caller->func = [wheel, item]() {
            features::wheel::clear_wheel_item(wheel, item);
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_wheel_clear_all(std::span<std::string> parts, ParserData& data) {
        if (!parts.empty()) {
            return false;
        }

        auto caller = std::make_shared<items::Call>();
        caller->func = []() {
            features::wheel::clear_wheels();
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_wheel(location_type const& location, std::span<std::string> parts, ParserData& data) { // NOLINT
        if (parts.empty()) {
            return false;
        }

        int wheel_type;
        if (!string_convert(parts[0], wheel_type)) {
            return false;
        }

        switch (wheel_type) {
            case 0:
                return parse_wheel_name(parts, data);
            case 1:
                return parse_wheel_description(parts, data);
            case 2:
                return parse_wheel_texture(parts, data);
            case 3:
                return parse_wheel_color(parts, data);
            case 4:
                return parse_wheel_action(location, parts, data);
            case 5:
                return parse_wheel_sticky(parts, data);
            case 6:
                return parse_wheel_active(parts, data);
            case 7:
                return parse_wheel_clear_item(parts, data);
            case 8:
                return parse_wheel_clear_all(parts, data);
            default:
                break;
        }

        return false;
    }

    bool parse_shop_icon(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 3) {
            return false;
        }

        int group;
        int state;
        if (!string_convert(parts[0], group) || !string_convert(parts[1], state)) {
            return false;
        }

        auto icon = parts[2];
        auto shop_state = core::api::uber_states::UberState(group, state);
        auto caller = std::make_shared<items::Call>();
        caller->func = [shop_state, icon]() {
            auto slot = game::shops::shop_slot_from_state(shop_state);
            if (slot != nullptr) {
                slot->normal.icon = core::textures::get_texture(icon);
                slot->locked.icon = slot->normal.icon;
            }
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_shop_title(std::span<std::string> parts, ParserData& data) {
        if (parts.size() < 2 || parts.size() > 3) {
            return false;
        }

        int group;
        int state;
        if (!string_convert(parts[0], group) || !string_convert(parts[1], state)) {
            return false;
        }

        auto title = parts.size() == 3 ? parts[2] : " ";
        auto shop_state = core::api::uber_states::UberState(group, state);
        auto caller = std::make_shared<items::Call>();
        caller->func = [shop_state, title]() {
            auto slot = game::shops::shop_slot_from_state(shop_state);
            if (slot != nullptr) {
                slot->normal.name = title;
            }
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_shop_description(std::span<std::string> parts, ParserData& data) {
        if (parts.size() < 2 || parts.size() > 3) {
            return false;
        }

        int group;
        int state;
        if (!string_convert(parts[0], group) || !string_convert(parts[1], state)) {
            return false;
        }

        auto description = parts.size() == 3 ? parts[2] : " ";
        auto shop_state = core::api::uber_states::UberState(group, state);
        auto caller = std::make_shared<items::Call>();
        caller->func = [shop_state, description]() {
            auto slot = game::shops::shop_slot_from_state(shop_state);
            if (slot != nullptr) {
                slot->normal.description = description;
            }
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_shop_locked(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 3) {
            return false;
        }

        int group;
        int state;
        bool locked;
        if (!string_convert(parts[0], group) || !string_convert(parts[1], state) || !string_convert(parts[2], locked)) {
            return false;
        }

        auto shop_state = core::api::uber_states::UberState(group, state);
        auto caller = std::make_shared<items::Call>();
        caller->func = [shop_state, locked]() {
            auto slot = game::shops::shop_slot_from_state(shop_state);
            if (slot != nullptr && slot->visibility != game::shops::SlotVisibility::Hidden) {
                slot->visibility = locked
                    ? game::shops::SlotVisibility::Locked
                    : game::shops::SlotVisibility::Visible;
            }
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_shop_visible(std::span<std::string> parts, ParserData& data) {
        if (parts.size() != 3) {
            return false;
        }

        int group;
        int state;
        bool visible;
        if (!string_convert(parts[0], group) || !string_convert(parts[1], state) || !string_convert(parts[2], visible)) {
            return false;
        }

        auto shop_state = core::api::uber_states::UberState(group, state);
        auto caller = std::make_shared<items::Call>();
        caller->func = [shop_state, visible]() {
            auto slot = game::shops::shop_slot_from_state(shop_state);
            if (slot != nullptr) {
                slot->visibility = visible
                    ? game::shops::SlotVisibility::Visible
                    : game::shops::SlotVisibility::Hidden;
            }
        };

        data.location_data.items[data.next_location_id++] = caller;
        return true;
    }

    bool parse_shop(std::span<std::string> parts, ParserData& data) {
        if (parts.empty()) {
            return false;
        }

        int wheel_type;
        if (!string_convert(parts[0], wheel_type)) {
            return false;
        }

        switch (wheel_type) {
            case 0:
                return parse_shop_icon(parts, data);
            case 1:
                return parse_shop_title(parts, data);
            case 2:
                return parse_shop_description(parts, data);
            case 3:
                return parse_shop_locked(parts, data);
            case 4:
                return parse_shop_visible(parts, data);
            default:
                break;
        }

        return false;
    }

    bool parse_action(location_type const& location, std::span<std::string> parts, ParserData& data) { // NOLINT
        if (parts.empty()) {
            return false;
        }

        int action_type_int;
        if (!string_convert(parts[0], action_type_int)) {
            return false;
        }

        auto action_type = static_cast<ActionType>(action_type_int);
        auto next_parts = std::span<std::string>(parts.begin() + 1, parts.end());
        switch (action_type) {
            case ActionType::SpiritLight:
                return parse_spirit_light(location, next_parts, data);
            case ActionType::Resource:
                return parse_resource(location, next_parts, data);
            case ActionType::Ability:
                return parse_ability(location, next_parts, data);
            case ActionType::Shard:
                return parse_shard(location, next_parts, data);
            case ActionType::SystemCommand:
                return parse_sys_command(location, next_parts, data);
            case ActionType::Teleporter:
                return parse_teleporter(location, next_parts, data);
            case ActionType::Message:
                return parse_message(location, next_parts, data);
            case ActionType::UberState:
                return parse_uber_state(next_parts, data);
            case ActionType::QuestEvent:
                return parse_quest_event(location, next_parts, data);
            case ActionType::BonusItem:
                return parse_bonus_item(location, next_parts, data);
            case ActionType::WeaponUpgrade:
                return parse_weapon_upgrade(location, next_parts, data);
            case ActionType::Relic:
                return parse_relic(next_parts, data);
            case ActionType::SysMessage:
                return parse_sys_message(next_parts, data);
            case ActionType::Wheel:
                return parse_wheel(location, next_parts, data);
            case ActionType::Shop:
                return parse_shop(next_parts, data);
            default:
                return false;
        }
    }

    bool parse_expression(int& next_location_id, int& next_procedure_id, std::span<std::string> parts, Seed::Data& data) {
        if (parts.size() < 3) {
            // Need at least the trigger and an action type.
            return false;
        }

        core::api::uber_states::UberStateCondition trigger;
        if (!core::api::uber_states::parse_condition(std::span<std::string>(parts.begin(), parts.begin() + 2), trigger)) {
            return false;
        }

        auto& location_item_data = data.locations[trigger.state][trigger];
        ParserData parser_data{
            .data = data,
            .location_data = location_item_data,
            .next_location_id = next_location_id,
            .next_procedure_id = next_procedure_id,
        };

        return parse_action(trigger, std::span<std::string>(parts.begin() + 2, parts.end()), parser_data);
    }

    void parse_config(std::string_view line, Seed::Data& data) {
        if (line.starts_with("// This World:")) {
            std::string str(line.substr(14));
            data.info.world_index = std::stoi(str);
        } else if (line.starts_with("// Target:")) {
        } else if (line.starts_with("// Generator Version:")) {
        } else if (line.starts_with("// Slug:")) {
            data.info.slug = trim(line.substr(sizeof("Slug:")));
        } else if (line.starts_with("// Config:")) {
            auto j = nlohmann::json::parse(line.begin() + sizeof("// Config:"), line.end());
            data.info.net_code_enabled = j.value("online", false);
        }

        // If we don't match anything here it's a comment, and we can ignore it.
    }

    bool parse(std::string_view path, location_data::LocationCollection const& location_data, Seed::Data& data) {
        std::ifstream seed_file(path.data());
        if (!seed_file.is_open()) {
            return false;
        }

        current_location_data = &location_data;
        int next_location_id = 0;
        int next_procedure_id = 0;
        std::string line;
        while (std::getline(seed_file, line)) {
            if (line.starts_with("//")) {
                parse_config(line, data);
                continue;
            }

            if (line == "0|0|8|9|5|int|+1") {
                modloader::trace(modloader::MessageType::Info, 3, "test", "Wohooo");
            }

            // Remove comments.
            line = line.substr(0, line.find("//"));
            if (line.starts_with("Flags:")) {
                split_str(line.substr(6), data.info.flags, ',');
            } else if (line.starts_with("Spawn:")) {
                std::vector<std::string> coords;
                split_str(line.substr(6), coords, ',');
                if (coords.size() != 2) {
                    continue;
                }

                app::Vector3 position{};
                if (!string_convert(coords[0], position.x) || !string_convert(coords[1], position.y)) {
                    continue;
                }

                data.info.start_position = position;
            } else if (line.starts_with("timer:")) {
            } else if (!line.empty()) {
                std::vector<std::string> parts;
                parse_parts(line, parts);
                parse_expression(next_location_id, next_procedure_id, std::span(parts.begin(), parts.end()), data);
            }
        }

        seed_file.close();
        return true;
    }

    ItemData parse_action(std::string_view action) {
        Seed::Data data;
        location_type location{
            { -1, -1 },
            BooleanOperator::Equals,
            0,
        };

        ItemData& location_data = data.locations[location.state][location];
        int next_location_id = 0;
        int next_procedure_id = 0;

        ParserData parser_data{
            .data = data,
            .location_data = location_data,
            .next_location_id = next_location_id,
            .next_procedure_id = next_procedure_id
        };

        std::vector<std::string> parts;
        parse_parts(action, parts);
        parse_action(location, parts, parser_data);
        return location_data;
    }
} // namespace randomizer::seed::legacy_parser

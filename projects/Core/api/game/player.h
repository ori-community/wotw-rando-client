#pragma once

#include <Core/property.h>
#include <Core/enums/game_areas.h>
#include <Core/macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>

namespace core::api::game::player {
    CORE_DLLEXPORT extern bool prevent_default_pickup_handlers;

    CORE_DLLEXPORT app::SeinCharacter* sein();

    CORE_DLLEXPORT std::optional<app::EquipmentType__Enum> ability_to_equip_type(app::AbilityType__Enum ability);
    CORE_DLLEXPORT void bind(app::SpellInventory_Binding__Enum slot, app::EquipmentType__Enum equip_type);
    CORE_DLLEXPORT void unbind(app::EquipmentType__Enum equip_type);
    CORE_DLLEXPORT void unbind_all();

    CORE_DLLEXPORT bool can_move();

    CORE_DLLEXPORT app::Vector3 get_position();
    CORE_DLLEXPORT app::Vector2 get_velocity();
    CORE_DLLEXPORT void set_position(float x, float y, bool wait_for_load = false);
    CORE_DLLEXPORT void set_position(app::Vector3 value, bool wait_for_load = false);
    CORE_DLLEXPORT void set_velocity(float x, float y);
    CORE_DLLEXPORT void set_velocity(const app::Vector2& value);
    CORE_DLLEXPORT void snap_camera();

    CORE_DLLEXPORT void refill_energy();
    CORE_DLLEXPORT void refill_health();

    // TODO: Make these reactive.
    CORE_DLLEXPORT Property<float> health();
    CORE_DLLEXPORT Property<int> max_health();
    CORE_DLLEXPORT Property<float> energy();
    CORE_DLLEXPORT Property<float> max_energy();
    CORE_DLLEXPORT Property<int> spirit_light();
    CORE_DLLEXPORT Property<int> keystones();
    CORE_DLLEXPORT Property<int> ore();
    CORE_DLLEXPORT Property<int> shard_slots();

    CORE_DLLEXPORT const Property<bool>& shard(app::SpiritShardType__Enum type);
    CORE_DLLEXPORT bool is_shard_equipped(app::SpiritShardType__Enum type);

    CORE_DLLEXPORT const Property<bool>& ability(app::AbilityType__Enum type);

    CORE_DLLEXPORT GameArea get_current_area();
    CORE_DLLEXPORT app::PlayerUberStateAreaMapInformation* get_area_map_information();
} // namespace core::api::game::player

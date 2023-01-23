#pragma once

#include <Core/macros.h>
#include <Core/enums/game_areas.h>

#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SpellInventory_Binding__Enum.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>

namespace game {
    namespace player {
        CORE_DLLEXPORT app::SeinCharacter* sein();

        CORE_DLLEXPORT bool has_ability(app::AbilityType__Enum ability);
        CORE_DLLEXPORT void set_ability(app::AbilityType__Enum ability, bool value);

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

        CORE_DLLEXPORT void refill_energy(bool instantly = false);
        CORE_DLLEXPORT void refill_health(bool instantly = false);

        CORE_DLLEXPORT GameArea get_current_area();
    } // namespace player
} // namespace game

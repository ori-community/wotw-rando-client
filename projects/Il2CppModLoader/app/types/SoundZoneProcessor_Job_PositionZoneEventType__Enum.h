#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundZoneProcessor_Job_PositionZoneEventType__Enum {
        namespace {
            inline app::SoundZoneProcessor_Job_PositionZoneEventType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEventType__Enum__Class** type_info = &type_info_ref;
        inline app::SoundZoneProcessor_Job_PositionZoneEventType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundZoneProcessor_Job_PositionZoneEventType__Enum__Class>(type_info, "", "SoundZoneProcessor+Job", "PositionZoneEventType");
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEventType__Enum* create() {
            return il2cpp::create_object<app::SoundZoneProcessor_Job_PositionZoneEventType__Enum>(get_class());
        }
    } // namespace SoundZoneProcessor_Job_PositionZoneEventType__Enum
} // namespace app::classes::types

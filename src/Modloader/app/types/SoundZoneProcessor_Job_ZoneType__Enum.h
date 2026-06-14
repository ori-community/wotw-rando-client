#pragma once
#include <Modloader/app/structs/SoundZoneProcessor_Job_ZoneType__Enum.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job_ZoneType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundZoneProcessor_Job_ZoneType__Enum {
        inline app::SoundZoneProcessor_Job_ZoneType__Enum__Class** type_info() {
            static app::SoundZoneProcessor_Job_ZoneType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundZoneProcessor_Job_ZoneType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundZoneProcessor_Job_ZoneType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundZoneProcessor_Job_ZoneType__Enum__Class>(type_info(), "", "SoundZoneProcessor+Job", "ZoneType");
        }
        inline app::SoundZoneProcessor_Job_ZoneType__Enum* create() {
            return il2cpp::create_object<app::SoundZoneProcessor_Job_ZoneType__Enum>(get_class());
        }
    } // namespace SoundZoneProcessor_Job_ZoneType__Enum
} // namespace app::classes::types

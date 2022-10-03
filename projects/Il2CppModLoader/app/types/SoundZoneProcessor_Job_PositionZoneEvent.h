#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundZoneProcessor_Job_PositionZoneEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundZoneProcessor_Job_PositionZoneEvent__Class** type_info;
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundZoneProcessor_Job_PositionZoneEvent__Class>(type_info, "", "SoundZoneProcessor+Job", "PositionZoneEvent");
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent* create() {
            return il2cpp::create_object<app::SoundZoneProcessor_Job_PositionZoneEvent>(get_class());
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Boxed* box(app::SoundZoneProcessor_Job_PositionZoneEvent value) {
            return il2cpp::box_value<app::SoundZoneProcessor_Job_PositionZoneEvent__Boxed>(get_class(), value);
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundZoneProcessor_Job_PositionZoneEvent__Array>(get_class(), size);
        }
    } // namespace SoundZoneProcessor_Job_PositionZoneEvent
} // namespace app::classes::types

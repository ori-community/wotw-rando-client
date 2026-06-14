#pragma once
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent__Array.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundZoneProcessor_Job_PositionZoneEvent__Array {
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Array__Class** type_info() {
            static app::SoundZoneProcessor_Job_PositionZoneEvent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundZoneProcessor_Job_PositionZoneEvent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundZoneProcessor_Job_PositionZoneEvent__Array__Class>(type_info(), "", "SoundZoneProcessor+Job+PositionZoneEvent[]");
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Array* create() {
            return il2cpp::create_object<app::SoundZoneProcessor_Job_PositionZoneEvent__Array>(get_class());
        }
    } // namespace SoundZoneProcessor_Job_PositionZoneEvent__Array
} // namespace app::classes::types

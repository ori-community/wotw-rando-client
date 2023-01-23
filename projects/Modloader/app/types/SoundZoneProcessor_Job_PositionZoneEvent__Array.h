#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent__Array__Class.h>
#include <Modloader/app/structs/SoundZoneProcessor_Job_PositionZoneEvent__Array.h>

namespace app::classes::types {
    namespace SoundZoneProcessor_Job_PositionZoneEvent__Array {
        namespace {
            inline app::SoundZoneProcessor_Job_PositionZoneEvent__Array__Class* type_info_ref = nullptr;
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Array__Class** type_info = &type_info_ref;
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundZoneProcessor_Job_PositionZoneEvent__Array__Class>(type_info, "", "SoundZoneProcessor+Job+PositionZoneEvent[]");
        }
        inline app::SoundZoneProcessor_Job_PositionZoneEvent__Array* create() {
            return il2cpp::create_object<app::SoundZoneProcessor_Job_PositionZoneEvent__Array>(get_class());
        }
    } // namespace SoundZoneProcessor_Job_PositionZoneEvent__Array
} // namespace app::classes::types

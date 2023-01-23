#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array.h>

namespace app::classes::types {
    namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array {
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class** type_info = (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0477CF40));
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class* get_class() {
            return il2cpp::get_class<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class>(type_info, "Moon.Wwise", "ZoneProcessor`2[TListenerTaskData,TEmitterTaskData]+EmitterZoneTask[ListenerSoundZoneTaskData,EmitterSoundZoneTaskData][][]");
        }
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array* create() {
            return il2cpp::create_object<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array>(get_class());
        }
    } // namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array
} // namespace app::classes::types

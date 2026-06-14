#pragma once
#include <Modloader/app/structs/ZoneProcessor_2_TListenerT_TEmitterT_EmitterZ_ListenerSoundZone_EmitterSoundZone___A__A__C.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTa_TEmitterT_EmitterZ_ListenerSoundZoneT_EmitterSoundZoneT___A__A.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array {
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class** type_info() {
            static app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0477CF40));
            }
            return cache;
        }
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class* get_class() {
            return il2cpp::get_class<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array__Class>(type_info(), "Moon.Wwise", "ZoneProcessor`2[TListenerTaskData,TEmitterTaskData]+EmitterZoneTask[ListenerSoundZoneTaskData,EmitterSoundZoneTaskData][][]");
        }
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array* create() {
            return il2cpp::create_object<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array>(get_class());
        }
    } // namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array
} // namespace app::classes::types

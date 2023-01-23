#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array.h>

namespace app::classes::types {
    namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array {
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class** type_info = (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class**)(modloader::win::memory::resolve_rva(0x04719CA8));
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class* get_class() {
            return il2cpp::get_class<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class>(type_info, "Moon.Wwise", "ZoneProcessor`2[TListenerTaskData,TEmitterTaskData]+ListenerZoneTask[ListenerSoundZoneTaskData,EmitterSoundZoneTaskData][]");
        }
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array* create() {
            return il2cpp::create_object<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array>(get_class());
        }
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array* create_array(int size) {
            return il2cpp::array_new<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array>(get_class(), size);
        }
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array* create_array(const std::vector<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array*>& items) {
            return il2cpp::array_new<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Array>(get_class(), items);
        }
    } // namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array
} // namespace app::classes::types

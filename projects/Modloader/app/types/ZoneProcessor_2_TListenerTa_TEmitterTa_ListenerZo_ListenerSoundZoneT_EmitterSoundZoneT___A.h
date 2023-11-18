#pragma once
#include <Modloader/app/structs/ZoneProcessor_2_TListenerT_TEmitterT_ListenerZ_ListenerSoundZoneT_EmitterSoundZoneT___A__A.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerT_TEmitterT_ListenerZ_ListenerSoundZoneT_EmitterSoundZoneT___A__C.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTa_TEmitterTa_ListenerZo_ListenerSoundZoneT_EmitterSoundZoneT___A.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array {
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class** type_info() {
            static app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class**)(modloader::win::memory::resolve_rva(0x04719CA8));
            }
            return cache;
        }
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class* get_class() {
            return il2cpp::get_class<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_ListenerSoundZoneTaskData_EmitterSoundZoneTaskData___Array__Class>(type_info(), "Moon.Wwise", "ZoneProcessor`2[TListenerTaskData,TEmitterTaskData]+ListenerZoneTask[ListenerSoundZoneTaskData,EmitterSoundZoneTaskData][]");
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

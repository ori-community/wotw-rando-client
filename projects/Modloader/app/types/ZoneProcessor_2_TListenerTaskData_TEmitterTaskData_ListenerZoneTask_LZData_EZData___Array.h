#pragma once
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTaskData_TEmitterTaskDat_ListenerZoneTas_LZDat_EZDat___Arra__Clas.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array {
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array__Class** type_info() {
            static app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array__Class* get_class() {
            return il2cpp::get_class<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array__Class>(type_info(), "Moon.Wwise", "ZoneProcessor`2[TListenerTaskData,TEmitterTaskData]+ListenerZoneTask[LZData,EZData][]");
        }
        inline app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array* create() {
            return il2cpp::create_object<app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array>(get_class());
        }
    } // namespace ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array
} // namespace app::classes::types

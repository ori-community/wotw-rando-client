#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExampleZoneProcessor.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array.h>
#include <Modloader/app/structs/ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Array.h>
#include <Modloader/app/structs/PositionSyncTask__Array.h>
#include <Modloader/app/structs/SoundListener.h>

namespace app::classes::Moon::Wwise::ExampleZoneProcessor {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ProcessZoneTasks, (app::ExampleZoneProcessor * this_ptr, app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array* listener_zone_tasks, app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_EmitterZoneTask_LZData_EZData___Array* emitter_zone_tasks, app::PositionSyncTask__Array* position_tasks, int32_t valid_position_tasks_size))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetListenerTracking, (app::ExampleZoneProcessor * this_ptr, app::SoundListener* listener, app::ZoneProcessor_2_TListenerTaskData_TEmitterTaskData_ListenerZoneTask_LZData_EZData___Array* listener_tasks, app::PositionSyncTask__Array* position_tasks))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DefragmentStructures, (app::ExampleZoneProcessor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02709C50, void, ctor, (app::ExampleZoneProcessor * this_ptr))
} // namespace app::classes::Moon::Wwise::ExampleZoneProcessor

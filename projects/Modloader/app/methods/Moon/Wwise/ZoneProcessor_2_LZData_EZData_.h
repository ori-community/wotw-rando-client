#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Wwise::ZoneProcessor_2_LZData_EZData_ {
    IL2CPP_REGISTER_METHOD(0x02AF6B80, void, ctor, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719088, ZoneProcessor_2_LZData_EZData___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_ActiveListenerZones, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015B78B0, int32_t, get_MaxListenerZones, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_ActiveEmitterZones, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023153B0, int32_t, get_MaxEmitterZones, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, app::EZData, InitializeEmitterZoneTask, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr, app::EZData zone, app::AudioEmitterZone* audio_emitter_zone))
    IL2CPP_REGISTER_METHOD(0x00417870, app::LZData, InitializeListenerZoneTask, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr, app::LZData data, app::AudioListenerZone* audio_listener_zone))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TearDownListenerZoneTask, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr, app::LZData data, app::AudioListenerZoneReference zone, app::PositionSyncTask__Array* position_tasks, int32_t valid_position_tasks_size))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TearDownEmitterZoneTask, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr, app::EZData data, app::AudioEmitterZoneReference zone, app::PositionSyncTask__Array* position_tasks, int32_t valid_position_tasks_size))
    IL2CPP_REGISTER_METHOD(0x02AF52E0, void, Update, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr, app::PositionSyncTask__Array* position_tasks, int32_t valid_position_tasks_size))
    IL2CPP_REGISTER_METHOD(0x02AF5360, void, ResetFirstUpdateTask, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF6D90, void, ClearInvalidTasks, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF5940, void, ResetListener, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr, app::SoundListener* listener, app::PositionSyncTask__Array* position_tasks))
    IL2CPP_REGISTER_METHOD(0x02AF5980, void, Initialize, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr, app::AkWwiseInitializationSettings* config))
    IL2CPP_REGISTER_METHOD(0x02AF7270, void, RegisterListenerZoneTask, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr, app::AudioListenerZone* zone, int32_t frame_quantization))
    IL2CPP_REGISTER_METHOD(0x02AF74C0, void, RegisterEmitterZoneTask, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr, app::AudioEmitterZone* zone, int32_t frame_quantization))
    IL2CPP_REGISTER_METHOD(0x02AF6460, void, DefragmentStructures, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF64C0, void, DefragmentEmitterZones, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AF6820, void, DefragmentListenerZones, (app::ZoneProcessor_2_LZData_EZData_ * this_ptr))
} // namespace app::classes::Moon::Wwise::ZoneProcessor_2_LZData_EZData_

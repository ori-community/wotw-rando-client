#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ScenariosParticleSystemPlugin {
    IL2CPP_REGISTER_METHOD(0x00934FD0, void, StartTracking, (app::ParticleSystem * particle_system, app::ScenariosParticleSystemPlugin_TrackingID * trackingi_d))
    IL2CPP_REGISTER_METHOD(0x009350F0, void, StopTracking, (app::ParticleSystem * particle_system))
    IL2CPP_REGISTER_METHOD(0x009352F0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::ScenariosParticleSystemPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00935560, void, RecordCycle, (app::ScenariosParticleSystemPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::ScenariosParticleSystemPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E59B0, void, ctor, (app::ScenariosParticleSystemPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00935710, void, cctor, ())
}

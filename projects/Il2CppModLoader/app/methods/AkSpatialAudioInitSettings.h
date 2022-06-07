#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkSpatialAudioInitSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkSpatialAudioInitSettings * this_ptr, void * c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026FAE20, void *, getCPtr, (app::AkSpatialAudioInitSettings * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkSpatialAudioInitSettings * this_ptr, void * c_ptr))
    IL2CPP_REGISTER_METHOD(0x026FAEB0, void, Finalize, (app::AkSpatialAudioInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FAF30, void, Dispose, (app::AkSpatialAudioInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FB140, void, ctor_2, (app::AkSpatialAudioInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FB260, void, set_uPoolID, (app::AkSpatialAudioInitSettings * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x026FB390, int32_t, get_uPoolID, (app::AkSpatialAudioInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FB4B0, void, set_uPoolSize, (app::AkSpatialAudioInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026FB5E0, uint32_t, get_uPoolSize, (app::AkSpatialAudioInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FB700, void, set_uMaxSoundPropagationDepth, (app::AkSpatialAudioInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026FB830, uint32_t, get_uMaxSoundPropagationDepth, (app::AkSpatialAudioInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FB950, void, set_uDiffractionFlags, (app::AkSpatialAudioInitSettings * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x026FBA80, uint32_t, get_uDiffractionFlags, (app::AkSpatialAudioInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FBBA0, void, set_fDiffractionShadowAttenFactor, (app::AkSpatialAudioInitSettings * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026FBCD0, float, get_fDiffractionShadowAttenFactor, (app::AkSpatialAudioInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FBDF0, void, set_fDiffractionShadowDegrees, (app::AkSpatialAudioInitSettings * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026FBF20, float, get_fDiffractionShadowDegrees, (app::AkSpatialAudioInitSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026FC040, void, set_fMovementThreshold, (app::AkSpatialAudioInitSettings * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026FC170, float, get_fMovementThreshold, (app::AkSpatialAudioInitSettings * this_ptr))
}

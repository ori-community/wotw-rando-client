#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkImageSourceParams.h>
#include <Modloader/app/structs/AkVector.h>

namespace app::classes::AkImageSourceParams {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkImageSourceParams * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x026E6390, void*, getCPtr, (app::AkImageSourceParams * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkImageSourceParams * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x026E6420, void, Finalize, (app::AkImageSourceParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E64A0, void, Dispose, (app::AkImageSourceParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E66B0, void, ctor_2, (app::AkImageSourceParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E67D0, void, ctor_3, (app::AkImageSourceParams * this_ptr, app::AkVector* in_source_position, float in_f_distance_scaling_factor, float in_f_level))
    IL2CPP_REGISTER_METHOD(0x026E6940, void, set_sourcePosition, (app::AkImageSourceParams * this_ptr, app::AkVector* value))
    IL2CPP_REGISTER_METHOD(0x026E6A80, app::AkVector*, get_sourcePosition, (app::AkImageSourceParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E6C90, void, set_fDistanceScalingFactor, (app::AkImageSourceParams * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026E6DC0, float, get_fDistanceScalingFactor, (app::AkImageSourceParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E6EE0, void, set_fLevel, (app::AkImageSourceParams * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026E7010, float, get_fLevel, (app::AkImageSourceParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E7130, void, set_fDiffraction, (app::AkImageSourceParams * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x026E7260, float, get_fDiffraction, (app::AkImageSourceParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E7380, void, set_uDiffractionEmitterSide, (app::AkImageSourceParams * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026E74B0, uint8_t, get_uDiffractionEmitterSide, (app::AkImageSourceParams * this_ptr))
    IL2CPP_REGISTER_METHOD(0x026E75D0, void, set_uDiffractionListenerSide, (app::AkImageSourceParams * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x026E7700, uint8_t, get_uDiffractionListenerSide, (app::AkImageSourceParams * this_ptr))
} // namespace app::classes::AkImageSourceParams

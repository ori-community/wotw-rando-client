#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkEmitterSettings.h>

namespace app::classes::AkEmitterSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, app::AkEmitterSettings* this_ptr, void* c_ptr, bool c_memory_own)
    IL2CPP_REGISTER_METHOD(0x026E2350, void*, getCPtr, app::AkEmitterSettings* obj)
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, app::AkEmitterSettings* this_ptr, void* c_ptr)
    IL2CPP_REGISTER_METHOD(0x026E23E0, void, Finalize, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E2460, void, Dispose, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E2670, void, ctor_2, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E2790, void, set_reflectAuxBusID, app::AkEmitterSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026E28C0, uint32_t, get_reflectAuxBusID, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E29E0, void, set_reflectionMaxPathLength, app::AkEmitterSettings* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x026E2B10, float, get_reflectionMaxPathLength, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E2C30, void, set_reflectionsAuxBusGain, app::AkEmitterSettings* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x026E2D60, float, get_reflectionsAuxBusGain, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E2E80, void, set_reflectionsOrder, app::AkEmitterSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026E2FB0, uint32_t, get_reflectionsOrder, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E30D0, void, set_reflectorFilterMask, app::AkEmitterSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026E3200, uint32_t, get_reflectorFilterMask, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E3320, void, set_roomReverbAuxBusGain, app::AkEmitterSettings* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x026E3450, float, get_roomReverbAuxBusGain, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E3570, void, set_diffractionMaxEdges, app::AkEmitterSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026E36A0, uint32_t, get_diffractionMaxEdges, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E37C0, void, set_diffractionMaxPaths, app::AkEmitterSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026E38F0, uint32_t, get_diffractionMaxPaths, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E3A10, void, set_diffractionMaxPathLength, app::AkEmitterSettings* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x026E3B40, float, get_diffractionMaxPathLength, app::AkEmitterSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026E3C60, void, set_useImageSources, app::AkEmitterSettings* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x026E3D90, uint8_t, get_useImageSources, app::AkEmitterSettings* this_ptr)
} // namespace app::classes::AkEmitterSettings

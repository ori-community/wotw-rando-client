#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkDeviceSettings.h>
#include <Modloader/app/structs/AkThreadProperties.h>

namespace app::classes::AkDeviceSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, app::AkDeviceSettings* this_ptr, void* c_ptr, bool c_memory_own)
    IL2CPP_REGISTER_METHOD(0x026DD420, void*, getCPtr, app::AkDeviceSettings* obj)
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, app::AkDeviceSettings* this_ptr, void* c_ptr)
    IL2CPP_REGISTER_METHOD(0x026DD4B0, void, Finalize, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DD530, void, Dispose, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DD740, void, set_pIOMemory, app::AkDeviceSettings* this_ptr, void* value)
    IL2CPP_REGISTER_METHOD(0x026DD870, void*, get_pIOMemory, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DD990, void, set_uIOMemorySize, app::AkDeviceSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026DDAC0, uint32_t, get_uIOMemorySize, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DDBE0, void, set_uIOMemoryAlignment, app::AkDeviceSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026DDD10, uint32_t, get_uIOMemoryAlignment, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DDE30, void, set_ePoolAttributes, app::AkDeviceSettings* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x026DDF60, int32_t, get_ePoolAttributes, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DE080, void, set_uGranularity, app::AkDeviceSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026DE1B0, uint32_t, get_uGranularity, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DE2D0, void, set_uSchedulerTypeFlags, app::AkDeviceSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026DE400, uint32_t, get_uSchedulerTypeFlags, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DE520, void, set_threadProperties, app::AkDeviceSettings* this_ptr, app::AkThreadProperties* value)
    IL2CPP_REGISTER_METHOD(0x026DE660, app::AkThreadProperties*, get_threadProperties, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DE870, void, set_fTargetAutoStmBufferLength, app::AkDeviceSettings* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x026DE9A0, float, get_fTargetAutoStmBufferLength, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DEAC0, void, set_uMaxConcurrentIO, app::AkDeviceSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026DEBF0, uint32_t, get_uMaxConcurrentIO, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DED10, void, set_bUseStreamCache, app::AkDeviceSettings* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x026DEE40, bool, get_bUseStreamCache, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DEF70, void, set_uMaxCachePinnedBytes, app::AkDeviceSettings* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x026DF0A0, uint32_t, get_uMaxCachePinnedBytes, app::AkDeviceSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026DF1C0, void, ctor_2, app::AkDeviceSettings* this_ptr)
} // namespace app::classes::AkDeviceSettings

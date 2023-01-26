#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkUnityPlatformSpecificSettings.h>

namespace app::classes::AkUnityPlatformSpecificSettings {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkUnityPlatformSpecificSettings * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x02700480, void*, getCPtr, (app::AkUnityPlatformSpecificSettings * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkUnityPlatformSpecificSettings * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x02700510, void, Finalize, (app::AkUnityPlatformSpecificSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02700590, void, Dispose, (app::AkUnityPlatformSpecificSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027007A0, void, ctor_2, (app::AkUnityPlatformSpecificSettings * this_ptr))
} // namespace app::classes::AkUnityPlatformSpecificSettings

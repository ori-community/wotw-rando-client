#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BootConfigData.h>

namespace app::classes::UnityEngine::BootConfigData {
    IL2CPP_REGISTER_METHOD(0x0241F730, void, ctor, (app::BootConfigData * this_ptr, void* native_handle))
    IL2CPP_REGISTER_METHODINFO(0x047403B8, BootConfigData__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0241F7F0, app::BootConfigData*, WrapBootConfigData, (void* native_handle))
} // namespace app::classes::UnityEngine::BootConfigData

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncGPUReadbackRequest__Boxed.h>
#include <Modloader/app/structs/Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_.h>
#include <Modloader/app/structs/AsyncGPUReadbackRequest.h>
#include <Modloader/app/structs/NativeArray_1_System_Byte_.h>

namespace app::classes::UnityEngine::Rendering::AsyncGPUReadbackRequest {
    IL2CPP_REGISTER_METHOD(0x00218250, bool, get_done, (app::AsyncGPUReadbackRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002182B0, bool, get_hasError, (app::AsyncGPUReadbackRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00218310, int32_t, get_layerCount, (app::AsyncGPUReadbackRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00218370, int32_t, get_layerDataSize, (app::AsyncGPUReadbackRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00218250, bool, IsDone, (app::AsyncGPUReadbackRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002182B0, bool, HasError, (app::AsyncGPUReadbackRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00218310, int32_t, GetLayerCount, (app::AsyncGPUReadbackRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00218370, int32_t, GetLayerDataSize, (app::AsyncGPUReadbackRequest__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002183D0, void, SetScriptingCallback, (app::AsyncGPUReadbackRequest__Boxed * this_ptr, app::Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_* callback))
    IL2CPP_REGISTER_METHOD(0x002183E0, void*, GetDataRaw, (app::AsyncGPUReadbackRequest__Boxed * this_ptr, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x02973BE0, bool, IsDone_Injected, (app::AsyncGPUReadbackRequest * _unity_self))
    IL2CPP_REGISTER_METHOD(0x02973C30, bool, HasError_Injected, (app::AsyncGPUReadbackRequest * _unity_self))
    IL2CPP_REGISTER_METHOD(0x02973A80, int32_t, GetLayerCount_Injected, (app::AsyncGPUReadbackRequest * _unity_self))
    IL2CPP_REGISTER_METHOD(0x02973AD0, int32_t, GetLayerDataSize_Injected, (app::AsyncGPUReadbackRequest * _unity_self))
    IL2CPP_REGISTER_METHOD(0x02973B20, void, SetScriptingCallback_Injected, (app::AsyncGPUReadbackRequest * _unity_self, app::Action_1_UnityEngine_Rendering_AsyncGPUReadbackRequest_* callback))
    IL2CPP_REGISTER_METHOD(0x02973B80, void*, GetDataRaw_Injected, (app::AsyncGPUReadbackRequest * _unity_self, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x002406C0, app::NativeArray_1_System_Byte_, GetData, (app::AsyncGPUReadbackRequest__Boxed * this_ptr, int32_t layer))
} // namespace app::classes::UnityEngine::Rendering::AsyncGPUReadbackRequest

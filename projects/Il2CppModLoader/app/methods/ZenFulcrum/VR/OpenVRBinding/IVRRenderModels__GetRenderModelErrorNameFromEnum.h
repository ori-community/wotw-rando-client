#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelErrorNameFromEnum {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_GetRenderModelErrorNameFromEnum * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F52080, void*, Invoke, (app::IVRRenderModels_GetRenderModelErrorNameFromEnum * this_ptr, app::EVRRenderModelError__Enum error))
    IL2CPP_REGISTER_METHOD(0x02CE3C90, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_GetRenderModelErrorNameFromEnum * this_ptr, app::EVRRenderModelError__Enum error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, void*, EndInvoke, (app::IVRRenderModels_GetRenderModelErrorNameFromEnum * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelErrorNameFromEnum

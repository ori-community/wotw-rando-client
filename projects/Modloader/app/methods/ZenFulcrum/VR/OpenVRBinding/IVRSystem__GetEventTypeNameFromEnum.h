#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRSystem_GetEventTypeNameFromEnum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVREventType__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetEventTypeNameFromEnum {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetEventTypeNameFromEnum * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F52080, void*, Invoke, (app::IVRSystem_GetEventTypeNameFromEnum * this_ptr, app::EVREventType__Enum e_type))
    IL2CPP_REGISTER_METHOD(0x02CEB5B0, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_GetEventTypeNameFromEnum * this_ptr, app::EVREventType__Enum e_type, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, void*, EndInvoke, (app::IVRSystem_GetEventTypeNameFromEnum * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetEventTypeNameFromEnum

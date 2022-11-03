#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B8B6D0, int32_t, Invoke, (app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_ * this_ptr, app::ServerPhysicalSystemManager_RigidbodyStateData x, app::ServerPhysicalSystemManager_RigidbodyStateData y))
    IL2CPP_REGISTER_METHOD(0x02C7BCE0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_ * this_ptr, app::ServerPhysicalSystemManager_RigidbodyStateData x, app::ServerPhysicalSystemManager_RigidbodyStateData y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_ServerPhysicalSystemManager_RigidbodyStateData_

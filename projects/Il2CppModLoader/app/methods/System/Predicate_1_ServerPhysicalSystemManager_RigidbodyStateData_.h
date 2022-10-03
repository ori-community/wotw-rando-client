#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Predicate_1_ServerPhysicalSystemManager_RigidbodyStateData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_ServerPhysicalSystemManager_RigidbodyStateData_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x028911E0, bool, Invoke, (app::Predicate_1_ServerPhysicalSystemManager_RigidbodyStateData_ * this_ptr, app::ServerPhysicalSystemManager_RigidbodyStateData obj))
    IL2CPP_REGISTER_METHOD(0x02A4FF20, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_ServerPhysicalSystemManager_RigidbodyStateData_ * this_ptr, app::ServerPhysicalSystemManager_RigidbodyStateData obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_ServerPhysicalSystemManager_RigidbodyStateData_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_ServerPhysicalSystemManager_RigidbodyStateData_

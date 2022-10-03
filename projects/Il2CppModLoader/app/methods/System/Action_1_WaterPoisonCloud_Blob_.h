#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Action_1_WaterPoisonCloud_Blob_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_WaterPoisonCloud_Blob_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D24D50, void, Invoke, (app::Action_1_WaterPoisonCloud_Blob_ * this_ptr, app::WaterPoisonCloud_Blob obj))
    IL2CPP_REGISTER_METHOD(0x02C0DB70, app::IAsyncResult*, BeginInvoke, (app::Action_1_WaterPoisonCloud_Blob_ * this_ptr, app::WaterPoisonCloud_Blob obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_WaterPoisonCloud_Blob_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_WaterPoisonCloud_Blob_

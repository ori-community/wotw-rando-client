#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KwolokBossLocomotion_ModifyBodyHeightDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::KwolokBossLocomotion_ModifyBodyHeightDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::KwolokBossLocomotion_ModifyBodyHeightDelegate * this_ptr, float* a))
    IL2CPP_REGISTER_METHOD(0x012E79B0, app::IAsyncResult*, BeginInvoke, (app::KwolokBossLocomotion_ModifyBodyHeightDelegate * this_ptr, float* a, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::KwolokBossLocomotion_ModifyBodyHeightDelegate * this_ptr, float* a, app::IAsyncResult* result))
} // namespace app::classes::KwolokBossLocomotion_ModifyBodyHeightDelegate

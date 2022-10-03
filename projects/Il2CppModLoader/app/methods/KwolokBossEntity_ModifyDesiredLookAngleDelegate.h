#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KwolokBossEntity_ModifyDesiredLookAngleDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::KwolokBossEntity_ModifyDesiredLookAngleDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::KwolokBossEntity_ModifyDesiredLookAngleDelegate * this_ptr, float* a))
    IL2CPP_REGISTER_METHOD(0x012DE4E0, app::IAsyncResult*, BeginInvoke, (app::KwolokBossEntity_ModifyDesiredLookAngleDelegate * this_ptr, float* a, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::KwolokBossEntity_ModifyDesiredLookAngleDelegate * this_ptr, float* a, app::IAsyncResult* result))
} // namespace app::classes::KwolokBossEntity_ModifyDesiredLookAngleDelegate

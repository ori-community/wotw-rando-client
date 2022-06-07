#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::KwolokBossEntity_ModifyCameraTargetsDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::KwolokBossEntity_ModifyCameraTargetsDelegate * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::KwolokBossEntity_ModifyCameraTargetsDelegate * this_ptr, app::List_1_Moon_CameraTargetSettings_ * targets))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::KwolokBossEntity_ModifyCameraTargetsDelegate * this_ptr, app::List_1_Moon_CameraTargetSettings_ * targets, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::KwolokBossEntity_ModifyCameraTargetsDelegate * this_ptr, app::IAsyncResult * result))
}

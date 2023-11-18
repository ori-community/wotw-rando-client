#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KwolokBossEntity_ModifyDesiredLegsIKDelegate.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::KwolokBossEntity_ModifyDesiredLegsIKDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::KwolokBossEntity_ModifyDesiredLegsIKDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x012DDED0, void, Invoke, (app::KwolokBossEntity_ModifyDesiredLegsIKDelegate * this_ptr, float* fl, float* fr, float* bl, float* br))
    IL2CPP_REGISTER_METHOD(0x012DE2E0, app::IAsyncResult*, BeginInvoke, (app::KwolokBossEntity_ModifyDesiredLegsIKDelegate * this_ptr, float* fl, float* fr, float* bl, float* br, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x012DE400, void, EndInvoke, (app::KwolokBossEntity_ModifyDesiredLegsIKDelegate * this_ptr, float* fl, float* fr, float* bl, float* br, app::IAsyncResult* result))
} // namespace app::classes::KwolokBossEntity_ModifyDesiredLegsIKDelegate

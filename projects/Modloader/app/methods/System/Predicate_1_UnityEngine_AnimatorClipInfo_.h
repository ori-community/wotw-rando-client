#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_UnityEngine_AnimatorClipInfo_.h>
#include <Modloader/app/structs/AnimatorClipInfo.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Predicate_1_UnityEngine_AnimatorClipInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0288C090, bool, Invoke, (app::Predicate_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::AnimatorClipInfo obj))
    IL2CPP_REGISTER_METHOD(0x02A53A00, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::AnimatorClipInfo obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_UnityEngine_AnimatorClipInfo_

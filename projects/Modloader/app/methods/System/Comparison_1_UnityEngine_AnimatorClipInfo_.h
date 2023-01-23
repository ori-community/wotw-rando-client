#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Comparison_1_UnityEngine_AnimatorClipInfo_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/AnimatorClipInfo.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Comparison_1_UnityEngine_AnimatorClipInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B85030, int32_t, Invoke, (app::Comparison_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::AnimatorClipInfo x, app::AnimatorClipInfo y))
    IL2CPP_REGISTER_METHOD(0x02C80F90, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::AnimatorClipInfo x, app::AnimatorClipInfo y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_UnityEngine_AnimatorClipInfo_

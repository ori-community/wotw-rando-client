#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_UnityEngine_AnimatorClipInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01D253C0, void, Invoke, (app::Action_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::AnimatorClipInfo obj))
    IL2CPP_REGISTER_METHOD(0x02C08FE0, app::IAsyncResult *, BeginInvoke, (app::Action_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::AnimatorClipInfo obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::IAsyncResult * result))
}

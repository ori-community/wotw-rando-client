#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke, (app::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * this_ptr, app::PlayerLoopSystemInternal obj))
    IL2CPP_REGISTER_METHOD(0x02C09B30, app::IAsyncResult*, BeginInvoke, (app::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * this_ptr, app::PlayerLoopSystemInternal obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_

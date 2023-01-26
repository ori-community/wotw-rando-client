#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayerLoopSystem.h>

namespace app::classes::System::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke, (app::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_ * this_ptr, app::PlayerLoopSystem obj))
    IL2CPP_REGISTER_METHOD(0x02C09A60, app::IAsyncResult*, BeginInvoke, (app::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_ * this_ptr, app::PlayerLoopSystem obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystem_

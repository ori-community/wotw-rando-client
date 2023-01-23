#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlayFabError.h>

namespace app::classes::System::Action_1_PlayFab_PlayFabError_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_PlayFab_PlayFabError_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04787518, Action_1_PlayFab_PlayFabError___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Action_1_PlayFab_PlayFabError_ * this_ptr, app::PlayFabError* obj))
    IL2CPP_REGISTER_METHODINFO(0x04713DE8, Action_1_PlayFab_PlayFabError__Invoke__MethodInfo)
} // namespace app::classes::System::Action_1_PlayFab_PlayFabError_

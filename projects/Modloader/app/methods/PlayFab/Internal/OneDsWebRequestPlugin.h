#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OneDsWebRequestPlugin.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/Action_1_Object_.h>

namespace app::classes::PlayFab::Internal::OneDsWebRequestPlugin {
    IL2CPP_REGISTER_METHOD(0x018377C0, void, DoPost, (app::OneDsWebRequestPlugin * this_ptr, app::Object* request, app::Dictionary_2_System_String_System_String_* extra_headers, app::Action_1_Object_* callback))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OneDsWebRequestPlugin * this_ptr))
} // namespace app::classes::PlayFab::Internal::OneDsWebRequestPlugin

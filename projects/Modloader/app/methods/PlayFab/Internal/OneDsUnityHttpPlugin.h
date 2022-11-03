#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayFab::Internal::OneDsUnityHttpPlugin {
    IL2CPP_REGISTER_METHOD(0x01836120, void, DoPost, (app::OneDsUnityHttpPlugin * this_ptr, app::Object* request, app::Dictionary_2_System_String_System_String_* extra_headers, app::Action_1_Object_* callback))
    IL2CPP_REGISTER_METHOD(0x018363F0, app::IEnumerator*, Post, (app::OneDsUnityHttpPlugin * this_ptr, app::Object* request, app::Dictionary_2_System_String_System_String_* extra_headers, app::Action_1_Object_* callback))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OneDsUnityHttpPlugin * this_ptr))
} // namespace app::classes::PlayFab::Internal::OneDsUnityHttpPlugin

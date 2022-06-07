#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::Internal::OneDsWebRequestPlugin {
    IL2CPP_REGISTER_METHOD(0x018377C0, void, DoPost, (app::OneDsWebRequestPlugin * this_ptr, app::Object * request, app::Dictionary_2_System_String_System_String_ * extra_headers, app::Action_1_Object_ * callback))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::OneDsWebRequestPlugin * this_ptr))
}

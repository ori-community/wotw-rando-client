#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayFab::Internal::OneDsUtility {
    IL2CPP_REGISTER_METHOD(0x01836FD0, void, ParseResponse, (int64_t http_code, app::Func_1_String_* get_text, app::String* error_string, app::Action_1_Object_* callback))
}

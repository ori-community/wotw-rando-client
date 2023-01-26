#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UriParser_BuiltInUriParser.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UriSyntaxFlags__Enum.h>

namespace app::classes::System::UriParser_BuiltInUriParser {
    IL2CPP_REGISTER_METHOD(0x031A0660, void, ctor, (app::UriParser_BuiltInUriParser * this_ptr, app::String* lwr_case_scheme, int32_t default_port, app::UriSyntaxFlags__Enum syntax_flags))
}

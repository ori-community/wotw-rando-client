#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::Headers::Parser_EmailAddress {
    IL2CPP_REGISTER_METHOD(0x02D124D0, bool, TryParse, app::String* input, app::String** result)
}

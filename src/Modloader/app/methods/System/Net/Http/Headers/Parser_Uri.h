#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::System::Net::Http::Headers::Parser_Uri {
    IL2CPP_REGISTER_METHOD(0x02D131B0, bool, TryParse, app::String* input, app::Uri** result)
}

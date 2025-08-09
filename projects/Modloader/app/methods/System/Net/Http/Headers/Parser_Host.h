#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::Headers::Parser_Host {
    IL2CPP_REGISTER_METHOD(0x02D12710, bool, TryParse, app::String* input, app::String** result)
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::Headers::Parser_Long {
    IL2CPP_REGISTER_METHOD(0x02D128D0, bool, TryParse, (app::String * input, int64_t* result))
}

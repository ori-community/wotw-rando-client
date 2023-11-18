#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::System::Net::Http::Headers::Parser_TimeSpanSeconds {
    IL2CPP_REGISTER_METHOD(0x02D12E20, bool, TryParse, (app::String * input, app::TimeSpan* result))
}

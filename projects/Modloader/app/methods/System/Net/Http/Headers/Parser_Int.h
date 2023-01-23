#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::Headers::Parser_Int {
    IL2CPP_REGISTER_METHOD(0x02D127F0, bool, TryParse, (app::String * input, int32_t* result))
    IL2CPP_REGISTER_METHODINFO(0x04784F90, Parser_Int_TryParse__MethodInfo)
} // namespace app::classes::System::Net::Http::Headers::Parser_Int

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Http::Headers::Parser_MD5 {
    IL2CPP_REGISTER_METHOD(0x02D129B0, bool, TryParse, app::String* input, app::Byte__Array** result)
    IL2CPP_REGISTER_METHOD(0x02D12A80, void, cctor, )
} // namespace app::classes::System::Net::Http::Headers::Parser_MD5

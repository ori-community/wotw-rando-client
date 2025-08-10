#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::PathInternal {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsPartiallyQualified, app::String* path)
    IL2CPP_REGISTER_METHOD(0x0237AF80, bool, HasIllegalCharacters, app::String* path, bool check_additional)
} // namespace app::classes::System::IO::PathInternal

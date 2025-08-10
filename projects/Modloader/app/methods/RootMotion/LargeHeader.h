#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LargeHeader.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::RootMotion::LargeHeader {
    IL2CPP_REGISTER_METHOD(0x02A2BAD0, void, ctor_1, app::LargeHeader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02A2BB70, void, ctor_2, app::LargeHeader* this_ptr, app::String* name, app::String* color)
} // namespace app::classes::RootMotion::LargeHeader

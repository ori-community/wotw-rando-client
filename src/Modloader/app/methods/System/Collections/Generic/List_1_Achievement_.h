#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Achievement_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_Achievement_.h>

namespace app::classes::System::Collections::Generic::List_1_Achievement_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Achievement_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E9050, app::ReadOnlyCollection_1_Achievement_*, AsReadOnly, app::List_1_Achievement_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Achievement_

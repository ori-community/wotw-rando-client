#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SqlStreamChars.h>

namespace app::classes::System::Data::SqlTypes::SqlStreamChars {
    IL2CPP_REGISTER_METHOD(0x022B9F10, void, IDisposable_Dispose, app::SqlStreamChars* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::SqlStreamChars* this_ptr, bool disposing)
} // namespace app::classes::System::Data::SqlTypes::SqlStreamChars

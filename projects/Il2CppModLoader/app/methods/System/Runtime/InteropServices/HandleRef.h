#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Runtime::InteropServices::HandleRef {
    IL2CPP_REGISTER_METHOD(0x00110270, void, ctor, (app::HandleRef__Boxed * this_ptr, app::Object * wrapper, void * handle))
    IL2CPP_REGISTER_METHOD(0x00107C10, void *, get_Handle, (app::HandleRef__Boxed * this_ptr))
}

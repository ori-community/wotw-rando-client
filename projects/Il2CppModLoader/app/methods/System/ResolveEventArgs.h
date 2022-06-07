#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ResolveEventArgs {
    IL2CPP_REGISTER_METHOD(0x026990C0, void, ctor_1, (app::ResolveEventArgs * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x02699170, void, ctor_2, (app::ResolveEventArgs * this_ptr, app::String * name, app::Assembly * requesting_assembly))
}

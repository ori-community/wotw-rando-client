#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SuppressUnmanagedCodeSecurityAttribute.h>

namespace app::classes::System::Security::SuppressUnmanagedCodeSecurityAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SuppressUnmanagedCodeSecurityAttribute * this_ptr))
}

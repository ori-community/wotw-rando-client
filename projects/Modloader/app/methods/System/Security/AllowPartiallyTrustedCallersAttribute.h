#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AllowPartiallyTrustedCallersAttribute.h>

namespace app::classes::System::Security::AllowPartiallyTrustedCallersAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AllowPartiallyTrustedCallersAttribute * this_ptr))
}

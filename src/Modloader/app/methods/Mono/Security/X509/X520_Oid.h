#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/X520_Oid.h>

namespace app::classes::Mono::Security::X509::X520_Oid {
    IL2CPP_REGISTER_METHOD(0x0316C760, void, ctor, app::X520_Oid* this_ptr, app::String* oid)
}

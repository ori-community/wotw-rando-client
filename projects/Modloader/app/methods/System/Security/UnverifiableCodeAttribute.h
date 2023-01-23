#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnverifiableCodeAttribute.h>

namespace app::classes::System::Security::UnverifiableCodeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UnverifiableCodeAttribute * this_ptr))
}

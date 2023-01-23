#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObsoleteAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ObsoleteAttribute {
    IL2CPP_REGISTER_METHOD(0x0227B9F0, void, ctor_1, (app::ObsoleteAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01248670, void, ctor_2, (app::ObsoleteAttribute * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor_3, (app::ObsoleteAttribute * this_ptr, app::String* message, bool error))
} // namespace app::classes::System::ObsoleteAttribute

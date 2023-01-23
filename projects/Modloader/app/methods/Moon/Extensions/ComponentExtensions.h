#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::Extensions::ComponentExtensions {
    IL2CPP_REGISTER_METHOD(0x01544350, app::MoonReference_1_System_Object_*, AsMoonReference, (app::Object * component))
}

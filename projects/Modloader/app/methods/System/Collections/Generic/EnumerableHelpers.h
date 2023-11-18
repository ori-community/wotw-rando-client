#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>

namespace app::classes::System::Collections::Generic::EnumerableHelpers {
    IL2CPP_REGISTER_METHOD(0x01586B70, app::Object__Array*, ToArray, (app::IEnumerable_1_System_Object_ * source))
}

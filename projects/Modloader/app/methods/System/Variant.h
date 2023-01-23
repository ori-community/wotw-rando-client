#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Variant__Boxed.h>

namespace app::classes::System::Variant {
    IL2CPP_REGISTER_METHOD(0x00249F30, void, Clear, (app::Variant__Boxed * this_ptr))
}

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Buffer_1_System_Byte___Boxed.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IEnumerable_1_System_Byte_.h>

namespace app::classes::System::Linq::Buffer_1_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x00218BA0, void, ctor, (app::Buffer_1_System_Byte___Boxed * this_ptr, app::IEnumerable_1_System_Byte_* source))
    IL2CPP_REGISTER_METHOD(0x00218A90, app::Byte__Array*, ToArray, (app::Buffer_1_System_Byte___Boxed * this_ptr))
} // namespace app::classes::System::Linq::Buffer_1_System_Byte_

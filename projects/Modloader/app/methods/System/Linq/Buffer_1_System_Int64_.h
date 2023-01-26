#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Buffer_1_System_Int64___Boxed.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int64_.h>
#include <Modloader/app/structs/Int64__Array.h>

namespace app::classes::System::Linq::Buffer_1_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x00218C20, void, ctor, (app::Buffer_1_System_Int64___Boxed * this_ptr, app::IEnumerable_1_System_Int64_* source))
    IL2CPP_REGISTER_METHOD(0x00218A90, app::Int64__Array*, ToArray, (app::Buffer_1_System_Int64___Boxed * this_ptr))
} // namespace app::classes::System::Linq::Buffer_1_System_Int64_

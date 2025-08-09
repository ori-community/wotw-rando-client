#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Buffer_1_System_Int32___Boxed.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32_.h>
#include <Modloader/app/structs/Int32__Array.h>

namespace app::classes::System::Linq::Buffer_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00218C00, void, ctor, app::Buffer_1_System_Int32___Boxed* this_ptr, app::IEnumerable_1_System_Int32_* source)
    IL2CPP_REGISTER_METHOD(0x00218A90, app::Int32__Array*, ToArray, app::Buffer_1_System_Int32___Boxed* this_ptr)
} // namespace app::classes::System::Linq::Buffer_1_System_Int32_

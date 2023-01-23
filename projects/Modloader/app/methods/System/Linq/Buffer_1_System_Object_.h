#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Buffer_1_System_Object___Boxed.h>
#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Linq::Buffer_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00218C30, void, ctor, (app::Buffer_1_System_Object___Boxed * this_ptr, app::IEnumerable_1_System_Object_* source))
    IL2CPP_REGISTER_METHODINFO(0x0473E5E8, Buffer_1_System_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00218A90, app::Object__Array*, ToArray, (app::Buffer_1_System_Object___Boxed * this_ptr))
} // namespace app::classes::System::Linq::Buffer_1_System_Object_

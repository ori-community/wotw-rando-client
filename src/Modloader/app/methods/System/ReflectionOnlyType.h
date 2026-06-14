#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReflectionOnlyType.h>
#include <Modloader/app/structs/RuntimeTypeHandle.h>

namespace app::classes::System::ReflectionOnlyType {
    IL2CPP_REGISTER_METHOD(0x02698FB0, void, ctor, app::ReflectionOnlyType* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02699050, app::RuntimeTypeHandle, get_TypeHandle, app::ReflectionOnlyType* this_ptr)
} // namespace app::classes::System::ReflectionOnlyType

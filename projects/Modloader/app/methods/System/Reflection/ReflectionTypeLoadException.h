#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception__Array.h>
#include <Modloader/app/structs/ReflectionTypeLoadException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Reflection::ReflectionTypeLoadException {
    IL2CPP_REGISTER_METHOD(0x02695FF0, void, ctor_1, app::ReflectionTypeLoadException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02696080, void, ctor_2, app::ReflectionTypeLoadException* this_ptr, app::Type__Array* classes, app::Exception__Array* exceptions)
    IL2CPP_REGISTER_METHOD(0x026960D0, void, ctor_3, app::ReflectionTypeLoadException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Type__Array*, get_Types, app::ReflectionTypeLoadException* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02696270,
        void,
        GetObjectData,
        app::ReflectionTypeLoadException* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
} // namespace app::classes::System::Reflection::ReflectionTypeLoadException

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeConstructorInfo.h>
#include <Modloader/app/structs/RuntimeModule.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::RuntimeConstructorInfo {
    IL2CPP_REGISTER_METHOD(0x02696B10, app::Module*, get_Module, (app::RuntimeConstructorInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02696B10, app::RuntimeModule*, GetRuntimeModule, (app::RuntimeConstructorInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BindingFlags__Enum, get_BindingFlags, (app::RuntimeConstructorInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02696C00, app::RuntimeType*, get_ReflectedTypeInternal, (app::RuntimeConstructorInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02696CE0, void, GetObjectData, (app::RuntimeConstructorInfo * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x02696EE0, app::String*, SerializationToString, (app::RuntimeConstructorInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02696F00, void, SerializationInvoke, (app::RuntimeConstructorInfo * this_ptr, app::Object* target, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0268FE90, void, ctor, (app::RuntimeConstructorInfo * this_ptr))
} // namespace app::classes::System::Reflection::RuntimeConstructorInfo

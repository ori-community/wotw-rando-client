#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BindingFlags__Enum.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RuntimeMethodInfo.h>
#include <Modloader/app/structs/RuntimeModule.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::RuntimeMethodInfo {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BindingFlags__Enum, get_BindingFlags, app::RuntimeMethodInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02697900, app::Module*, get_Module, app::RuntimeMethodInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02697A30, app::RuntimeType*, get_ReflectedTypeInternal, app::RuntimeMethodInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02697B10, app::String*, FormatNameAndSig, app::RuntimeMethodInfo* this_ptr, bool serialization)
    IL2CPP_REGISTER_METHOD(0x02697D60, app::Delegate*, CreateDelegate_1, app::RuntimeMethodInfo* this_ptr, app::Type* delegate_type)
    IL2CPP_REGISTER_METHOD(0x01AD43A0, app::Delegate*, CreateDelegate_2, app::RuntimeMethodInfo* this_ptr, app::Type* delegate_type, app::Object* target)
    IL2CPP_REGISTER_METHOD(0x02697D90, app::String*, ToString, app::RuntimeMethodInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02697900, app::RuntimeModule*, GetRuntimeModule, app::RuntimeMethodInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02697E70, void, GetObjectData, app::RuntimeMethodInfo* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x026980C0, app::String*, SerializationToString, app::RuntimeMethodInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RuntimeMethodInfo* this_ptr)
} // namespace app::classes::System::Reflection::RuntimeMethodInfo

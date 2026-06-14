#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Assembly.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/MonoModule.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/RuntimeAssembly.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Reflection::MonoModule {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Assembly*, get_Assembly, app::MonoModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_ScopeName, app::MonoModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02692540, app::Guid, get_ModuleVersionId, app::MonoModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_FullyQualifiedName, app::MonoModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, IsResource, app::MonoModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02692570, app::Object__Array*, GetCustomAttributes_1, app::MonoModule* this_ptr, bool inherit)
    IL2CPP_REGISTER_METHOD(0x02692620, app::Object__Array*, GetCustomAttributes_2, app::MonoModule* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x026926E0, bool, IsDefined, app::MonoModule* this_ptr, app::Type* attribute_type, bool inherit)
    IL2CPP_REGISTER_METHOD(0x026927A0, void, GetObjectData, app::MonoModule* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x02692950, app::RuntimeAssembly*, GetRuntimeAssembly, app::MonoModule* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02692A20, void, ctor, app::MonoModule* this_ptr)
} // namespace app::classes::System::Reflection::MonoModule

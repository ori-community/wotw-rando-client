#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ActivatedServiceTypeEntry.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Runtime::Remoting::ActivatedServiceTypeEntry {
    IL2CPP_REGISTER_METHOD(0x01A97700, void, ctor, (app::ActivatedServiceTypeEntry * this_ptr, app::String* type_name, app::String* assembly_name))
    IL2CPP_REGISTER_METHODINFO(0x04747098, ActivatedServiceTypeEntry__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Type*, get_ObjectType, (app::ActivatedServiceTypeEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A97850, app::String*, ToString, (app::ActivatedServiceTypeEntry * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::ActivatedServiceTypeEntry

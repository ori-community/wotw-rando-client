#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::WellKnownServiceTypeEntry {
    IL2CPP_REGISTER_METHOD(0x01D87900, void, ctor, (app::WellKnownServiceTypeEntry * this_ptr, app::String* type_name, app::String* assembly_name, app::String* object_uri, app::WellKnownObjectMode__Enum mode))
    IL2CPP_REGISTER_METHODINFO(0x04727410, WellKnownServiceTypeEntry__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00654950, app::WellKnownObjectMode__Enum, get_Mode, (app::WellKnownServiceTypeEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Type*, get_ObjectType, (app::WellKnownServiceTypeEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_ObjectUri, (app::WellKnownServiceTypeEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D87A60, app::String*, ToString, (app::WellKnownServiceTypeEntry * this_ptr))
} // namespace app::classes::System::Runtime::Remoting::WellKnownServiceTypeEntry

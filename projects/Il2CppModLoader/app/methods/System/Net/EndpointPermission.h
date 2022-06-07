#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::EndpointPermission {
    IL2CPP_REGISTER_METHOD(0x01D25D60, void, ctor_1, (app::EndpointPermission * this_ptr, app::String * hostname, int32_t port, app::TransportType__Enum transport))
    IL2CPP_REGISTER_METHODINFO(0x047498B0, EndpointPermission__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Hostname, (app::EndpointPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Port, (app::EndpointPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, app::TransportType__Enum, get_Transport, (app::EndpointPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D25E50, bool, Equals, (app::EndpointPermission * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01D25F50, int32_t, GetHashCode, (app::EndpointPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D25F90, app::String *, ToString, (app::EndpointPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D26210, bool, IsSubsetOf_1, (app::EndpointPermission * this_ptr, app::EndpointPermission * perm))
    IL2CPP_REGISTER_METHOD(0x01D263A0, bool, IsSubsetOf_2, (app::EndpointPermission * this_ptr, app::String * addr1, app::String * addr2))
    IL2CPP_REGISTER_METHOD(0x01D26570, app::EndpointPermission *, Intersect_1, (app::EndpointPermission * this_ptr, app::EndpointPermission * perm))
    IL2CPP_REGISTER_METHOD(0x01D26750, app::String *, IntersectHostname, (app::EndpointPermission * this_ptr, app::EndpointPermission * perm))
    IL2CPP_REGISTER_METHOD(0x01D26A00, app::String *, Intersect_2, (app::EndpointPermission * this_ptr, app::String * addr1, app::String * addr2))
    IL2CPP_REGISTER_METHOD(0x01D26E80, int32_t, ToNumber, (app::EndpointPermission * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04799768, EndpointPermission_ToNumber__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D27010, void, Resolve, (app::EndpointPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE0760, void, UndoResolve, (app::EndpointPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D27260, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01D27320, void, ctor_2, (app::EndpointPermission * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D858, EndpointPermission__ctor_1__MethodInfo)
}

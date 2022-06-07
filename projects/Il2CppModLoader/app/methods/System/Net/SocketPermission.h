#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::SocketPermission {
    IL2CPP_REGISTER_METHOD(0x01BDD090, void, ctor_1, (app::SocketPermission * this_ptr, app::PermissionState__Enum state))
    IL2CPP_REGISTER_METHOD(0x01BDD2B0, void, ctor_2, (app::SocketPermission * this_ptr, app::NetworkAccess__Enum access, app::TransportType__Enum transport, app::String * host_name, int32_t port_number))
    IL2CPP_REGISTER_METHOD(0x01BDD500, app::IEnumerator *, get_AcceptList, (app::SocketPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDD530, app::IEnumerator *, get_ConnectList, (app::SocketPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDD560, void, AddPermission, (app::SocketPermission * this_ptr, app::NetworkAccess__Enum access, app::TransportType__Enum transport, app::String * host_name, int32_t port_number))
    IL2CPP_REGISTER_METHOD(0x01BDD720, app::IPermission *, Copy, (app::SocketPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDD980, app::IPermission *, Intersect_1, (app::SocketPermission * this_ptr, app::IPermission * target))
    IL2CPP_REGISTER_METHODINFO(0x047651D0, SocketPermission_Intersect__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BDDCB0, bool, IntersectEmpty, (app::SocketPermission * this_ptr, app::SocketPermission * permission))
    IL2CPP_REGISTER_METHOD(0x01BDDD20, void, Intersect_2, (app::SocketPermission * this_ptr, app::ArrayList * list1, app::ArrayList * list2, app::ArrayList * result))
    IL2CPP_REGISTER_METHOD(0x01BDE110, bool, IsSubsetOf_1, (app::SocketPermission * this_ptr, app::IPermission * target))
    IL2CPP_REGISTER_METHODINFO(0x0473B4E8, SocketPermission_IsSubsetOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BDE340, bool, IsSubsetOf_2, (app::SocketPermission * this_ptr, app::ArrayList * list1, app::ArrayList * list2))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, IsUnrestricted, (app::SocketPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDE690, app::SecurityElement *, ToXml_1, (app::SocketPermission * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BDE950, void, ToXml_2, (app::SocketPermission * this_ptr, app::SecurityElement * root, app::String * child_name, app::IEnumerator * enumerator))
    IL2CPP_REGISTER_METHOD(0x01BDEE20, void, FromXml_1, (app::SocketPermission * this_ptr, app::SecurityElement * security_element))
    IL2CPP_REGISTER_METHODINFO(0x0475A3D8, SocketPermission_FromXml__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BDF300, void, FromXml_2, (app::SocketPermission * this_ptr, app::ArrayList * endpoints, app::NetworkAccess__Enum access))
    IL2CPP_REGISTER_METHOD(0x01BDF640, app::IPermission *, Union, (app::SocketPermission * this_ptr, app::IPermission * target))
    IL2CPP_REGISTER_METHODINFO(0x0478FC88, SocketPermission_Union__MethodInfo)
}

#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Configuration::ConnectionManagementElement {
    IL2CPP_REGISTER_METHOD(0x02018890, void, ctor_1, (app::ConnectionManagementElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798160, ConnectionManagementElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020188C0, void, ctor_2, (app::ConnectionManagementElement * this_ptr, app::String * address, int32_t max_connection))
    IL2CPP_REGISTER_METHODINFO(0x0475F528, ConnectionManagementElement__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020188F0, app::String *, get_Address, (app::ConnectionManagementElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047426D0, ConnectionManagementElement_get_Address__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018920, void, set_Address, (app::ConnectionManagementElement * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04792EB0, ConnectionManagementElement_set_Address__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018950, int32_t, get_MaxConnection, (app::ConnectionManagementElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727C10, ConnectionManagementElement_get_MaxConnection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018980, void, set_MaxConnection, (app::ConnectionManagementElement * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04750128, ConnectionManagementElement_set_MaxConnection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020189B0, app::ConfigurationPropertyCollection *, get_Properties, (app::ConnectionManagementElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748938, ConnectionManagementElement_get_Properties__MethodInfo)
}

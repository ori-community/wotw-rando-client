#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::PermissionSet {
    IL2CPP_REGISTER_METHOD(0x01E19450, void, ctor_1, (app::PermissionSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E195A0, void, ctor_2, (app::PermissionSet * this_ptr, app::PermissionState__Enum state))
    IL2CPP_REGISTER_METHOD(0x01E195D0, void, ctor_3, (app::PermissionSet * this_ptr, app::IPermission * perm))
    IL2CPP_REGISTER_METHOD(0x01E19620, void, CopyTo, (app::PermissionSet * this_ptr, app::Array * array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04757700, PermissionSet_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E197C0, void, Demand, (app::PermissionSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E19A10, void, CasOnlyDemand, (app::PermissionSet * this_ptr, int32_t skip))
    IL2CPP_REGISTER_METHOD(0x01BDD530, app::IEnumerator *, GetEnumerator, (app::PermissionSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E19AC0, bool, IsEmpty, (app::PermissionSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005150C0, bool, IsUnrestricted, (app::PermissionSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E19D00, app::String *, ToString, (app::PermissionSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E19D40, app::SecurityElement *, ToXml, (app::PermissionSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1A180, int32_t, get_Count, (app::PermissionSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1A1B0, bool, get_IsSynchronized, (app::PermissionSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object *, get_SyncRoot, (app::PermissionSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDeserializationCallback_OnDeserialization, (app::PermissionSet * this_ptr, app::Object * sender))
    IL2CPP_REGISTER_METHOD(0x01E1A1E0, bool, Equals, (app::PermissionSet * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01E1A410, int32_t, GetHashCode, (app::PermissionSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1A460, void, cctor, ())
}

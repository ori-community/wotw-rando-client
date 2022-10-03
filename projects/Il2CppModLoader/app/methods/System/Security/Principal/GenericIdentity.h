#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Principal::GenericIdentity {
    IL2CPP_REGISTER_METHOD(0x01E1C1C0, void, ctor_1, (app::GenericIdentity * this_ptr, app::String* name, app::String* type))
    IL2CPP_REGISTER_METHODINFO(0x04768330, GenericIdentity__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E1C300, void, ctor_2, (app::GenericIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1C330, void, ctor_3, (app::GenericIdentity * this_ptr, app::GenericIdentity* identity))
    IL2CPP_REGISTER_METHOD(0x01E1C380, app::ClaimsIdentity*, Clone, (app::GenericIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1C4F0, app::IEnumerable_1_System_Security_Claims_Claim_*, get_Claims, (app::GenericIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::String*, get_Name, (app::GenericIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::String*, get_AuthenticationType, (app::GenericIdentity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1C500, void, OnDeserializedMethod, (app::GenericIdentity * this_ptr, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01E1C6B0, void, AddNameClaim, (app::GenericIdentity * this_ptr))
} // namespace app::classes::System::Security::Principal::GenericIdentity

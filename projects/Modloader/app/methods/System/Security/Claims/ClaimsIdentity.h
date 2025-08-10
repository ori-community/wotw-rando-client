#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Claim.h>
#include <Modloader/app/structs/ClaimsIdentity.h>
#include <Modloader/app/structs/IEnumerable_1_System_Security_Claims_Claim_.h>
#include <Modloader/app/structs/IIdentity.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Claims::ClaimsIdentity {
    IL2CPP_REGISTER_METHOD(0x01E1C300, void, ctor_1, app::ClaimsIdentity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C1AE0, void, ctor_2, app::ClaimsIdentity* this_ptr, app::IEnumerable_1_System_Security_Claims_Claim_* claims)
    IL2CPP_REGISTER_METHOD(
        0x020C1B10,
        void,
        ctor_3,
        app::ClaimsIdentity* this_ptr,
        app::IIdentity* identity,
        app::IEnumerable_1_System_Security_Claims_Claim_* claims,
        app::String* authentication_type,
        app::String* name_type,
        app::String* role_type
    )
    IL2CPP_REGISTER_METHOD(
        0x020C1B40,
        void,
        ctor_4,
        app::ClaimsIdentity* this_ptr,
        app::IIdentity* identity,
        app::IEnumerable_1_System_Security_Claims_Claim_* claims,
        app::String* authentication_type,
        app::String* name_type,
        app::String* role_type,
        bool check_auth_type
    )
    IL2CPP_REGISTER_METHOD(0x020C2310, void, ctor_5, app::ClaimsIdentity* this_ptr, app::ClaimsIdentity* other)
    IL2CPP_REGISTER_METHOD(0x020C2680, void, ctor_6, app::ClaimsIdentity* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_AuthenticationType, app::ClaimsIdentity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::ClaimsIdentity*, get_Actor, app::ClaimsIdentity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C2930, void, set_Actor, app::ClaimsIdentity* this_ptr, app::ClaimsIdentity* value)
    IL2CPP_REGISTER_METHOD(0x020C2A30, app::IEnumerable_1_System_Security_Claims_Claim_*, get_Claims, app::ClaimsIdentity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C2BC0, app::String*, get_Name, app::ClaimsIdentity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_NameClaimType, app::ClaimsIdentity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C2BF0, app::ClaimsIdentity*, Clone, app::ClaimsIdentity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C2E90, void, AddClaim, app::ClaimsIdentity* this_ptr, app::Claim* claim)
    IL2CPP_REGISTER_METHOD(0x020C2FB0, void, SafeAddClaims, app::ClaimsIdentity* this_ptr, app::IEnumerable_1_System_Security_Claims_Claim_* claims)
    IL2CPP_REGISTER_METHOD(0x020C31E0, void, SafeAddClaim, app::ClaimsIdentity* this_ptr, app::Claim* claim)
    IL2CPP_REGISTER_METHOD(0x020C32D0, app::Claim*, FindFirst, app::ClaimsIdentity* this_ptr, app::String* type)
    IL2CPP_REGISTER_METHOD(0x020C35C0, void, OnSerializingMethod, app::ClaimsIdentity* this_ptr, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x020C3670, void, OnDeserializedMethod, app::ClaimsIdentity* this_ptr, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x020C3750, void, OnDeserializingMethod, app::ClaimsIdentity* this_ptr, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x020C3990, void, GetObjectData, app::ClaimsIdentity* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x020C4000, void, DeserializeClaims, app::ClaimsIdentity* this_ptr, app::String* serialized_claims)
    IL2CPP_REGISTER_METHOD(0x020C44C0, app::String*, SerializeClaims, app::ClaimsIdentity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C4810, bool, IsCircular, app::ClaimsIdentity* this_ptr, app::ClaimsIdentity* subject)
    IL2CPP_REGISTER_METHOD(
        0x020C4860,
        void,
        Deserialize,
        app::ClaimsIdentity* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context,
        bool use_context
    )
} // namespace app::classes::System::Security::Claims::ClaimsIdentity

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Claim.h>
#include <Modloader/app/structs/ClaimsIdentity.h>
#include <Modloader/app/structs/IDictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Claims::Claim {
    IL2CPP_REGISTER_METHOD(
        0x020C0D40,
        void,
        ctor_1,
        app::Claim* this_ptr,
        app::String* type,
        app::String* value,
        app::String* value_type,
        app::String* issuer,
        app::String* original_issuer,
        app::ClaimsIdentity* subject
    )
    IL2CPP_REGISTER_METHOD(
        0x020C0D90,
        void,
        ctor_2,
        app::Claim* this_ptr,
        app::String* type,
        app::String* value,
        app::String* value_type,
        app::String* issuer,
        app::String* original_issuer,
        app::ClaimsIdentity* subject,
        app::String* property_key,
        app::String* property_value
    )
    IL2CPP_REGISTER_METHOD(0x020C1010, void, ctor_3, app::Claim* this_ptr, app::Claim* other, app::ClaimsIdentity* subject)
    IL2CPP_REGISTER_METHOD(0x020C14E0, void, OnDeserializedMethod, app::Claim* this_ptr, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x020C1620, app::IDictionary_2_System_String_System_String_*, get_Properties, app::Claim* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::ClaimsIdentity*, get_Subject, app::Claim* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Subject, app::Claim* this_ptr, app::ClaimsIdentity* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Type, app::Claim* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Value, app::Claim* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020C1880, app::Claim*, Clone, app::Claim* this_ptr, app::ClaimsIdentity* identity)
    IL2CPP_REGISTER_METHOD(0x020C19E0, app::String*, ToString, app::Claim* this_ptr)
} // namespace app::classes::System::Security::Claims::Claim

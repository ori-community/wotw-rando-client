#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ClaimsIdentity.h>
#include <Modloader/app/structs/IEnumerable_1_System_Security_Claims_ClaimsIdentity_.h>
#include <Modloader/app/structs/Func_1_System_Security_Claims_ClaimsPrincipal_.h>
#include <Modloader/app/structs/ClaimsPrincipal.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Claims::ClaimsPrincipal {
    IL2CPP_REGISTER_METHOD(0x020C58A0, app::ClaimsIdentity*, SelectPrimaryIdentity, (app::IEnumerable_1_System_Security_Claims_ClaimsIdentity_ * identities))
    IL2CPP_REGISTER_METHODINFO(0x04712EF8, ClaimsPrincipal_SelectPrimaryIdentity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020C5B20, app::Func_1_System_Security_Claims_ClaimsPrincipal_*, get_ClaimsPrincipalSelector, ())
    IL2CPP_REGISTER_METHOD(0x020C5BC0, void, ctor_1, (app::ClaimsPrincipal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C5D20, void, ctor_2, (app::ClaimsPrincipal * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04773A30, ClaimsPrincipal__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020C5EE0, void, OnSerializingMethod, (app::ClaimsPrincipal * this_ptr, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x020C5F80, void, OnDeserializedMethod, (app::ClaimsPrincipal * this_ptr, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x020C6030, void, Deserialize, (app::ClaimsPrincipal * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x0473B178, ClaimsPrincipal_Deserialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020C6230, void, DeserializeIdentities, (app::ClaimsPrincipal * this_ptr, app::String* identities))
    IL2CPP_REGISTER_METHODINFO(0x0477FF98, ClaimsPrincipal_DeserializeIdentities__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020C6A70, app::String*, SerializeIdentities, (app::ClaimsPrincipal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C74B0, void, cctor, ())
} // namespace app::classes::System::Security::Claims::ClaimsPrincipal

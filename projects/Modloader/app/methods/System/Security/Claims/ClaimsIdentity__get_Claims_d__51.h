#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClaimsIdentity_get_Claims_d_51.h>
#include <Modloader/app/structs/Claim.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Security_Claims_Claim_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Security::Claims::ClaimsIdentity__get_Claims_d__51 {
    IL2CPP_REGISTER_METHOD(0x006389F0, void, ctor, (app::ClaimsIdentity_get_Claims_d_51 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x020C52A0, void, IDisposable_Dispose, (app::ClaimsIdentity_get_Claims_d_51 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C52E0, bool, MoveNext, (app::ClaimsIdentity_get_Claims_d_51 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C55B0, void, __m__Finally1, (app::ClaimsIdentity_get_Claims_d_51 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Claim*, IEnumerator_Claim__get_Current, (app::ClaimsIdentity_get_Claims_d_51 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C5650, void, IEnumerator_Reset, (app::ClaimsIdentity_get_Claims_d_51 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::ClaimsIdentity_get_Claims_d_51 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C56A0, app::IEnumerator_1_System_Security_Claims_Claim_*, IEnumerable_Claim__GetEnumerator, (app::ClaimsIdentity_get_Claims_d_51 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020C5890, app::IEnumerator*, IEnumerable_GetEnumerator, (app::ClaimsIdentity_get_Claims_d_51 * this_ptr))
} // namespace app::classes::System::Security::Claims::ClaimsIdentity__get_Claims_d__51

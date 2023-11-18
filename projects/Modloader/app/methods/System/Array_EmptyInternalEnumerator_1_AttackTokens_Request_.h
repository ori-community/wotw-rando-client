#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_EmptyInternalEnumerator_1_AttackTokens_Request_.h>
#include <Modloader/app/structs/AttackTokens_Request.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_EmptyInternalEnumerator_1_AttackTokens_Request_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::Array_EmptyInternalEnumerator_1_AttackTokens_Request_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MoveNext, (app::Array_EmptyInternalEnumerator_1_AttackTokens_Request_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C1C710, app::AttackTokens_Request, get_Current, (app::Array_EmptyInternalEnumerator_1_AttackTokens_Request_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CFF500, app::Object*, IEnumerator_get_Current, (app::Array_EmptyInternalEnumerator_1_AttackTokens_Request_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IEnumerator_Reset, (app::Array_EmptyInternalEnumerator_1_AttackTokens_Request_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Array_EmptyInternalEnumerator_1_AttackTokens_Request_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CFEB90, void, cctor, ())
} // namespace app::classes::System::Array_EmptyInternalEnumerator_1_AttackTokens_Request_

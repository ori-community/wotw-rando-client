#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::OidEnumerator {
    IL2CPP_REGISTER_METHOD(0x021C1000, void, ctor, (app::OidEnumerator * this_ptr, app::OidCollection* oids))
    IL2CPP_REGISTER_METHOD(0x021C1010, app::Object*, IEnumerator_get_Current, (app::OidEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C1040, bool, MoveNext, (app::OidEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, Reset, (app::OidEnumerator * this_ptr))
} // namespace app::classes::System::Security::Cryptography::OidEnumerator

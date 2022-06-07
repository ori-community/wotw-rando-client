#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator {
    IL2CPP_REGISTER_METHOD(0x021CE540, void, ctor, (app::X509ChainElementEnumerator * this_ptr, app::IEnumerable * enumerable))
    IL2CPP_REGISTER_METHOD(0x021CE5E0, app::X509ChainElement *, get_Current, (app::X509ChainElementEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021CE6D0, app::Object *, IEnumerator_get_Current, (app::X509ChainElementEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021CE760, bool, MoveNext, (app::X509ChainElementEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021CE7F0, void, Reset, (app::X509ChainElementEnumerator * this_ptr))
}

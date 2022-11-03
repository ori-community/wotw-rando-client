#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator {
    IL2CPP_REGISTER_METHOD(0x0257B9A0, void, ctor, (app::X509ExtensionEnumerator * this_ptr, app::ArrayList* list))
    IL2CPP_REGISTER_METHOD(0x0257B9E0, app::X509Extension_1*, get_Current, (app::X509ExtensionEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257BAD0, app::Object*, IEnumerator_get_Current, (app::X509ExtensionEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257BB60, bool, MoveNext, (app::X509ExtensionEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0257BBF0, void, Reset, (app::X509ExtensionEnumerator * this_ptr))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509ExtensionEnumerator

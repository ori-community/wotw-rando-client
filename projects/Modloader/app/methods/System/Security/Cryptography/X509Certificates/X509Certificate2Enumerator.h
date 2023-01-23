#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/X509Certificate2Enumerator.h>
#include <Modloader/app/structs/X509Certificate2Collection.h>
#include <Modloader/app/structs/X509Certificate2.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator {
    IL2CPP_REGISTER_METHOD(0x021C7410, void, ctor, (app::X509Certificate2Enumerator * this_ptr, app::X509Certificate2Collection* collection))
    IL2CPP_REGISTER_METHOD(0x021C74B0, app::X509Certificate2*, get_Current, (app::X509Certificate2Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C75A0, bool, MoveNext, (app::X509Certificate2Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C7630, app::Object*, IEnumerator_get_Current, (app::X509Certificate2Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C76C0, bool, IEnumerator_MoveNext, (app::X509Certificate2Enumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C7750, void, IEnumerator_Reset, (app::X509Certificate2Enumerator * this_ptr))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator

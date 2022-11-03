#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509ExtensionCollection {
    IL2CPP_REGISTER_METHOD(0x021D5A60, void, ctor, (app::X509ExtensionCollection_2 * this_ptr, app::X509Certificate_2* cert))
    IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Count, (app::X509ExtensionCollection_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021CDDE0, bool, get_IsSynchronized, (app::X509ExtensionCollection_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, get_SyncRoot, (app::X509ExtensionCollection_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D66D0, app::X509Extension_1*, get_Item, (app::X509ExtensionCollection_2 * this_ptr, app::String* oid))
    IL2CPP_REGISTER_METHODINFO(0x0473DC98, X509ExtensionCollection_2_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021D6950, void, ICollection_CopyTo, (app::X509ExtensionCollection_2 * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047771D0, X509ExtensionCollection_2_System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x021D6AB0, app::X509ExtensionEnumerator*, GetEnumerator, (app::X509ExtensionCollection_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D6C20, app::IEnumerator*, IEnumerable_GetEnumerator, (app::X509ExtensionCollection_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021D6D90, void, cctor, ())
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509ExtensionCollection

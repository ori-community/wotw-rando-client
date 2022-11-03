#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::OidCollection {
    IL2CPP_REGISTER_METHOD(0x021C0A10, void, ctor, (app::OidCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C0B60, int32_t, Add, (app::OidCollection * this_ptr, app::Oid* oid))
    IL2CPP_REGISTER_METHOD(0x021C0B90, app::Oid*, get_Item, (app::OidCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Count, (app::OidCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C0C50, app::IEnumerator*, IEnumerable_GetEnumerator, (app::OidCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021C0DA0, void, ICollection_CopyTo, (app::OidCollection * this_ptr, app::Array* array, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474EBC8, OidCollection_System_Collections_ICollection_CopyTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsSynchronized, (app::OidCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object*, get_SyncRoot, (app::OidCollection * this_ptr))
} // namespace app::classes::System::Security::Cryptography::OidCollection

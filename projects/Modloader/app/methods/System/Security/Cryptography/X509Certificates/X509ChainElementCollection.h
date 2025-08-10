#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/X509Certificate2.h>
#include <Modloader/app/structs/X509ChainElement.h>
#include <Modloader/app/structs/X509ChainElementCollection.h>
#include <Modloader/app/structs/X509ChainElementEnumerator.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509ChainElementCollection {
    IL2CPP_REGISTER_METHOD(0x021CDC90, void, ctor, app::X509ChainElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016D95F0, int32_t, get_Count, app::X509ChainElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021CDDE0, bool, get_IsSynchronized, app::X509ChainElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021CDE10, app::X509ChainElement*, get_Item, app::X509ChainElementCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01BCB830, app::Object*, get_SyncRoot, app::X509ChainElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF5420, void, ICollection_CopyTo, app::X509ChainElementCollection* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x021CDF10, app::X509ChainElementEnumerator*, GetEnumerator, app::X509ChainElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021CE060, app::IEnumerator*, IEnumerable_GetEnumerator, app::X509ChainElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021CE1B0, void, Add, app::X509ChainElementCollection* this_ptr, app::X509Certificate2* certificate)
    IL2CPP_REGISTER_METHOD(0x01717420, void, Clear, app::X509ChainElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021CE390, bool, Contains, app::X509ChainElementCollection* this_ptr, app::X509Certificate2* certificate)
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509ChainElementCollection

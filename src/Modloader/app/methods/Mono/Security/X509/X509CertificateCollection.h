#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/X509Certificate.h>
#include <Modloader/app/structs/X509CertificateCollection.h>
#include <Modloader/app/structs/X509CertificateCollection_2.h>
#include <Modloader/app/structs/X509CertificateCollection_X509CertificateEnumerator.h>
#include <Modloader/app/structs/X509CertificateCollection_X509CertificateEnumerator_2.h>
#include <Modloader/app/structs/X509Certificate_2.h>
#include <Modloader/app/structs/X509Certificate_2__Array.h>

namespace app::classes::Mono::Security::X509::X509CertificateCollection {
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, ctor_1, app::X509CertificateCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022856E0, app::X509Certificate*, get_Item_1, app::X509CertificateCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x022857E0, int32_t, Add_1, app::X509CertificateCollection* this_ptr, app::X509Certificate* value)
    IL2CPP_REGISTER_METHOD(0x022858C0, app::X509CertificateCollection_X509CertificateEnumerator*, GetEnumerator_1, app::X509CertificateCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020202A0, app::IEnumerator*, IEnumerable_GetEnumerator_1, app::X509CertificateCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021CBAD0, int32_t, GetHashCode_1, app::X509CertificateCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, ctor_2, app::X509CertificateCollection_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293F240, void, ctor_3, app::X509CertificateCollection_2* this_ptr, app::X509Certificate_2__Array* value)
    IL2CPP_REGISTER_METHOD(0x0293F360, void, ctor_4, app::X509CertificateCollection_2* this_ptr, app::X509CertificateCollection_2* value)
    IL2CPP_REGISTER_METHOD(0x0293F390, app::X509Certificate_2*, get_Item_2, app::X509CertificateCollection_2* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0293F490, void, set_Item, app::X509CertificateCollection_2* this_ptr, int32_t index, app::X509Certificate_2* value)
    IL2CPP_REGISTER_METHOD(0x0293F4E0, int32_t, Add_2, app::X509CertificateCollection_2* this_ptr, app::X509Certificate_2* value)
    IL2CPP_REGISTER_METHOD(0x0293F5C0, void, AddRange_1, app::X509CertificateCollection_2* this_ptr, app::X509Certificate_2__Array* value)
    IL2CPP_REGISTER_METHOD(0x0293F6E0, void, AddRange_2, app::X509CertificateCollection_2* this_ptr, app::X509CertificateCollection_2* value)
    IL2CPP_REGISTER_METHOD(0x0293F820, bool, Contains, app::X509CertificateCollection_2* this_ptr, app::X509Certificate_2* value)
    IL2CPP_REGISTER_METHOD(0x0201F9A0, void, CopyTo, app::X509CertificateCollection_2* this_ptr, app::X509Certificate_2__Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0293F840, app::X509CertificateCollection_X509CertificateEnumerator_2*, GetEnumerator_2, app::X509CertificateCollection_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020202A0, app::IEnumerator*, IEnumerable_GetEnumerator_2, app::X509CertificateCollection_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021CBAD0, int32_t, GetHashCode_2, app::X509CertificateCollection_2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0293FA00, int32_t, IndexOf, app::X509CertificateCollection_2* this_ptr, app::X509Certificate_2* value)
    IL2CPP_REGISTER_METHOD(0x0293FBF0, void, Insert, app::X509CertificateCollection_2* this_ptr, int32_t index, app::X509Certificate_2* value)
    IL2CPP_REGISTER_METHOD(0x0293FC40, void, Remove, app::X509CertificateCollection_2* this_ptr, app::X509Certificate_2* value)
    IL2CPP_REGISTER_METHOD(0x0293FC80, bool, Compare, app::X509CertificateCollection_2* this_ptr, app::Byte__Array* array1, app::Byte__Array* array2)
} // namespace app::classes::Mono::Security::X509::X509CertificateCollection

#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CredentialCache.h>
#include <Modloader/app/structs/CredentialCache_CredentialEnumerator.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::CredentialCache_CredentialEnumerator {
    IL2CPP_REGISTER_METHOD(
        0x01EAAF30,
        void,
        ctor,
        app::CredentialCache_CredentialEnumerator* this_ptr,
        app::CredentialCache* cache,
        app::Hashtable* table,
        app::Hashtable* host_table,
        int32_t version
    )
    IL2CPP_REGISTER_METHOD(0x01EAB0C0, app::Object*, IEnumerator_get_Current, app::CredentialCache_CredentialEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EAB220, bool, IEnumerator_MoveNext, app::CredentialCache_CredentialEnumerator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00443280, void, IEnumerator_Reset, app::CredentialCache_CredentialEnumerator* this_ptr)
} // namespace app::classes::System::Net::CredentialCache_CredentialEnumerator

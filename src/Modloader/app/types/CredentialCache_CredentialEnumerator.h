#pragma once
#include <Modloader/app/structs/CredentialCache_CredentialEnumerator.h>
#include <Modloader/app/structs/CredentialCache_CredentialEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CredentialCache_CredentialEnumerator {
        inline app::CredentialCache_CredentialEnumerator__Class** type_info() {
            static app::CredentialCache_CredentialEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CredentialCache_CredentialEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04781F00));
            }
            return cache;
        }
        inline app::CredentialCache_CredentialEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::CredentialCache_CredentialEnumerator__Class>(type_info(), "System.Net", "CredentialCache", "CredentialEnumerator");
        }
        inline app::CredentialCache_CredentialEnumerator* create() {
            return il2cpp::create_object<app::CredentialCache_CredentialEnumerator>(get_class());
        }
    } // namespace CredentialCache_CredentialEnumerator
} // namespace app::classes::types

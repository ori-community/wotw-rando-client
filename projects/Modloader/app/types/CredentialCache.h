#pragma once
#include <Modloader/app/structs/CredentialCache.h>
#include <Modloader/app/structs/CredentialCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CredentialCache {
        inline app::CredentialCache__Class** type_info() {
            static app::CredentialCache__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CredentialCache__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CredentialCache__Class* get_class() {
            return il2cpp::get_class<app::CredentialCache__Class>(type_info(), "System.Net", "CredentialCache");
        }
        inline app::CredentialCache* create() {
            return il2cpp::create_object<app::CredentialCache>(get_class());
        }
    } // namespace CredentialCache
} // namespace app::classes::types

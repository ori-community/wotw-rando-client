#pragma once
#include <Modloader/app/structs/OidEnumerator.h>
#include <Modloader/app/structs/OidEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OidEnumerator {
        inline app::OidEnumerator__Class** type_info() {
            static app::OidEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OidEnumerator__Class**)(modloader::win::memory::resolve_rva(0x047315C8));
            }
            return cache;
        }
        inline app::OidEnumerator__Class* get_class() {
            return il2cpp::get_class<app::OidEnumerator__Class>(type_info(), "System.Security.Cryptography", "OidEnumerator");
        }
        inline app::OidEnumerator* create() {
            return il2cpp::create_object<app::OidEnumerator>(get_class());
        }
    } // namespace OidEnumerator
} // namespace app::classes::types

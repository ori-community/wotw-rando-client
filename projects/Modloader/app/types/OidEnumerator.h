#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OidEnumerator {
        inline app::OidEnumerator__Class** type_info = (app::OidEnumerator__Class**)(modloader::win::memory::resolve_rva(0x047315C8));
        inline app::OidEnumerator__Class* get_class() {
            return il2cpp::get_class<app::OidEnumerator__Class>(type_info, "System.Security.Cryptography", "OidEnumerator");
        }
        inline app::OidEnumerator* create() {
            return il2cpp::create_object<app::OidEnumerator>(get_class());
        }
    } // namespace OidEnumerator
} // namespace app::classes::types

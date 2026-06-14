#pragma once
#include <Modloader/app/structs/SHA1Managed.h>
#include <Modloader/app/structs/SHA1Managed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SHA1Managed {
        inline app::SHA1Managed__Class** type_info() {
            static app::SHA1Managed__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SHA1Managed__Class**)(modloader::win::memory::resolve_rva(0x04788D48));
            }
            return cache;
        }
        inline app::SHA1Managed__Class* get_class() {
            return il2cpp::get_class<app::SHA1Managed__Class>(type_info(), "System.Security.Cryptography", "SHA1Managed");
        }
        inline app::SHA1Managed* create() {
            return il2cpp::create_object<app::SHA1Managed>(get_class());
        }
    } // namespace SHA1Managed
} // namespace app::classes::types

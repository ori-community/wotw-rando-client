#pragma once
#include <Modloader/app/structs/SHA256Managed.h>
#include <Modloader/app/structs/SHA256Managed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SHA256Managed {
        inline app::SHA256Managed__Class** type_info() {
            static app::SHA256Managed__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SHA256Managed__Class**)(modloader::win::memory::resolve_rva(0x04704188));
            }
            return cache;
        }
        inline app::SHA256Managed__Class* get_class() {
            return il2cpp::get_class<app::SHA256Managed__Class>(type_info(), "System.Security.Cryptography", "SHA256Managed");
        }
        inline app::SHA256Managed* create() {
            return il2cpp::create_object<app::SHA256Managed>(get_class());
        }
    } // namespace SHA256Managed
} // namespace app::classes::types

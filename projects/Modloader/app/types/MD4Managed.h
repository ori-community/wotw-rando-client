#pragma once
#include <Modloader/app/structs/MD4Managed.h>
#include <Modloader/app/structs/MD4Managed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MD4Managed {
        inline app::MD4Managed__Class** type_info() {
            static app::MD4Managed__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MD4Managed__Class**)(modloader::win::memory::resolve_rva(0x0478FEE8));
            }
            return cache;
        }
        inline app::MD4Managed__Class* get_class() {
            return il2cpp::get_class<app::MD4Managed__Class>(type_info(), "Mono.Security.Cryptography", "MD4Managed");
        }
        inline app::MD4Managed* create() {
            return il2cpp::create_object<app::MD4Managed>(get_class());
        }
    } // namespace MD4Managed
} // namespace app::classes::types

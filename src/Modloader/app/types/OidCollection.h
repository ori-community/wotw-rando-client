#pragma once
#include <Modloader/app/structs/OidCollection.h>
#include <Modloader/app/structs/OidCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OidCollection {
        inline app::OidCollection__Class** type_info() {
            static app::OidCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OidCollection__Class**)(modloader::win::memory::resolve_rva(0x0475B620));
            }
            return cache;
        }
        inline app::OidCollection__Class* get_class() {
            return il2cpp::get_class<app::OidCollection__Class>(type_info(), "System.Security.Cryptography", "OidCollection");
        }
        inline app::OidCollection* create() {
            return il2cpp::create_object<app::OidCollection>(get_class());
        }
    } // namespace OidCollection
} // namespace app::classes::types

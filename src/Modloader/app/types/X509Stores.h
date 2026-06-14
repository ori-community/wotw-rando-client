#pragma once
#include <Modloader/app/structs/X509Stores.h>
#include <Modloader/app/structs/X509Stores__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Stores {
        inline app::X509Stores__Class** type_info() {
            static app::X509Stores__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509Stores__Class**)(modloader::win::memory::resolve_rva(0x04721198));
            }
            return cache;
        }
        inline app::X509Stores__Class* get_class() {
            return il2cpp::get_class<app::X509Stores__Class>(type_info(), "Mono.Security.X509", "X509Stores");
        }
        inline app::X509Stores* create() {
            return il2cpp::create_object<app::X509Stores>(get_class());
        }
    } // namespace X509Stores
} // namespace app::classes::types

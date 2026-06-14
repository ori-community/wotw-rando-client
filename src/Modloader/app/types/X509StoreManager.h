#pragma once
#include <Modloader/app/structs/X509StoreManager.h>
#include <Modloader/app/structs/X509StoreManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509StoreManager {
        inline app::X509StoreManager__Class** type_info() {
            static app::X509StoreManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509StoreManager__Class**)(modloader::win::memory::resolve_rva(0x0473C4A8));
            }
            return cache;
        }
        inline app::X509StoreManager__Class* get_class() {
            return il2cpp::get_class<app::X509StoreManager__Class>(type_info(), "Mono.Security.X509", "X509StoreManager");
        }
        inline app::X509StoreManager* create() {
            return il2cpp::create_object<app::X509StoreManager>(get_class());
        }
    } // namespace X509StoreManager
} // namespace app::classes::types

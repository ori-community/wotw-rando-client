#pragma once
#include <Modloader/app/structs/KeyPairPersistence.h>
#include <Modloader/app/structs/KeyPairPersistence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyPairPersistence {
        inline app::KeyPairPersistence__Class** type_info() {
            static app::KeyPairPersistence__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyPairPersistence__Class**)(modloader::win::memory::resolve_rva(0x04712B18));
            }
            return cache;
        }
        inline app::KeyPairPersistence__Class* get_class() {
            return il2cpp::get_class<app::KeyPairPersistence__Class>(type_info(), "Mono.Security.Cryptography", "KeyPairPersistence");
        }
        inline app::KeyPairPersistence* create() {
            return il2cpp::create_object<app::KeyPairPersistence>(get_class());
        }
    } // namespace KeyPairPersistence
} // namespace app::classes::types

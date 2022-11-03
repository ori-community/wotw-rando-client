#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyPairPersistence {
        inline app::KeyPairPersistence__Class** type_info = (app::KeyPairPersistence__Class**)(modloader::win::memory::resolve_rva(0x04712B18));
        inline app::KeyPairPersistence__Class* get_class() {
            return il2cpp::get_class<app::KeyPairPersistence__Class>(type_info, "Mono.Security.Cryptography", "KeyPairPersistence");
        }
        inline app::KeyPairPersistence* create() {
            return il2cpp::create_object<app::KeyPairPersistence>(get_class());
        }
    } // namespace KeyPairPersistence
} // namespace app::classes::types

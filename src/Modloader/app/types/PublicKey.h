#pragma once
#include <Modloader/app/structs/PublicKey.h>
#include <Modloader/app/structs/PublicKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PublicKey {
        inline app::PublicKey__Class** type_info() {
            static app::PublicKey__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PublicKey__Class**)(modloader::win::memory::resolve_rva(0x047401E8));
            }
            return cache;
        }
        inline app::PublicKey__Class* get_class() {
            return il2cpp::get_class<app::PublicKey__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "PublicKey");
        }
        inline app::PublicKey* create() {
            return il2cpp::create_object<app::PublicKey>(get_class());
        }
    } // namespace PublicKey
} // namespace app::classes::types

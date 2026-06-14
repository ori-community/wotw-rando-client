#pragma once
#include <Modloader/app/structs/HMAC_1.h>
#include <Modloader/app/structs/HMAC_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HMAC_1 {
        inline app::HMAC_1__Class** type_info() {
            static app::HMAC_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HMAC_1__Class**)(modloader::win::memory::resolve_rva(0x0470EA20));
            }
            return cache;
        }
        inline app::HMAC_1__Class* get_class() {
            return il2cpp::get_class<app::HMAC_1__Class>(type_info(), "Mono.Security.Cryptography", "HMAC");
        }
        inline app::HMAC_1* create() {
            return il2cpp::create_object<app::HMAC_1>(get_class());
        }
    } // namespace HMAC_1
} // namespace app::classes::types

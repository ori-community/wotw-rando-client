#pragma once
#include <Modloader/app/structs/HMAC.h>
#include <Modloader/app/structs/HMAC__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HMAC {
        inline app::HMAC__Class** type_info() {
            static app::HMAC__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HMAC__Class**)(modloader::win::memory::resolve_rva(0x04704078));
            }
            return cache;
        }
        inline app::HMAC__Class* get_class() {
            return il2cpp::get_class<app::HMAC__Class>(type_info(), "System.Security.Cryptography", "HMAC");
        }
        inline app::HMAC* create() {
            return il2cpp::create_object<app::HMAC>(get_class());
        }
    } // namespace HMAC
} // namespace app::classes::types

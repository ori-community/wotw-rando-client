#pragma once
#include <Modloader/app/structs/PKCS1.h>
#include <Modloader/app/structs/PKCS1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS1 {
        inline app::PKCS1__Class** type_info() {
            static app::PKCS1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PKCS1__Class**)(modloader::win::memory::resolve_rva(0x04730B18));
            }
            return cache;
        }
        inline app::PKCS1__Class* get_class() {
            return il2cpp::get_class<app::PKCS1__Class>(type_info(), "Mono.Security.Cryptography", "PKCS1");
        }
        inline app::PKCS1* create() {
            return il2cpp::create_object<app::PKCS1>(get_class());
        }
    } // namespace PKCS1
} // namespace app::classes::types

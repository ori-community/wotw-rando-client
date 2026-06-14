#pragma once
#include <Modloader/app/structs/RSA.h>
#include <Modloader/app/structs/RSA__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSA {
        inline app::RSA__Class** type_info() {
            static app::RSA__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSA__Class**)(modloader::win::memory::resolve_rva(0x0470CE80));
            }
            return cache;
        }
        inline app::RSA__Class* get_class() {
            return il2cpp::get_class<app::RSA__Class>(type_info(), "System.Security.Cryptography", "RSA");
        }
        inline app::RSA* create() {
            return il2cpp::create_object<app::RSA>(get_class());
        }
    } // namespace RSA
} // namespace app::classes::types

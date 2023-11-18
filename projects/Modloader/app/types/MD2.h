#pragma once
#include <Modloader/app/structs/MD2.h>
#include <Modloader/app/structs/MD2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MD2 {
        inline app::MD2__Class** type_info() {
            static app::MD2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MD2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MD2__Class* get_class() {
            return il2cpp::get_class<app::MD2__Class>(type_info(), "Mono.Security.Cryptography", "MD2");
        }
        inline app::MD2* create() {
            return il2cpp::create_object<app::MD2>(get_class());
        }
    } // namespace MD2
} // namespace app::classes::types

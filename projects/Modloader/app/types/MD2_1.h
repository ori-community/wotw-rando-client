#pragma once
#include <Modloader/app/structs/MD2_1.h>
#include <Modloader/app/structs/MD2_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MD2_1 {
        inline app::MD2_1__Class** type_info() {
            static app::MD2_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MD2_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MD2_1__Class* get_class() {
            return il2cpp::get_class<app::MD2_1__Class>(type_info(), "Mono.Security.Cryptography", "MD2");
        }
        inline app::MD2_1* create() {
            return il2cpp::create_object<app::MD2_1>(get_class());
        }
    } // namespace MD2_1
} // namespace app::classes::types

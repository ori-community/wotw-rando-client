#pragma once
#include <Modloader/app/structs/MD2Managed_1.h>
#include <Modloader/app/structs/MD2Managed_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MD2Managed_1 {
        inline app::MD2Managed_1__Class** type_info() {
            static app::MD2Managed_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MD2Managed_1__Class**)(modloader::win::memory::resolve_rva(0x04736538));
            }
            return cache;
        }
        inline app::MD2Managed_1__Class* get_class() {
            return il2cpp::get_class<app::MD2Managed_1__Class>(type_info(), "Mono.Security.Cryptography", "MD2Managed");
        }
        inline app::MD2Managed_1* create() {
            return il2cpp::create_object<app::MD2Managed_1>(get_class());
        }
    } // namespace MD2Managed_1
} // namespace app::classes::types

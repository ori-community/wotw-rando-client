#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MD2Managed {
        inline app::MD2Managed__Class** type_info = (app::MD2Managed__Class**)(modloader::win::memory::resolve_rva(0x0477CD50));
        inline app::MD2Managed__Class* get_class() {
            return il2cpp::get_class<app::MD2Managed__Class>(type_info, "Mono.Security.Cryptography", "MD2Managed");
        }
        inline app::MD2Managed* create() {
            return il2cpp::create_object<app::MD2Managed>(get_class());
        }
    } // namespace MD2Managed
} // namespace app::classes::types

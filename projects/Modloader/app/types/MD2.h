#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MD2 {
        namespace {
            inline app::MD2__Class* type_info_ref = nullptr;
        }
        inline app::MD2__Class** type_info = &type_info_ref;
        inline app::MD2__Class* get_class() {
            return il2cpp::get_class<app::MD2__Class>(type_info, "Mono.Security.Cryptography", "MD2");
        }
        inline app::MD2* create() {
            return il2cpp::create_object<app::MD2>(get_class());
        }
    } // namespace MD2
} // namespace app::classes::types

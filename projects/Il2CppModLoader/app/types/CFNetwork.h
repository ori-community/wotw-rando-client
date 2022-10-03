#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CFNetwork {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CFNetwork__Class** type_info;
        inline app::CFNetwork__Class* get_class() {
            return il2cpp::get_class<app::CFNetwork__Class>(type_info, "Mono.Net", "CFNetwork");
        }
        inline app::CFNetwork* create() {
            return il2cpp::create_object<app::CFNetwork>(get_class());
        }
    } // namespace CFNetwork
} // namespace app::classes::types

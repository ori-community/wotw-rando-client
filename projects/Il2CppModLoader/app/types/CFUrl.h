#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CFUrl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CFUrl__Class** type_info;
        inline app::CFUrl__Class* get_class() {
            return il2cpp::get_class<app::CFUrl__Class>(type_info, "Mono.Net", "CFUrl");
        }
        inline app::CFUrl* create() {
            return il2cpp::create_object<app::CFUrl>(get_class());
        }
    } // namespace CFUrl
} // namespace app::classes::types

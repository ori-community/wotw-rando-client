#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeBag_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeBag_1__Class** type_info;
        inline app::SafeBag_1__Class* get_class() {
            return il2cpp::get_class<app::SafeBag_1__Class>(type_info, "Mono.Security.X509", "SafeBag");
        }
        inline app::SafeBag_1* create() {
            return il2cpp::create_object<app::SafeBag_1>(get_class());
        }
    } // namespace SafeBag_1
} // namespace app::classes::types

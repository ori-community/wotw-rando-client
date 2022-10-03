#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeBag {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeBag__Class** type_info;
        inline app::SafeBag__Class* get_class() {
            return il2cpp::get_class<app::SafeBag__Class>(type_info, "Mono.Security.X509", "SafeBag");
        }
        inline app::SafeBag* create() {
            return il2cpp::create_object<app::SafeBag>(get_class());
        }
    } // namespace SafeBag
} // namespace app::classes::types

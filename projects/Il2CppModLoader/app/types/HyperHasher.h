#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HyperHasher {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HyperHasher__Class** type_info;
        inline app::HyperHasher__Class* get_class() {
            return il2cpp::get_class<app::HyperHasher__Class>(type_info, "", "HyperHasher");
        }
        inline app::HyperHasher* create() {
            return il2cpp::create_object<app::HyperHasher>(get_class());
        }
    } // namespace HyperHasher
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuPlaceholder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KuPlaceholder__Class** type_info;
        inline app::KuPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::KuPlaceholder__Class>(type_info, "", "KuPlaceholder");
        }
        inline app::KuPlaceholder* create() {
            return il2cpp::create_object<app::KuPlaceholder>(get_class());
        }
    } // namespace KuPlaceholder
} // namespace app::classes::types

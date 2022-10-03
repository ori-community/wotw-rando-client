#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Naru {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Naru__Class** type_info;
        inline app::Naru__Class* get_class() {
            return il2cpp::get_class<app::Naru__Class>(type_info, "", "Naru");
        }
        inline app::Naru* create() {
            return il2cpp::create_object<app::Naru>(get_class());
        }
    } // namespace Naru
} // namespace app::classes::types

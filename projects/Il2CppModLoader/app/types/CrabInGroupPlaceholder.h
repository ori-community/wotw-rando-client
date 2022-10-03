#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrabInGroupPlaceholder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrabInGroupPlaceholder__Class** type_info;
        inline app::CrabInGroupPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CrabInGroupPlaceholder__Class>(type_info, "", "CrabInGroupPlaceholder");
        }
        inline app::CrabInGroupPlaceholder* create() {
            return il2cpp::create_object<app::CrabInGroupPlaceholder>(get_class());
        }
    } // namespace CrabInGroupPlaceholder
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICullingCategoryItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICullingCategoryItem__Class** type_info;
        inline app::ICullingCategoryItem__Class* get_class() {
            return il2cpp::get_class<app::ICullingCategoryItem__Class>(type_info, "Moon.Rendering", "ICullingCategoryItem");
        }
    } // namespace ICullingCategoryItem
} // namespace app::classes::types

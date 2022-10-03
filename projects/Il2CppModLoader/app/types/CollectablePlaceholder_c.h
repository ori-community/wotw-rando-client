#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollectablePlaceholder_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CollectablePlaceholder_c__Class** type_info;
        inline app::CollectablePlaceholder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CollectablePlaceholder_c__Class>(type_info, "", "CollectablePlaceholder", "<>c");
        }
        inline app::CollectablePlaceholder_c* create() {
            return il2cpp::create_object<app::CollectablePlaceholder_c>(get_class());
        }
    } // namespace CollectablePlaceholder_c
} // namespace app::classes::types

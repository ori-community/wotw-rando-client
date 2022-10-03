#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtOptimizerDataContainer_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArtOptimizerDataContainer_c__Class** type_info;
        inline app::ArtOptimizerDataContainer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ArtOptimizerDataContainer_c__Class>(type_info, "Moon.ArtOptimization", "ArtOptimizerDataContainer", "<>c");
        }
        inline app::ArtOptimizerDataContainer_c* create() {
            return il2cpp::create_object<app::ArtOptimizerDataContainer_c>(get_class());
        }
    } // namespace ArtOptimizerDataContainer_c
} // namespace app::classes::types

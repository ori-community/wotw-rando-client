#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_Samplers {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterReflectionView_Samplers__Class** type_info;
        inline app::UberWaterReflectionView_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_Samplers__Class>(type_info, "", "UberWaterReflectionView", "Samplers");
        }
        inline app::UberWaterReflectionView_Samplers* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_Samplers>(get_class());
        }
    } // namespace UberWaterReflectionView_Samplers
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterReflectionView__Class** type_info;
        inline app::UberWaterReflectionView__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionView__Class>(type_info, "", "UberWaterReflectionView");
        }
        inline app::UberWaterReflectionView* create() {
            return il2cpp::create_object<app::UberWaterReflectionView>(get_class());
        }
    } // namespace UberWaterReflectionView
} // namespace app::classes::types

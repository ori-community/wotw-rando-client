#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_AutomaticGroup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterReflectionView_AutomaticGroup__Class** type_info;
        inline app::UberWaterReflectionView_AutomaticGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_AutomaticGroup__Class>(type_info, "", "UberWaterReflectionView", "AutomaticGroup");
        }
        inline app::UberWaterReflectionView_AutomaticGroup* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_AutomaticGroup>(get_class());
        }
        inline app::UberWaterReflectionView_AutomaticGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::UberWaterReflectionView_AutomaticGroup__Array>(get_class(), size);
        }
        inline app::UberWaterReflectionView_AutomaticGroup__Array* create_array(const std::vector<app::UberWaterReflectionView_AutomaticGroup*>& items) {
            return il2cpp::array_new<app::UberWaterReflectionView_AutomaticGroup__Array>(get_class(), items);
        }
    } // namespace UberWaterReflectionView_AutomaticGroup
} // namespace app::classes::types

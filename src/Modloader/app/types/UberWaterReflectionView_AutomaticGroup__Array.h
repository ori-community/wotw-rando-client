#pragma once
#include <Modloader/app/structs/UberWaterReflectionView_AutomaticGroup__Array.h>
#include <Modloader/app/structs/UberWaterReflectionView_AutomaticGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_AutomaticGroup__Array {
        inline app::UberWaterReflectionView_AutomaticGroup__Array__Class** type_info() {
            static app::UberWaterReflectionView_AutomaticGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterReflectionView_AutomaticGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterReflectionView_AutomaticGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionView_AutomaticGroup__Array__Class>(type_info(), "", "UberWaterReflectionView+AutomaticGroup[]");
        }
        inline app::UberWaterReflectionView_AutomaticGroup__Array* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_AutomaticGroup__Array>(get_class());
        }
    } // namespace UberWaterReflectionView_AutomaticGroup__Array
} // namespace app::classes::types

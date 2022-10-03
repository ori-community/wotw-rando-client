#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_PlaneData {
        namespace {
            app::UberWaterReflectionView_PlaneData__Class* type_info_ref = nullptr;
        }
        app::UberWaterReflectionView_PlaneData__Class** type_info = &type_info_ref;
        inline app::UberWaterReflectionView_PlaneData__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_PlaneData__Class>(type_info, "", "UberWaterReflectionView", "PlaneData");
        }
        inline app::UberWaterReflectionView_PlaneData* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_PlaneData>(get_class());
        }
        inline app::UberWaterReflectionView_PlaneData__Boxed* box(app::UberWaterReflectionView_PlaneData value) {
            return il2cpp::box_value<app::UberWaterReflectionView_PlaneData__Boxed>(get_class(), value);
        }
    } // namespace UberWaterReflectionView_PlaneData
} // namespace app::classes::types

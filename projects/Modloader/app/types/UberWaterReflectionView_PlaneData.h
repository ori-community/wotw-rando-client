#pragma once
#include <Modloader/app/structs/UberWaterReflectionView_PlaneData.h>
#include <Modloader/app/structs/UberWaterReflectionView_PlaneData__Boxed.h>
#include <Modloader/app/structs/UberWaterReflectionView_PlaneData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_PlaneData {
        inline app::UberWaterReflectionView_PlaneData__Class** type_info() {
            static app::UberWaterReflectionView_PlaneData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterReflectionView_PlaneData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterReflectionView_PlaneData__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_PlaneData__Class>(type_info(), "", "UberWaterReflectionView", "PlaneData");
        }
        inline app::UberWaterReflectionView_PlaneData* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_PlaneData>(get_class());
        }
        inline app::UberWaterReflectionView_PlaneData__Boxed* box(app::UberWaterReflectionView_PlaneData value) {
            return il2cpp::box_value<app::UberWaterReflectionView_PlaneData__Boxed>(get_class(), value);
        }
    } // namespace UberWaterReflectionView_PlaneData
} // namespace app::classes::types

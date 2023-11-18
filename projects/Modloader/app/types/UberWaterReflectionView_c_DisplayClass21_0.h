#pragma once
#include <Modloader/app/structs/UberWaterReflectionView_c_DisplayClass21_0.h>
#include <Modloader/app/structs/UberWaterReflectionView_c_DisplayClass21_0__Boxed.h>
#include <Modloader/app/structs/UberWaterReflectionView_c_DisplayClass21_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_c_DisplayClass21_0 {
        inline app::UberWaterReflectionView_c_DisplayClass21_0__Class** type_info() {
            static app::UberWaterReflectionView_c_DisplayClass21_0__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterReflectionView_c_DisplayClass21_0__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterReflectionView_c_DisplayClass21_0__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_c_DisplayClass21_0__Class>(type_info(), "", "UberWaterReflectionView", "<>c__DisplayClass21_0");
        }
        inline app::UberWaterReflectionView_c_DisplayClass21_0* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_c_DisplayClass21_0>(get_class());
        }
        inline app::UberWaterReflectionView_c_DisplayClass21_0__Boxed* box(app::UberWaterReflectionView_c_DisplayClass21_0 value) {
            return il2cpp::box_value<app::UberWaterReflectionView_c_DisplayClass21_0__Boxed>(get_class(), value);
        }
    } // namespace UberWaterReflectionView_c_DisplayClass21_0
} // namespace app::classes::types

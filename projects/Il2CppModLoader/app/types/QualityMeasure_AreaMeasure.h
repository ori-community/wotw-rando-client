#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QualityMeasure_AreaMeasure {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QualityMeasure_AreaMeasure__Class** type_info;
        inline app::QualityMeasure_AreaMeasure__Class* get_class() {
            return il2cpp::get_nested_class<app::QualityMeasure_AreaMeasure__Class>(type_info, "TriangleNet.Tools", "QualityMeasure", "AreaMeasure");
        }
        inline app::QualityMeasure_AreaMeasure* create() {
            return il2cpp::create_object<app::QualityMeasure_AreaMeasure>(get_class());
        }
    } // namespace QualityMeasure_AreaMeasure
} // namespace app::classes::types

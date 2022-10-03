#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QualityMeasure_AlphaMeasure {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QualityMeasure_AlphaMeasure__Class** type_info;
        inline app::QualityMeasure_AlphaMeasure__Class* get_class() {
            return il2cpp::get_nested_class<app::QualityMeasure_AlphaMeasure__Class>(type_info, "TriangleNet.Tools", "QualityMeasure", "AlphaMeasure");
        }
        inline app::QualityMeasure_AlphaMeasure* create() {
            return il2cpp::create_object<app::QualityMeasure_AlphaMeasure>(get_class());
        }
    } // namespace QualityMeasure_AlphaMeasure
} // namespace app::classes::types

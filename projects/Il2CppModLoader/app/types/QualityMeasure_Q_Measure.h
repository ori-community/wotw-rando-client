#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QualityMeasure_Q_Measure {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QualityMeasure_Q_Measure__Class** type_info;
        inline app::QualityMeasure_Q_Measure__Class* get_class() {
            return il2cpp::get_nested_class<app::QualityMeasure_Q_Measure__Class>(type_info, "TriangleNet.Tools", "QualityMeasure", "Q_Measure");
        }
        inline app::QualityMeasure_Q_Measure* create() {
            return il2cpp::create_object<app::QualityMeasure_Q_Measure>(get_class());
        }
    } // namespace QualityMeasure_Q_Measure
} // namespace app::classes::types

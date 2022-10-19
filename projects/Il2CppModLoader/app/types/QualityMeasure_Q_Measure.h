#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QualityMeasure_Q_Measure {
        inline app::QualityMeasure_Q_Measure__Class** type_info = (app::QualityMeasure_Q_Measure__Class**)(modloader::win::memory::resolve_rva(0x0474A7E0));
        inline app::QualityMeasure_Q_Measure__Class* get_class() {
            return il2cpp::get_nested_class<app::QualityMeasure_Q_Measure__Class>(type_info, "TriangleNet.Tools", "QualityMeasure", "Q_Measure");
        }
        inline app::QualityMeasure_Q_Measure* create() {
            return il2cpp::create_object<app::QualityMeasure_Q_Measure>(get_class());
        }
    } // namespace QualityMeasure_Q_Measure
} // namespace app::classes::types

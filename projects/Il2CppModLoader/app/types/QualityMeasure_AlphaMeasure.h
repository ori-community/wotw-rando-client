#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QualityMeasure_AlphaMeasure {
        inline app::QualityMeasure_AlphaMeasure__Class** type_info = (app::QualityMeasure_AlphaMeasure__Class**)(modloader::win::memory::resolve_rva(0x0475D310));
        inline app::QualityMeasure_AlphaMeasure__Class* get_class() {
            return il2cpp::get_nested_class<app::QualityMeasure_AlphaMeasure__Class>(type_info, "TriangleNet.Tools", "QualityMeasure", "AlphaMeasure");
        }
        inline app::QualityMeasure_AlphaMeasure* create() {
            return il2cpp::create_object<app::QualityMeasure_AlphaMeasure>(get_class());
        }
    } // namespace QualityMeasure_AlphaMeasure
} // namespace app::classes::types

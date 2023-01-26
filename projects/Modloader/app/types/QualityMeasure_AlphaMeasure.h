#pragma once
#include <Modloader/app/structs/QualityMeasure_AlphaMeasure.h>
#include <Modloader/app/structs/QualityMeasure_AlphaMeasure__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QualityMeasure_AlphaMeasure {
        inline app::QualityMeasure_AlphaMeasure__Class** type_info() {
            static app::QualityMeasure_AlphaMeasure__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QualityMeasure_AlphaMeasure__Class**)(modloader::win::memory::resolve_rva(0x0475D310));
            }
            return cache;
        }
        inline app::QualityMeasure_AlphaMeasure__Class* get_class() {
            return il2cpp::get_nested_class<app::QualityMeasure_AlphaMeasure__Class>(type_info(), "TriangleNet.Tools", "QualityMeasure", "AlphaMeasure");
        }
        inline app::QualityMeasure_AlphaMeasure* create() {
            return il2cpp::create_object<app::QualityMeasure_AlphaMeasure>(get_class());
        }
    } // namespace QualityMeasure_AlphaMeasure
} // namespace app::classes::types

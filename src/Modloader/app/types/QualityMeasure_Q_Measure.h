#pragma once
#include <Modloader/app/structs/QualityMeasure_Q_Measure.h>
#include <Modloader/app/structs/QualityMeasure_Q_Measure__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QualityMeasure_Q_Measure {
        inline app::QualityMeasure_Q_Measure__Class** type_info() {
            static app::QualityMeasure_Q_Measure__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QualityMeasure_Q_Measure__Class**)(modloader::win::memory::resolve_rva(0x0474A7E0));
            }
            return cache;
        }
        inline app::QualityMeasure_Q_Measure__Class* get_class() {
            return il2cpp::get_nested_class<app::QualityMeasure_Q_Measure__Class>(type_info(), "TriangleNet.Tools", "QualityMeasure", "Q_Measure");
        }
        inline app::QualityMeasure_Q_Measure* create() {
            return il2cpp::create_object<app::QualityMeasure_Q_Measure>(get_class());
        }
    } // namespace QualityMeasure_Q_Measure
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/QualityMeasure_AreaMeasure.h>
#include <Modloader/app/structs/QualityMeasure_AreaMeasure__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QualityMeasure_AreaMeasure {
        inline app::QualityMeasure_AreaMeasure__Class** type_info() {
            static app::QualityMeasure_AreaMeasure__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QualityMeasure_AreaMeasure__Class**)(modloader::win::memory::resolve_rva(0x04722D38));
            }
            return cache;
        }
        inline app::QualityMeasure_AreaMeasure__Class* get_class() {
            return il2cpp::get_nested_class<app::QualityMeasure_AreaMeasure__Class>(type_info(), "TriangleNet.Tools", "QualityMeasure", "AreaMeasure");
        }
        inline app::QualityMeasure_AreaMeasure* create() {
            return il2cpp::create_object<app::QualityMeasure_AreaMeasure>(get_class());
        }
    } // namespace QualityMeasure_AreaMeasure
} // namespace app::classes::types

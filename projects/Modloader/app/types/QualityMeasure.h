#pragma once
#include <Modloader/app/structs/QualityMeasure.h>
#include <Modloader/app/structs/QualityMeasure__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QualityMeasure {
        inline app::QualityMeasure__Class** type_info() {
            static app::QualityMeasure__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QualityMeasure__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QualityMeasure__Class* get_class() {
            return il2cpp::get_class<app::QualityMeasure__Class>(type_info(), "TriangleNet.Tools", "QualityMeasure");
        }
        inline app::QualityMeasure* create() {
            return il2cpp::create_object<app::QualityMeasure>(get_class());
        }
    } // namespace QualityMeasure
} // namespace app::classes::types

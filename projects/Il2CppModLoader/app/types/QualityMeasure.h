#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QualityMeasure {
        namespace {
            inline app::QualityMeasure__Class* type_info_ref = nullptr;
        }
        inline app::QualityMeasure__Class** type_info = &type_info_ref;
        inline app::QualityMeasure__Class* get_class() {
            return il2cpp::get_class<app::QualityMeasure__Class>(type_info, "TriangleNet.Tools", "QualityMeasure");
        }
        inline app::QualityMeasure* create() {
            return il2cpp::create_object<app::QualityMeasure>(get_class());
        }
    } // namespace QualityMeasure
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseSpline_SplineIterator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaseSpline_SplineIterator__Class** type_info;
        inline app::BaseSpline_SplineIterator__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseSpline_SplineIterator__Class>(type_info, "", "BaseSpline", "SplineIterator");
        }
        inline app::BaseSpline_SplineIterator* create() {
            return il2cpp::create_object<app::BaseSpline_SplineIterator>(get_class());
        }
    } // namespace BaseSpline_SplineIterator
} // namespace app::classes::types

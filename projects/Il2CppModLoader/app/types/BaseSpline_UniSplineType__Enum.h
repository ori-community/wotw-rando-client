#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseSpline_UniSplineType__Enum {
        namespace {
            inline app::BaseSpline_UniSplineType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BaseSpline_UniSplineType__Enum__Class** type_info = &type_info_ref;
        inline app::BaseSpline_UniSplineType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseSpline_UniSplineType__Enum__Class>(type_info, "", "BaseSpline", "UniSplineType");
        }
        inline app::BaseSpline_UniSplineType__Enum* create() {
            return il2cpp::create_object<app::BaseSpline_UniSplineType__Enum>(get_class());
        }
    } // namespace BaseSpline_UniSplineType__Enum
} // namespace app::classes::types

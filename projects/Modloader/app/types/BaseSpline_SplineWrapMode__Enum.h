#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseSpline_SplineWrapMode__Enum {
        namespace {
            inline app::BaseSpline_SplineWrapMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BaseSpline_SplineWrapMode__Enum__Class** type_info = &type_info_ref;
        inline app::BaseSpline_SplineWrapMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseSpline_SplineWrapMode__Enum__Class>(type_info, "", "BaseSpline", "SplineWrapMode");
        }
        inline app::BaseSpline_SplineWrapMode__Enum* create() {
            return il2cpp::create_object<app::BaseSpline_SplineWrapMode__Enum>(get_class());
        }
    } // namespace BaseSpline_SplineWrapMode__Enum
} // namespace app::classes::types

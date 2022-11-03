#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AngleRange {
        namespace {
            inline app::AngleRange__Class* type_info_ref = nullptr;
        }
        inline app::AngleRange__Class** type_info = &type_info_ref;
        inline app::AngleRange__Class* get_class() {
            return il2cpp::get_class<app::AngleRange__Class>(type_info, "Swing", "AngleRange");
        }
        inline app::AngleRange* create() {
            return il2cpp::create_object<app::AngleRange>(get_class());
        }
        inline app::AngleRange__Boxed* box(app::AngleRange value) {
            return il2cpp::box_value<app::AngleRange__Boxed>(get_class(), value);
        }
    } // namespace AngleRange
} // namespace app::classes::types

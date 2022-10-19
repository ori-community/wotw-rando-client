#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatRange {
        namespace {
            inline app::FloatRange__Class* type_info_ref = nullptr;
        }
        inline app::FloatRange__Class** type_info = &type_info_ref;
        inline app::FloatRange__Class* get_class() {
            return il2cpp::get_class<app::FloatRange__Class>(type_info, "Swing", "FloatRange");
        }
        inline app::FloatRange* create() {
            return il2cpp::create_object<app::FloatRange>(get_class());
        }
        inline app::FloatRange__Boxed* box(app::FloatRange value) {
            return il2cpp::box_value<app::FloatRange__Boxed>(get_class(), value);
        }
    } // namespace FloatRange
} // namespace app::classes::types

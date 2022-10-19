#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatRange_1 {
        namespace {
            inline app::FloatRange_1__Class* type_info_ref = nullptr;
        }
        inline app::FloatRange_1__Class** type_info = &type_info_ref;
        inline app::FloatRange_1__Class* get_class() {
            return il2cpp::get_class<app::FloatRange_1__Class>(type_info, "", "FloatRange");
        }
        inline app::FloatRange_1* create() {
            return il2cpp::create_object<app::FloatRange_1>(get_class());
        }
        inline app::FloatRange_1__Boxed* box(app::FloatRange_1 value) {
            return il2cpp::box_value<app::FloatRange_1__Boxed>(get_class(), value);
        }
    } // namespace FloatRange_1
} // namespace app::classes::types

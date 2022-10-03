#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CurvedFloatRange {
        namespace {
            app::CurvedFloatRange__Class* type_info_ref = nullptr;
        }
        app::CurvedFloatRange__Class** type_info = &type_info_ref;
        inline app::CurvedFloatRange__Class* get_class() {
            return il2cpp::get_class<app::CurvedFloatRange__Class>(type_info, "", "CurvedFloatRange");
        }
        inline app::CurvedFloatRange* create() {
            return il2cpp::create_object<app::CurvedFloatRange>(get_class());
        }
    } // namespace CurvedFloatRange
} // namespace app::classes::types

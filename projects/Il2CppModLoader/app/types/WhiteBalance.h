#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WhiteBalance {
        namespace {
            app::WhiteBalance__Class* type_info_ref = nullptr;
        }
        app::WhiteBalance__Class** type_info = &type_info_ref;
        inline app::WhiteBalance__Class* get_class() {
            return il2cpp::get_class<app::WhiteBalance__Class>(type_info, "Colorful", "WhiteBalance");
        }
        inline app::WhiteBalance* create() {
            return il2cpp::create_object<app::WhiteBalance>(get_class());
        }
    } // namespace WhiteBalance
} // namespace app::classes::types

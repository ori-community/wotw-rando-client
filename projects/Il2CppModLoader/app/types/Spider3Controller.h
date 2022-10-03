#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Spider3Controller {
        namespace {
            app::Spider3Controller__Class* type_info_ref = nullptr;
        }
        app::Spider3Controller__Class** type_info = &type_info_ref;
        inline app::Spider3Controller__Class* get_class() {
            return il2cpp::get_class<app::Spider3Controller__Class>(type_info, "", "Spider3Controller");
        }
        inline app::Spider3Controller* create() {
            return il2cpp::create_object<app::Spider3Controller>(get_class());
        }
    } // namespace Spider3Controller
} // namespace app::classes::types

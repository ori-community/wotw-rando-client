#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SlugState {
        namespace {
            app::SlugState__Class* type_info_ref = nullptr;
        }
        app::SlugState__Class** type_info = &type_info_ref;
        inline app::SlugState__Class* get_class() {
            return il2cpp::get_class<app::SlugState__Class>(type_info, "", "SlugState");
        }
        inline app::SlugState* create() {
            return il2cpp::create_object<app::SlugState>(get_class());
        }
    } // namespace SlugState
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SlugFrozenState {
        namespace {
            app::SlugFrozenState__Class* type_info_ref = nullptr;
        }
        app::SlugFrozenState__Class** type_info = &type_info_ref;
        inline app::SlugFrozenState__Class* get_class() {
            return il2cpp::get_class<app::SlugFrozenState__Class>(type_info, "", "SlugFrozenState");
        }
        inline app::SlugFrozenState* create() {
            return il2cpp::create_object<app::SlugFrozenState>(get_class());
        }
    } // namespace SlugFrozenState
} // namespace app::classes::types

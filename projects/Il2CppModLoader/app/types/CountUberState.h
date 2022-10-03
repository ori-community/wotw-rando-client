#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CountUberState {
        namespace {
            app::CountUberState__Class* type_info_ref = nullptr;
        }
        app::CountUberState__Class** type_info = &type_info_ref;
        inline app::CountUberState__Class* get_class() {
            return il2cpp::get_class<app::CountUberState__Class>(type_info, "Moon", "CountUberState");
        }
        inline app::CountUberState* create() {
            return il2cpp::create_object<app::CountUberState>(get_class());
        }
    } // namespace CountUberState
} // namespace app::classes::types

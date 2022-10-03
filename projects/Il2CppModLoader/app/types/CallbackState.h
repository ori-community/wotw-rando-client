#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallbackState {
        namespace {
            app::CallbackState__Class* type_info_ref = nullptr;
        }
        app::CallbackState__Class** type_info = &type_info_ref;
        inline app::CallbackState__Class* get_class() {
            return il2cpp::get_class<app::CallbackState__Class>(type_info, "Moon.InteractionGraph", "CallbackState");
        }
        inline app::CallbackState* create() {
            return il2cpp::create_object<app::CallbackState>(get_class());
        }
    } // namespace CallbackState
} // namespace app::classes::types

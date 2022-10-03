#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompoundState {
        namespace {
            app::CompoundState__Class* type_info_ref = nullptr;
        }
        app::CompoundState__Class** type_info = &type_info_ref;
        inline app::CompoundState__Class* get_class() {
            return il2cpp::get_class<app::CompoundState__Class>(type_info, "Moon.InteractionGraph", "CompoundState");
        }
        inline app::CompoundState* create() {
            return il2cpp::create_object<app::CompoundState>(get_class());
        }
    } // namespace CompoundState
} // namespace app::classes::types

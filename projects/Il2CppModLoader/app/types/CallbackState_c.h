#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallbackState_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CallbackState_c__Class** type_info;
        inline app::CallbackState_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CallbackState_c__Class>(type_info, "Moon.InteractionGraph", "CallbackState", "<>c");
        }
        inline app::CallbackState_c* create() {
            return il2cpp::create_object<app::CallbackState_c>(get_class());
        }
    } // namespace CallbackState_c
} // namespace app::classes::types

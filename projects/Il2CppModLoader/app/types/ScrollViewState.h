#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScrollViewState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScrollViewState__Class** type_info;
        inline app::ScrollViewState__Class* get_class() {
            return il2cpp::get_class<app::ScrollViewState__Class>(type_info, "UnityEngine", "ScrollViewState");
        }
        inline app::ScrollViewState* create() {
            return il2cpp::create_object<app::ScrollViewState>(get_class());
        }
    } // namespace ScrollViewState
} // namespace app::classes::types

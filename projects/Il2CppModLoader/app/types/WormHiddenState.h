#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WormHiddenState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WormHiddenState__Class** type_info;
        inline app::WormHiddenState__Class* get_class() {
            return il2cpp::get_class<app::WormHiddenState__Class>(type_info, "", "WormHiddenState");
        }
        inline app::WormHiddenState* create() {
            return il2cpp::create_object<app::WormHiddenState>(get_class());
        }
    } // namespace WormHiddenState
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EndState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EndState__Class** type_info;
        inline app::EndState__Class* get_class() {
            return il2cpp::get_class<app::EndState__Class>(type_info, "", "EndState");
        }
        inline app::EndState* create() {
            return il2cpp::create_object<app::EndState>(get_class());
        }
    } // namespace EndState
} // namespace app::classes::types

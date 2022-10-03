#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingStunnedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingStunnedState__Class** type_info;
        inline app::RammingStunnedState__Class* get_class() {
            return il2cpp::get_class<app::RammingStunnedState__Class>(type_info, "", "RammingStunnedState");
        }
        inline app::RammingStunnedState* create() {
            return il2cpp::create_object<app::RammingStunnedState>(get_class());
        }
    } // namespace RammingStunnedState
} // namespace app::classes::types

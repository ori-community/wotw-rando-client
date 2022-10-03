#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingRetreatState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingRetreatState__Class** type_info;
        inline app::RammingRetreatState__Class* get_class() {
            return il2cpp::get_class<app::RammingRetreatState__Class>(type_info, "", "RammingRetreatState");
        }
        inline app::RammingRetreatState* create() {
            return il2cpp::create_object<app::RammingRetreatState>(get_class());
        }
    } // namespace RammingRetreatState
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingAlertState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingAlertState__Class** type_info;
        inline app::RammingAlertState__Class* get_class() {
            return il2cpp::get_class<app::RammingAlertState__Class>(type_info, "", "RammingAlertState");
        }
        inline app::RammingAlertState* create() {
            return il2cpp::create_object<app::RammingAlertState>(get_class());
        }
    } // namespace RammingAlertState
} // namespace app::classes::types

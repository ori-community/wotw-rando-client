#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerformBackOutAction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PerformBackOutAction__Class** type_info;
        inline app::PerformBackOutAction__Class* get_class() {
            return il2cpp::get_class<app::PerformBackOutAction__Class>(type_info, "", "PerformBackOutAction");
        }
        inline app::PerformBackOutAction* create() {
            return il2cpp::create_object<app::PerformBackOutAction>(get_class());
        }
    } // namespace PerformBackOutAction
} // namespace app::classes::types

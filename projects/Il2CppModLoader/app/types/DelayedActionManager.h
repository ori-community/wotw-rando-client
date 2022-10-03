#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelayedActionManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DelayedActionManager__Class** type_info;
        inline app::DelayedActionManager__Class* get_class() {
            return il2cpp::get_class<app::DelayedActionManager__Class>(type_info, "", "DelayedActionManager");
        }
        inline app::DelayedActionManager* create() {
            return il2cpp::create_object<app::DelayedActionManager>(get_class());
        }
    } // namespace DelayedActionManager
} // namespace app::classes::types

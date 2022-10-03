#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberInteractionManager__Class** type_info;
        inline app::UberInteractionManager__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionManager__Class>(type_info, "", "UberInteractionManager");
        }
        inline app::UberInteractionManager* create() {
            return il2cpp::create_object<app::UberInteractionManager>(get_class());
        }
    } // namespace UberInteractionManager
} // namespace app::classes::types

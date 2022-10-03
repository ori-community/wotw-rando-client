#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewSetupStateControllerResolver__Class** type_info;
        inline app::NewSetupStateControllerResolver__Class* get_class() {
            return il2cpp::get_class<app::NewSetupStateControllerResolver__Class>(type_info, "Moon", "NewSetupStateControllerResolver");
        }
        inline app::NewSetupStateControllerResolver* create() {
            return il2cpp::create_object<app::NewSetupStateControllerResolver>(get_class());
        }
    } // namespace NewSetupStateControllerResolver
} // namespace app::classes::types

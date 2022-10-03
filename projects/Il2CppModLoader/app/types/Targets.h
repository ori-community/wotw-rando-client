#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Targets {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Targets__Class** type_info;
        inline app::Targets__Class* get_class() {
            return il2cpp::get_class<app::Targets__Class>(type_info, "Game", "Targets");
        }
        inline app::Targets* create() {
            return il2cpp::create_object<app::Targets>(get_class());
        }
    } // namespace Targets
} // namespace app::classes::types

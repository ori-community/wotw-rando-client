#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ambience {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Ambience__Class** type_info;
        inline app::Ambience__Class* get_class() {
            return il2cpp::get_class<app::Ambience__Class>(type_info, "Core", "Ambience");
        }
        inline app::Ambience* create() {
            return il2cpp::create_object<app::Ambience>(get_class());
        }
    } // namespace Ambience
} // namespace app::classes::types

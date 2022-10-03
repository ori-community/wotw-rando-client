#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Scenes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Scenes__Class** type_info;
        inline app::Scenes__Class* get_class() {
            return il2cpp::get_class<app::Scenes__Class>(type_info, "Core", "Scenes");
        }
        inline app::Scenes* create() {
            return il2cpp::create_object<app::Scenes>(get_class());
        }
    } // namespace Scenes
} // namespace app::classes::types

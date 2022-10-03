#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostUberStatePlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostUberStatePlugin__Class** type_info;
        inline app::GhostUberStatePlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostUberStatePlugin__Class>(type_info, "", "GhostUberStatePlugin");
        }
        inline app::GhostUberStatePlugin* create() {
            return il2cpp::create_object<app::GhostUberStatePlugin>(get_class());
        }
    } // namespace GhostUberStatePlugin
} // namespace app::classes::types

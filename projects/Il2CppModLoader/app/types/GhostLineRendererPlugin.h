#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostLineRendererPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostLineRendererPlugin__Class** type_info;
        inline app::GhostLineRendererPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostLineRendererPlugin__Class>(type_info, "", "GhostLineRendererPlugin");
        }
        inline app::GhostLineRendererPlugin* create() {
            return il2cpp::create_object<app::GhostLineRendererPlugin>(get_class());
        }
    } // namespace GhostLineRendererPlugin
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostLineRendererPlugin_LineRendererData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostLineRendererPlugin_LineRendererData__Class** type_info;
        inline app::GhostLineRendererPlugin_LineRendererData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostLineRendererPlugin_LineRendererData__Class>(type_info, "", "GhostLineRendererPlugin", "LineRendererData");
        }
        inline app::GhostLineRendererPlugin_LineRendererData* create() {
            return il2cpp::create_object<app::GhostLineRendererPlugin_LineRendererData>(get_class());
        }
    } // namespace GhostLineRendererPlugin_LineRendererData
} // namespace app::classes::types

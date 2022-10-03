#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostUberStatePlugin_UberStateData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostUberStatePlugin_UberStateData__Class** type_info;
        inline app::GhostUberStatePlugin_UberStateData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostUberStatePlugin_UberStateData__Class>(type_info, "", "GhostUberStatePlugin", "UberStateData");
        }
        inline app::GhostUberStatePlugin_UberStateData* create() {
            return il2cpp::create_object<app::GhostUberStatePlugin_UberStateData>(get_class());
        }
    } // namespace GhostUberStatePlugin_UberStateData
} // namespace app::classes::types

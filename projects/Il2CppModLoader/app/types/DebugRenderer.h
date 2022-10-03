#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugRenderer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugRenderer__Class** type_info;
        inline app::DebugRenderer__Class* get_class() {
            return il2cpp::get_class<app::DebugRenderer__Class>(type_info, "Moon.VisualDebug", "DebugRenderer");
        }
        inline app::DebugRenderer* create() {
            return il2cpp::create_object<app::DebugRenderer>(get_class());
        }
    } // namespace DebugRenderer
} // namespace app::classes::types

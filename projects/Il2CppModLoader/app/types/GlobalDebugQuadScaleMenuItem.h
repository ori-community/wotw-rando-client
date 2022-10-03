#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalDebugQuadScaleMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GlobalDebugQuadScaleMenuItem__Class** type_info;
        inline app::GlobalDebugQuadScaleMenuItem__Class* get_class() {
            return il2cpp::get_class<app::GlobalDebugQuadScaleMenuItem__Class>(type_info, "", "GlobalDebugQuadScaleMenuItem");
        }
        inline app::GlobalDebugQuadScaleMenuItem* create() {
            return il2cpp::create_object<app::GlobalDebugQuadScaleMenuItem>(get_class());
        }
    } // namespace GlobalDebugQuadScaleMenuItem
} // namespace app::classes::types

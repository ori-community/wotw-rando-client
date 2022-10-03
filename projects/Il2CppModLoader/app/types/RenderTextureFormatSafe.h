#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderTextureFormatSafe {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderTextureFormatSafe__Class** type_info;
        inline app::RenderTextureFormatSafe__Class* get_class() {
            return il2cpp::get_class<app::RenderTextureFormatSafe__Class>(type_info, "Moon.Rendering", "RenderTextureFormatSafe");
        }
        inline app::RenderTextureFormatSafe* create() {
            return il2cpp::create_object<app::RenderTextureFormatSafe>(get_class());
        }
    } // namespace RenderTextureFormatSafe
} // namespace app::classes::types

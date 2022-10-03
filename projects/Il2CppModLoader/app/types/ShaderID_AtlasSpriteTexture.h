#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_AtlasSpriteTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_AtlasSpriteTexture__Class** type_info;
        inline app::ShaderID_AtlasSpriteTexture__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AtlasSpriteTexture__Class>(type_info, "", "ShaderID_AtlasSpriteTexture");
        }
        inline app::ShaderID_AtlasSpriteTexture* create() {
            return il2cpp::create_object<app::ShaderID_AtlasSpriteTexture>(get_class());
        }
    } // namespace ShaderID_AtlasSpriteTexture
} // namespace app::classes::types

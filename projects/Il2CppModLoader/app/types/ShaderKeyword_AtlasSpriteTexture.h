#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderKeyword_AtlasSpriteTexture {
        inline app::ShaderKeyword_AtlasSpriteTexture__Class** type_info = (app::ShaderKeyword_AtlasSpriteTexture__Class**)(modloader::win::memory::resolve_rva(0x04785900));
        inline app::ShaderKeyword_AtlasSpriteTexture__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_AtlasSpriteTexture__Class>(type_info, "", "ShaderKeyword_AtlasSpriteTexture");
        }
        inline app::ShaderKeyword_AtlasSpriteTexture* create() {
            return il2cpp::create_object<app::ShaderKeyword_AtlasSpriteTexture>(get_class());
        }
    } // namespace ShaderKeyword_AtlasSpriteTexture
} // namespace app::classes::types

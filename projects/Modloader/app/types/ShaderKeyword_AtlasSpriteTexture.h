#pragma once
#include <Modloader/app/structs/ShaderKeyword_AtlasSpriteTexture.h>
#include <Modloader/app/structs/ShaderKeyword_AtlasSpriteTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderKeyword_AtlasSpriteTexture {
        inline app::ShaderKeyword_AtlasSpriteTexture__Class** type_info() {
            static app::ShaderKeyword_AtlasSpriteTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderKeyword_AtlasSpriteTexture__Class**)(modloader::win::memory::resolve_rva(0x04785900));
            }
            return cache;
        }
        inline app::ShaderKeyword_AtlasSpriteTexture__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_AtlasSpriteTexture__Class>(type_info(), "", "ShaderKeyword_AtlasSpriteTexture");
        }
        inline app::ShaderKeyword_AtlasSpriteTexture* create() {
            return il2cpp::create_object<app::ShaderKeyword_AtlasSpriteTexture>(get_class());
        }
    } // namespace ShaderKeyword_AtlasSpriteTexture
} // namespace app::classes::types

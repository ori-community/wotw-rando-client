#pragma once
#include <Modloader/app/structs/ShaderID_AtlasSpriteTexture.h>
#include <Modloader/app/structs/ShaderID_AtlasSpriteTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_AtlasSpriteTexture {
        inline app::ShaderID_AtlasSpriteTexture__Class** type_info() {
            static app::ShaderID_AtlasSpriteTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_AtlasSpriteTexture__Class**)(modloader::win::memory::resolve_rva(0x04713CB8));
            }
            return cache;
        }
        inline app::ShaderID_AtlasSpriteTexture__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AtlasSpriteTexture__Class>(type_info(), "", "ShaderID_AtlasSpriteTexture");
        }
        inline app::ShaderID_AtlasSpriteTexture* create() {
            return il2cpp::create_object<app::ShaderID_AtlasSpriteTexture>(get_class());
        }
    } // namespace ShaderID_AtlasSpriteTexture
} // namespace app::classes::types

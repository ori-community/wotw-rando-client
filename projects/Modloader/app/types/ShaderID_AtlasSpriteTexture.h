#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_AtlasSpriteTexture {
        inline app::ShaderID_AtlasSpriteTexture__Class** type_info = (app::ShaderID_AtlasSpriteTexture__Class**)(modloader::win::memory::resolve_rva(0x04713CB8));
        inline app::ShaderID_AtlasSpriteTexture__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_AtlasSpriteTexture__Class>(type_info, "", "ShaderID_AtlasSpriteTexture");
        }
        inline app::ShaderID_AtlasSpriteTexture* create() {
            return il2cpp::create_object<app::ShaderID_AtlasSpriteTexture>(get_class());
        }
    } // namespace ShaderID_AtlasSpriteTexture
} // namespace app::classes::types

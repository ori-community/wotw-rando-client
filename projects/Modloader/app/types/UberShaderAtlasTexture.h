#pragma once
#include <Modloader/app/structs/UberShaderAtlasTexture.h>
#include <Modloader/app/structs/UberShaderAtlasTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAtlasTexture {
        inline app::UberShaderAtlasTexture__Class** type_info() {
            static app::UberShaderAtlasTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderAtlasTexture__Class**)(modloader::win::memory::resolve_rva(0x04783530));
            }
            return cache;
        }
        inline app::UberShaderAtlasTexture__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasTexture__Class>(type_info(), "", "UberShaderAtlasTexture");
        }
        inline app::UberShaderAtlasTexture* create() {
            return il2cpp::create_object<app::UberShaderAtlasTexture>(get_class());
        }
    } // namespace UberShaderAtlasTexture
} // namespace app::classes::types

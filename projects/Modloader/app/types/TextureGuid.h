#pragma once
#include <Modloader/app/structs/TextureGuid.h>
#include <Modloader/app/structs/TextureGuid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureGuid {
        inline app::TextureGuid__Class** type_info() {
            static app::TextureGuid__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextureGuid__Class**)(modloader::win::memory::resolve_rva(0x04742238));
            }
            return cache;
        }
        inline app::TextureGuid__Class* get_class() {
            return il2cpp::get_class<app::TextureGuid__Class>(type_info(), "UberShader", "TextureGuid");
        }
        inline app::TextureGuid* create() {
            return il2cpp::create_object<app::TextureGuid>(get_class());
        }
    } // namespace TextureGuid
} // namespace app::classes::types

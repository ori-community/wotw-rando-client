#pragma once
#include <Modloader/app/structs/RenderTextureFormatSafe.h>
#include <Modloader/app/structs/RenderTextureFormatSafe__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderTextureFormatSafe {
        inline app::RenderTextureFormatSafe__Class** type_info() {
            static app::RenderTextureFormatSafe__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderTextureFormatSafe__Class**)(modloader::win::memory::resolve_rva(0x04758FD0));
            }
            return cache;
        }
        inline app::RenderTextureFormatSafe__Class* get_class() {
            return il2cpp::get_class<app::RenderTextureFormatSafe__Class>(type_info(), "Moon.Rendering", "RenderTextureFormatSafe");
        }
        inline app::RenderTextureFormatSafe* create() {
            return il2cpp::create_object<app::RenderTextureFormatSafe>(get_class());
        }
    } // namespace RenderTextureFormatSafe
} // namespace app::classes::types

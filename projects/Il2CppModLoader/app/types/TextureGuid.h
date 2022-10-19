#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextureGuid {
        inline app::TextureGuid__Class** type_info = (app::TextureGuid__Class**)(modloader::win::memory::resolve_rva(0x04742238));
        inline app::TextureGuid__Class* get_class() {
            return il2cpp::get_class<app::TextureGuid__Class>(type_info, "UberShader", "TextureGuid");
        }
        inline app::TextureGuid* create() {
            return il2cpp::create_object<app::TextureGuid>(get_class());
        }
    } // namespace TextureGuid
} // namespace app::classes::types

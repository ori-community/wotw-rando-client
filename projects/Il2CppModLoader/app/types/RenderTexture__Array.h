#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RenderTexture__Array {
        inline app::RenderTexture__Array__Class** type_info = (app::RenderTexture__Array__Class**)(modloader::win::memory::resolve_rva(0x04767310));
        inline app::RenderTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::RenderTexture__Array__Class>(type_info, "UnityEngine", "RenderTexture[]");
        }
        inline app::RenderTexture__Array* create() {
            return il2cpp::create_object<app::RenderTexture__Array>(get_class());
        }
    } // namespace RenderTexture__Array
} // namespace app::classes::types

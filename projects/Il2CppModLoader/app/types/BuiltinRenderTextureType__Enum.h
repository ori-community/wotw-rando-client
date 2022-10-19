#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuiltinRenderTextureType__Enum {
        inline app::BuiltinRenderTextureType__Enum__Class** type_info = (app::BuiltinRenderTextureType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047582A0));
        inline app::BuiltinRenderTextureType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BuiltinRenderTextureType__Enum__Class>(type_info, "UnityEngine.Rendering", "BuiltinRenderTextureType");
        }
        inline app::BuiltinRenderTextureType__Enum* create() {
            return il2cpp::create_object<app::BuiltinRenderTextureType__Enum>(get_class());
        }
    } // namespace BuiltinRenderTextureType__Enum
} // namespace app::classes::types

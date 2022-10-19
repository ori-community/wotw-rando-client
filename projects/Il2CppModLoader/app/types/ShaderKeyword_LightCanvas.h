#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderKeyword_LightCanvas {
        inline app::ShaderKeyword_LightCanvas__Class** type_info = (app::ShaderKeyword_LightCanvas__Class**)(modloader::win::memory::resolve_rva(0x04771F28));
        inline app::ShaderKeyword_LightCanvas__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_LightCanvas__Class>(type_info, "", "ShaderKeyword_LightCanvas");
        }
        inline app::ShaderKeyword_LightCanvas* create() {
            return il2cpp::create_object<app::ShaderKeyword_LightCanvas>(get_class());
        }
    } // namespace ShaderKeyword_LightCanvas
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderTime {
        inline app::ShaderTime__Class** type_info = (app::ShaderTime__Class**)(modloader::win::memory::resolve_rva(0x047761E8));
        inline app::ShaderTime__Class* get_class() {
            return il2cpp::get_class<app::ShaderTime__Class>(type_info, "Moon.Rendering", "ShaderTime");
        }
        inline app::ShaderTime* create() {
            return il2cpp::create_object<app::ShaderTime>(get_class());
        }
    } // namespace ShaderTime
} // namespace app::classes::types

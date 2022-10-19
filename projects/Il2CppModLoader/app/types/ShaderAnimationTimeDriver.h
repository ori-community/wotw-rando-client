#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderAnimationTimeDriver {
        inline app::ShaderAnimationTimeDriver__Class** type_info = (app::ShaderAnimationTimeDriver__Class**)(modloader::win::memory::resolve_rva(0x0472AD80));
        inline app::ShaderAnimationTimeDriver__Class* get_class() {
            return il2cpp::get_class<app::ShaderAnimationTimeDriver__Class>(type_info, "", "ShaderAnimationTimeDriver");
        }
        inline app::ShaderAnimationTimeDriver* create() {
            return il2cpp::create_object<app::ShaderAnimationTimeDriver>(get_class());
        }
    } // namespace ShaderAnimationTimeDriver
} // namespace app::classes::types

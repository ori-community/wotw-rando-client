#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_SeinWorldState {
        inline app::ShaderID_SeinWorldState__Class** type_info = (app::ShaderID_SeinWorldState__Class**)(modloader::win::memory::resolve_rva(0x04788CB8));
        inline app::ShaderID_SeinWorldState__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SeinWorldState__Class>(type_info, "Sein.World", "ShaderID_SeinWorldState");
        }
        inline app::ShaderID_SeinWorldState* create() {
            return il2cpp::create_object<app::ShaderID_SeinWorldState>(get_class());
        }
    } // namespace ShaderID_SeinWorldState
} // namespace app::classes::types

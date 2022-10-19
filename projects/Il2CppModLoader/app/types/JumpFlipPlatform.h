#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JumpFlipPlatform {
        inline app::JumpFlipPlatform__Class** type_info = (app::JumpFlipPlatform__Class**)(modloader::win::memory::resolve_rva(0x04731048));
        inline app::JumpFlipPlatform__Class* get_class() {
            return il2cpp::get_class<app::JumpFlipPlatform__Class>(type_info, "", "JumpFlipPlatform");
        }
        inline app::JumpFlipPlatform* create() {
            return il2cpp::create_object<app::JumpFlipPlatform>(get_class());
        }
    } // namespace JumpFlipPlatform
} // namespace app::classes::types

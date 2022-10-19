#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDoubleJumpPuppet {
        inline app::SeinDoubleJumpPuppet__Class** type_info = (app::SeinDoubleJumpPuppet__Class**)(modloader::win::memory::resolve_rva(0x04725640));
        inline app::SeinDoubleJumpPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDoubleJumpPuppet__Class>(type_info, "", "SeinDoubleJumpPuppet");
        }
        inline app::SeinDoubleJumpPuppet* create() {
            return il2cpp::create_object<app::SeinDoubleJumpPuppet>(get_class());
        }
    } // namespace SeinDoubleJumpPuppet
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinWallJumpPuppet_Event__Enum {
        inline app::SeinWallJumpPuppet_Event__Enum__Class** type_info = (app::SeinWallJumpPuppet_Event__Enum__Class**)(modloader::win::memory::resolve_rva(0x04715A40));
        inline app::SeinWallJumpPuppet_Event__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinWallJumpPuppet_Event__Enum__Class>(type_info, "", "SeinWallJumpPuppet", "Event");
        }
        inline app::SeinWallJumpPuppet_Event__Enum* create() {
            return il2cpp::create_object<app::SeinWallJumpPuppet_Event__Enum>(get_class());
        }
    } // namespace SeinWallJumpPuppet_Event__Enum
} // namespace app::classes::types

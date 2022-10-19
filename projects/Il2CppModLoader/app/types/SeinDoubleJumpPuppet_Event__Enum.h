#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDoubleJumpPuppet_Event__Enum {
        inline app::SeinDoubleJumpPuppet_Event__Enum__Class** type_info = (app::SeinDoubleJumpPuppet_Event__Enum__Class**)(modloader::win::memory::resolve_rva(0x047218C0));
        inline app::SeinDoubleJumpPuppet_Event__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDoubleJumpPuppet_Event__Enum__Class>(type_info, "", "SeinDoubleJumpPuppet", "Event");
        }
        inline app::SeinDoubleJumpPuppet_Event__Enum* create() {
            return il2cpp::create_object<app::SeinDoubleJumpPuppet_Event__Enum>(get_class());
        }
    } // namespace SeinDoubleJumpPuppet_Event__Enum
} // namespace app::classes::types

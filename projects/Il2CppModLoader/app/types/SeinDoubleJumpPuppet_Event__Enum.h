#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDoubleJumpPuppet_Event__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinDoubleJumpPuppet_Event__Enum__Class** type_info;
        inline app::SeinDoubleJumpPuppet_Event__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDoubleJumpPuppet_Event__Enum__Class>(type_info, "", "SeinDoubleJumpPuppet", "Event");
        }
        inline app::SeinDoubleJumpPuppet_Event__Enum* create() {
            return il2cpp::create_object<app::SeinDoubleJumpPuppet_Event__Enum>(get_class());
        }
    } // namespace SeinDoubleJumpPuppet_Event__Enum
} // namespace app::classes::types

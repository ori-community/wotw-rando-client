#pragma once
#include <Modloader/app/structs/SeinDoubleJumpPuppet_Event__Enum.h>
#include <Modloader/app/structs/SeinDoubleJumpPuppet_Event__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDoubleJumpPuppet_Event__Enum {
        inline app::SeinDoubleJumpPuppet_Event__Enum__Class** type_info() {
            static app::SeinDoubleJumpPuppet_Event__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDoubleJumpPuppet_Event__Enum__Class**)(modloader::win::memory::resolve_rva(0x047218C0));
            }
            return cache;
        }
        inline app::SeinDoubleJumpPuppet_Event__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDoubleJumpPuppet_Event__Enum__Class>(type_info(), "", "SeinDoubleJumpPuppet", "Event");
        }
        inline app::SeinDoubleJumpPuppet_Event__Enum* create() {
            return il2cpp::create_object<app::SeinDoubleJumpPuppet_Event__Enum>(get_class());
        }
    } // namespace SeinDoubleJumpPuppet_Event__Enum
} // namespace app::classes::types

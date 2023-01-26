#pragma once
#include <Modloader/app/structs/SeinWallJumpPuppet_Event__Enum.h>
#include <Modloader/app/structs/SeinWallJumpPuppet_Event__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinWallJumpPuppet_Event__Enum {
        inline app::SeinWallJumpPuppet_Event__Enum__Class** type_info() {
            static app::SeinWallJumpPuppet_Event__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinWallJumpPuppet_Event__Enum__Class**)(modloader::win::memory::resolve_rva(0x04715A40));
            }
            return cache;
        }
        inline app::SeinWallJumpPuppet_Event__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinWallJumpPuppet_Event__Enum__Class>(type_info(), "", "SeinWallJumpPuppet", "Event");
        }
        inline app::SeinWallJumpPuppet_Event__Enum* create() {
            return il2cpp::create_object<app::SeinWallJumpPuppet_Event__Enum>(get_class());
        }
    } // namespace SeinWallJumpPuppet_Event__Enum
} // namespace app::classes::types

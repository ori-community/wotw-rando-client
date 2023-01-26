#pragma once
#include <Modloader/app/structs/SeinWallJump.h>
#include <Modloader/app/structs/SeinWallJump__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinWallJump {
        inline app::SeinWallJump__Class** type_info() {
            static app::SeinWallJump__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinWallJump__Class**)(modloader::win::memory::resolve_rva(0x0470D9D0));
            }
            return cache;
        }
        inline app::SeinWallJump__Class* get_class() {
            return il2cpp::get_class<app::SeinWallJump__Class>(type_info(), "", "SeinWallJump");
        }
        inline app::SeinWallJump* create() {
            return il2cpp::create_object<app::SeinWallJump>(get_class());
        }
    } // namespace SeinWallJump
} // namespace app::classes::types

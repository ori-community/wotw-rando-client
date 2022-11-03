#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDoubleJump {
        inline app::SeinDoubleJump__Class** type_info = (app::SeinDoubleJump__Class**)(modloader::win::memory::resolve_rva(0x047422A8));
        inline app::SeinDoubleJump__Class* get_class() {
            return il2cpp::get_class<app::SeinDoubleJump__Class>(type_info, "", "SeinDoubleJump");
        }
        inline app::SeinDoubleJump* create() {
            return il2cpp::create_object<app::SeinDoubleJump>(get_class());
        }
    } // namespace SeinDoubleJump
} // namespace app::classes::types

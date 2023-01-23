#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinWallJump_c__Class.h>
#include <Modloader/app/structs/SeinWallJump_c.h>

namespace app::classes::types {
    namespace SeinWallJump_c {
        inline app::SeinWallJump_c__Class** type_info = (app::SeinWallJump_c__Class**)(modloader::win::memory::resolve_rva(0x04759A70));
        inline app::SeinWallJump_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinWallJump_c__Class>(type_info, "", "SeinWallJump", "<>c");
        }
        inline app::SeinWallJump_c* create() {
            return il2cpp::create_object<app::SeinWallJump_c>(get_class());
        }
    } // namespace SeinWallJump_c
} // namespace app::classes::types

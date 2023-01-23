#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Class.h>
#include <Modloader/app/structs/SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50.h>

namespace app::classes::types {
    namespace SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50 {
        inline app::SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Class** type_info = (app::SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Class**)(modloader::win::memory::resolve_rva(0x047312F8));
        inline app::SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50__Class>(type_info, "", "SeinWallJump", "<HandleChangeDirectionWhileJumpingInwards>d__50");
        }
        inline app::SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50* create() {
            return il2cpp::create_object<app::SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50>(get_class());
        }
    } // namespace SeinWallJump_HandleChangeDirectionWhileJumpingInwards_d_50
} // namespace app::classes::types

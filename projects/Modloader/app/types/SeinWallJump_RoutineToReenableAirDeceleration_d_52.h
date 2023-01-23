#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinWallJump_RoutineToReenableAirDeceleration_d_52__Class.h>
#include <Modloader/app/structs/SeinWallJump_RoutineToReenableAirDeceleration_d_52.h>

namespace app::classes::types {
    namespace SeinWallJump_RoutineToReenableAirDeceleration_d_52 {
        inline app::SeinWallJump_RoutineToReenableAirDeceleration_d_52__Class** type_info = (app::SeinWallJump_RoutineToReenableAirDeceleration_d_52__Class**)(modloader::win::memory::resolve_rva(0x04761810));
        inline app::SeinWallJump_RoutineToReenableAirDeceleration_d_52__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinWallJump_RoutineToReenableAirDeceleration_d_52__Class>(type_info, "", "SeinWallJump", "<RoutineToReenableAirDeceleration>d__52");
        }
        inline app::SeinWallJump_RoutineToReenableAirDeceleration_d_52* create() {
            return il2cpp::create_object<app::SeinWallJump_RoutineToReenableAirDeceleration_d_52>(get_class());
        }
    } // namespace SeinWallJump_RoutineToReenableAirDeceleration_d_52
} // namespace app::classes::types

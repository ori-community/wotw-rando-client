#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RotationLimitAngle__Class.h>
#include <Modloader/app/structs/RotationLimitAngle.h>

namespace app::classes::types {
    namespace RotationLimitAngle {
        inline app::RotationLimitAngle__Class** type_info = (app::RotationLimitAngle__Class**)(modloader::win::memory::resolve_rva(0x04775CF0));
        inline app::RotationLimitAngle__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitAngle__Class>(type_info, "RootMotion.FinalIK", "RotationLimitAngle");
        }
        inline app::RotationLimitAngle* create() {
            return il2cpp::create_object<app::RotationLimitAngle>(get_class());
        }
    } // namespace RotationLimitAngle
} // namespace app::classes::types

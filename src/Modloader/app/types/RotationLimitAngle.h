#pragma once
#include <Modloader/app/structs/RotationLimitAngle.h>
#include <Modloader/app/structs/RotationLimitAngle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationLimitAngle {
        inline app::RotationLimitAngle__Class** type_info() {
            static app::RotationLimitAngle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RotationLimitAngle__Class**)(modloader::win::memory::resolve_rva(0x04775CF0));
            }
            return cache;
        }
        inline app::RotationLimitAngle__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitAngle__Class>(type_info(), "RootMotion.FinalIK", "RotationLimitAngle");
        }
        inline app::RotationLimitAngle* create() {
            return il2cpp::create_object<app::RotationLimitAngle>(get_class());
        }
    } // namespace RotationLimitAngle
} // namespace app::classes::types

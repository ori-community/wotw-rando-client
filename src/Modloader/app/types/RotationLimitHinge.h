#pragma once
#include <Modloader/app/structs/RotationLimitHinge.h>
#include <Modloader/app/structs/RotationLimitHinge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationLimitHinge {
        inline app::RotationLimitHinge__Class** type_info() {
            static app::RotationLimitHinge__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RotationLimitHinge__Class**)(modloader::win::memory::resolve_rva(0x04747D70));
            }
            return cache;
        }
        inline app::RotationLimitHinge__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitHinge__Class>(type_info(), "RootMotion.FinalIK", "RotationLimitHinge");
        }
        inline app::RotationLimitHinge* create() {
            return il2cpp::create_object<app::RotationLimitHinge>(get_class());
        }
    } // namespace RotationLimitHinge
} // namespace app::classes::types

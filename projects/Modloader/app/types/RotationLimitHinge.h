#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotationLimitHinge {
        inline app::RotationLimitHinge__Class** type_info = (app::RotationLimitHinge__Class**)(modloader::win::memory::resolve_rva(0x04747D70));
        inline app::RotationLimitHinge__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitHinge__Class>(type_info, "RootMotion.FinalIK", "RotationLimitHinge");
        }
        inline app::RotationLimitHinge* create() {
            return il2cpp::create_object<app::RotationLimitHinge>(get_class());
        }
    } // namespace RotationLimitHinge
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotationLimitPolygonal_LimitPoint__Array {
        inline app::RotationLimitPolygonal_LimitPoint__Array__Class** type_info = (app::RotationLimitPolygonal_LimitPoint__Array__Class**)(modloader::win::memory::resolve_rva(0x0470DFB8));
        inline app::RotationLimitPolygonal_LimitPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitPolygonal_LimitPoint__Array__Class>(type_info, "RootMotion.FinalIK", "RotationLimitPolygonal+LimitPoint[]");
        }
        inline app::RotationLimitPolygonal_LimitPoint__Array* create() {
            return il2cpp::create_object<app::RotationLimitPolygonal_LimitPoint__Array>(get_class());
        }
    } // namespace RotationLimitPolygonal_LimitPoint__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/RotationLimitPolygonal_LimitPoint__Array.h>
#include <Modloader/app/structs/RotationLimitPolygonal_LimitPoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationLimitPolygonal_LimitPoint__Array {
        inline app::RotationLimitPolygonal_LimitPoint__Array__Class** type_info() {
            static app::RotationLimitPolygonal_LimitPoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RotationLimitPolygonal_LimitPoint__Array__Class**)(modloader::win::memory::resolve_rva(0x0470DFB8));
            }
            return cache;
        }
        inline app::RotationLimitPolygonal_LimitPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::RotationLimitPolygonal_LimitPoint__Array__Class>(type_info(), "RootMotion.FinalIK", "RotationLimitPolygonal+LimitPoint[]");
        }
        inline app::RotationLimitPolygonal_LimitPoint__Array* create() {
            return il2cpp::create_object<app::RotationLimitPolygonal_LimitPoint__Array>(get_class());
        }
    } // namespace RotationLimitPolygonal_LimitPoint__Array
} // namespace app::classes::types

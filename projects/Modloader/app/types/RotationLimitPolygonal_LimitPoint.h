#pragma once
#include <Modloader/app/structs/RotationLimitPolygonal_LimitPoint.h>
#include <Modloader/app/structs/RotationLimitPolygonal_LimitPoint__Array.h>
#include <Modloader/app/structs/RotationLimitPolygonal_LimitPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationLimitPolygonal_LimitPoint {
        inline app::RotationLimitPolygonal_LimitPoint__Class** type_info() {
            static app::RotationLimitPolygonal_LimitPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RotationLimitPolygonal_LimitPoint__Class**)(modloader::win::memory::resolve_rva(0x047409B0));
            }
            return cache;
        }
        inline app::RotationLimitPolygonal_LimitPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::RotationLimitPolygonal_LimitPoint__Class>(type_info(), "RootMotion.FinalIK", "RotationLimitPolygonal", "LimitPoint");
        }
        inline app::RotationLimitPolygonal_LimitPoint* create() {
            return il2cpp::create_object<app::RotationLimitPolygonal_LimitPoint>(get_class());
        }
        inline app::RotationLimitPolygonal_LimitPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::RotationLimitPolygonal_LimitPoint__Array>(get_class(), size);
        }
        inline app::RotationLimitPolygonal_LimitPoint__Array* create_array(const std::vector<app::RotationLimitPolygonal_LimitPoint*>& items) {
            return il2cpp::array_new<app::RotationLimitPolygonal_LimitPoint__Array>(get_class(), items);
        }
    } // namespace RotationLimitPolygonal_LimitPoint
} // namespace app::classes::types

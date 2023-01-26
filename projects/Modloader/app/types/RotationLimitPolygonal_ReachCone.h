#pragma once
#include <Modloader/app/structs/RotationLimitPolygonal_ReachCone.h>
#include <Modloader/app/structs/RotationLimitPolygonal_ReachCone__Array.h>
#include <Modloader/app/structs/RotationLimitPolygonal_ReachCone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationLimitPolygonal_ReachCone {
        inline app::RotationLimitPolygonal_ReachCone__Class** type_info() {
            static app::RotationLimitPolygonal_ReachCone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RotationLimitPolygonal_ReachCone__Class**)(modloader::win::memory::resolve_rva(0x04712228));
            }
            return cache;
        }
        inline app::RotationLimitPolygonal_ReachCone__Class* get_class() {
            return il2cpp::get_nested_class<app::RotationLimitPolygonal_ReachCone__Class>(type_info(), "RootMotion.FinalIK", "RotationLimitPolygonal", "ReachCone");
        }
        inline app::RotationLimitPolygonal_ReachCone* create() {
            return il2cpp::create_object<app::RotationLimitPolygonal_ReachCone>(get_class());
        }
        inline app::RotationLimitPolygonal_ReachCone__Array* create_array(int size) {
            return il2cpp::array_new<app::RotationLimitPolygonal_ReachCone__Array>(get_class(), size);
        }
        inline app::RotationLimitPolygonal_ReachCone__Array* create_array(const std::vector<app::RotationLimitPolygonal_ReachCone*>& items) {
            return il2cpp::array_new<app::RotationLimitPolygonal_ReachCone__Array>(get_class(), items);
        }
    } // namespace RotationLimitPolygonal_ReachCone
} // namespace app::classes::types

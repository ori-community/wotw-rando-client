#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotationLimitPolygonal_ReachCone {
        inline app::RotationLimitPolygonal_ReachCone__Class** type_info = (app::RotationLimitPolygonal_ReachCone__Class**)(modloader::win::memory::resolve_rva(0x04712228));
        inline app::RotationLimitPolygonal_ReachCone__Class* get_class() {
            return il2cpp::get_nested_class<app::RotationLimitPolygonal_ReachCone__Class>(type_info, "RootMotion.FinalIK", "RotationLimitPolygonal", "ReachCone");
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

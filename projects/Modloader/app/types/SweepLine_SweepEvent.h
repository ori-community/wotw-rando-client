#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SweepLine_SweepEvent {
        inline app::SweepLine_SweepEvent__Class** type_info = (app::SweepLine_SweepEvent__Class**)(modloader::win::memory::resolve_rva(0x04721108));
        inline app::SweepLine_SweepEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::SweepLine_SweepEvent__Class>(type_info, "TriangleNet.Meshing.Algorithm", "SweepLine", "SweepEvent");
        }
        inline app::SweepLine_SweepEvent* create() {
            return il2cpp::create_object<app::SweepLine_SweepEvent>(get_class());
        }
        inline app::SweepLine_SweepEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::SweepLine_SweepEvent__Array>(get_class(), size);
        }
        inline app::SweepLine_SweepEvent__Array* create_array(const std::vector<app::SweepLine_SweepEvent*>& items) {
            return il2cpp::array_new<app::SweepLine_SweepEvent__Array>(get_class(), items);
        }
    } // namespace SweepLine_SweepEvent
} // namespace app::classes::types

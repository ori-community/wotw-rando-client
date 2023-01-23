#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaterFallMask_WaterLineGroup__Class.h>
#include <Modloader/app/structs/WaterFallMask_WaterLineGroup.h>
#include <Modloader/app/structs/WaterFallMask_WaterLineGroup__Array.h>

namespace app::classes::types {
    namespace WaterFallMask_WaterLineGroup {
        inline app::WaterFallMask_WaterLineGroup__Class** type_info = (app::WaterFallMask_WaterLineGroup__Class**)(modloader::win::memory::resolve_rva(0x04720610));
        inline app::WaterFallMask_WaterLineGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterFallMask_WaterLineGroup__Class>(type_info, "Moon", "WaterFallMask", "WaterLineGroup");
        }
        inline app::WaterFallMask_WaterLineGroup* create() {
            return il2cpp::create_object<app::WaterFallMask_WaterLineGroup>(get_class());
        }
        inline app::WaterFallMask_WaterLineGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterFallMask_WaterLineGroup__Array>(get_class(), size);
        }
        inline app::WaterFallMask_WaterLineGroup__Array* create_array(const std::vector<app::WaterFallMask_WaterLineGroup*>& items) {
            return il2cpp::array_new<app::WaterFallMask_WaterLineGroup__Array>(get_class(), items);
        }
    } // namespace WaterFallMask_WaterLineGroup
} // namespace app::classes::types

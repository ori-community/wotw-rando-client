#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AxisEventData__Class.h>
#include <Modloader/app/structs/AxisEventData.h>

namespace app::classes::types {
    namespace AxisEventData {
        inline app::AxisEventData__Class** type_info = (app::AxisEventData__Class**)(modloader::win::memory::resolve_rva(0x04745B08));
        inline app::AxisEventData__Class* get_class() {
            return il2cpp::get_class<app::AxisEventData__Class>(type_info, "UnityEngine.EventSystems", "AxisEventData");
        }
        inline app::AxisEventData* create() {
            return il2cpp::create_object<app::AxisEventData>(get_class());
        }
    } // namespace AxisEventData
} // namespace app::classes::types

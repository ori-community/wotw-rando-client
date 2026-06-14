#pragma once
#include <Modloader/app/structs/AxisEventData.h>
#include <Modloader/app/structs/AxisEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AxisEventData {
        inline app::AxisEventData__Class** type_info() {
            static app::AxisEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AxisEventData__Class**)(modloader::win::memory::resolve_rva(0x04745B08));
            }
            return cache;
        }
        inline app::AxisEventData__Class* get_class() {
            return il2cpp::get_class<app::AxisEventData__Class>(type_info(), "UnityEngine.EventSystems", "AxisEventData");
        }
        inline app::AxisEventData* create() {
            return il2cpp::create_object<app::AxisEventData>(get_class());
        }
    } // namespace AxisEventData
} // namespace app::classes::types

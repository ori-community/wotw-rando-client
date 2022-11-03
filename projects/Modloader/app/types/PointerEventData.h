#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointerEventData {
        inline app::PointerEventData__Class** type_info = (app::PointerEventData__Class**)(modloader::win::memory::resolve_rva(0x04773630));
        inline app::PointerEventData__Class* get_class() {
            return il2cpp::get_class<app::PointerEventData__Class>(type_info, "UnityEngine.EventSystems", "PointerEventData");
        }
        inline app::PointerEventData* create() {
            return il2cpp::create_object<app::PointerEventData>(get_class());
        }
        inline app::PointerEventData__Array* create_array(int size) {
            return il2cpp::array_new<app::PointerEventData__Array>(get_class(), size);
        }
        inline app::PointerEventData__Array* create_array(const std::vector<app::PointerEventData*>& items) {
            return il2cpp::array_new<app::PointerEventData__Array>(get_class(), items);
        }
    } // namespace PointerEventData
} // namespace app::classes::types

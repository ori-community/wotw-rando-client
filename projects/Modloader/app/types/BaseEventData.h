#pragma once
#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/BaseEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseEventData {
        inline app::BaseEventData__Class** type_info() {
            static app::BaseEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaseEventData__Class**)(modloader::win::memory::resolve_rva(0x04791630));
            }
            return cache;
        }
        inline app::BaseEventData__Class* get_class() {
            return il2cpp::get_class<app::BaseEventData__Class>(type_info(), "UnityEngine.EventSystems", "BaseEventData");
        }
        inline app::BaseEventData* create() {
            return il2cpp::create_object<app::BaseEventData>(get_class());
        }
    } // namespace BaseEventData
} // namespace app::classes::types

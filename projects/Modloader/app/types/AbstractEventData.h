#pragma once
#include <Modloader/app/structs/AbstractEventData.h>
#include <Modloader/app/structs/AbstractEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbstractEventData {
        inline app::AbstractEventData__Class** type_info() {
            static app::AbstractEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AbstractEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AbstractEventData__Class* get_class() {
            return il2cpp::get_class<app::AbstractEventData__Class>(type_info(), "UnityEngine.EventSystems", "AbstractEventData");
        }
        inline app::AbstractEventData* create() {
            return il2cpp::create_object<app::AbstractEventData>(get_class());
        }
    } // namespace AbstractEventData
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/ContinuousEvent.h>
#include <Modloader/app/structs/ContinuousEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContinuousEvent {
        inline app::ContinuousEvent__Class** type_info() {
            static app::ContinuousEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContinuousEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContinuousEvent__Class* get_class() {
            return il2cpp::get_class<app::ContinuousEvent__Class>(type_info(), "UnityEngine.Analytics", "ContinuousEvent");
        }
        inline app::ContinuousEvent* create() {
            return il2cpp::create_object<app::ContinuousEvent>(get_class());
        }
    } // namespace ContinuousEvent
} // namespace app::classes::types

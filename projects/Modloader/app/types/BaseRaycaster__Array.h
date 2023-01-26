#pragma once
#include <Modloader/app/structs/BaseRaycaster__Array.h>
#include <Modloader/app/structs/BaseRaycaster__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseRaycaster__Array {
        inline app::BaseRaycaster__Array__Class** type_info() {
            static app::BaseRaycaster__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseRaycaster__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseRaycaster__Array__Class* get_class() {
            return il2cpp::get_class<app::BaseRaycaster__Array__Class>(type_info(), "UnityEngine.EventSystems", "BaseRaycaster[]");
        }
        inline app::BaseRaycaster__Array* create() {
            return il2cpp::create_object<app::BaseRaycaster__Array>(get_class());
        }
    } // namespace BaseRaycaster__Array
} // namespace app::classes::types

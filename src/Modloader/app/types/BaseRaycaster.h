#pragma once
#include <Modloader/app/structs/BaseRaycaster.h>
#include <Modloader/app/structs/BaseRaycaster__Array.h>
#include <Modloader/app/structs/BaseRaycaster__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseRaycaster {
        inline app::BaseRaycaster__Class** type_info() {
            static app::BaseRaycaster__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseRaycaster__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseRaycaster__Class* get_class() {
            return il2cpp::get_class<app::BaseRaycaster__Class>(type_info(), "UnityEngine.EventSystems", "BaseRaycaster");
        }
        inline app::BaseRaycaster* create() {
            return il2cpp::create_object<app::BaseRaycaster>(get_class());
        }
        inline app::BaseRaycaster__Array* create_array(int size) {
            return il2cpp::array_new<app::BaseRaycaster__Array>(get_class(), size);
        }
        inline app::BaseRaycaster__Array* create_array(const std::vector<app::BaseRaycaster*>& items) {
            return il2cpp::array_new<app::BaseRaycaster__Array>(get_class(), items);
        }
    } // namespace BaseRaycaster
} // namespace app::classes::types

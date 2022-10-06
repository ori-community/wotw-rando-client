#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseRaycaster {
        namespace {
            app::BaseRaycaster__Class* type_info_ref = nullptr;
        }
        app::BaseRaycaster__Class** type_info = &type_info_ref;
        inline app::BaseRaycaster__Class* get_class() {
            return il2cpp::get_class<app::BaseRaycaster__Class>(type_info, "UnityEngine.EventSystems", "BaseRaycaster");
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

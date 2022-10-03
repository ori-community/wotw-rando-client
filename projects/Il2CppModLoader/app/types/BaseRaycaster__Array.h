#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseRaycaster__Array {
        namespace {
            app::BaseRaycaster__Array__Class* type_info_ref = nullptr;
        }
        app::BaseRaycaster__Array__Class** type_info = &type_info_ref;
        inline app::BaseRaycaster__Array__Class* get_class() {
            return il2cpp::get_class<app::BaseRaycaster__Array__Class>(type_info, "UnityEngine.EventSystems", "BaseRaycaster[]");
        }
        inline app::BaseRaycaster__Array* create() {
            return il2cpp::create_object<app::BaseRaycaster__Array>(get_class());
        }
    } // namespace BaseRaycaster__Array
} // namespace app::classes::types

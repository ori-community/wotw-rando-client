#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseInputModule__Array {
        namespace {
            app::BaseInputModule__Array__Class* type_info_ref = nullptr;
        }
        app::BaseInputModule__Array__Class** type_info = &type_info_ref;
        inline app::BaseInputModule__Array__Class* get_class() {
            return il2cpp::get_class<app::BaseInputModule__Array__Class>(type_info, "UnityEngine.EventSystems", "BaseInputModule[]");
        }
        inline app::BaseInputModule__Array* create() {
            return il2cpp::create_object<app::BaseInputModule__Array>(get_class());
        }
    } // namespace BaseInputModule__Array
} // namespace app::classes::types

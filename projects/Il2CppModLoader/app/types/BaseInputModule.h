#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseInputModule {
        namespace {
            app::BaseInputModule__Class* type_info_ref = nullptr;
        }
        app::BaseInputModule__Class** type_info = &type_info_ref;
        inline app::BaseInputModule__Class* get_class() {
            return il2cpp::get_class<app::BaseInputModule__Class>(type_info, "UnityEngine.EventSystems", "BaseInputModule");
        }
        inline app::BaseInputModule* create() {
            return il2cpp::create_object<app::BaseInputModule>(get_class());
        }
        inline app::BaseInputModule__Array* create_array(int size) {
            return il2cpp::array_new<app::BaseInputModule__Array>(get_class(), size);
        }
        inline app::BaseInputModule__Array* create_array(const std::vector<app::BaseInputModule*>& items) {
            return il2cpp::array_new<app::BaseInputModule__Array>(get_class(), items);
        }
    } // namespace BaseInputModule
} // namespace app::classes::types

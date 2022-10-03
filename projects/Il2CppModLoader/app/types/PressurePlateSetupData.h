#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PressurePlateSetupData {
        namespace {
            app::PressurePlateSetupData__Class* type_info_ref = nullptr;
        }
        app::PressurePlateSetupData__Class** type_info = &type_info_ref;
        inline app::PressurePlateSetupData__Class* get_class() {
            return il2cpp::get_class<app::PressurePlateSetupData__Class>(type_info, "", "PressurePlateSetupData");
        }
        inline app::PressurePlateSetupData* create() {
            return il2cpp::create_object<app::PressurePlateSetupData>(get_class());
        }
        inline app::PressurePlateSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::PressurePlateSetupData__Array>(get_class(), size);
        }
    } // namespace PressurePlateSetupData
} // namespace app::classes::types

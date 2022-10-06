#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoorSetupData {
        namespace {
            app::DoorSetupData__Class* type_info_ref = nullptr;
        }
        app::DoorSetupData__Class** type_info = &type_info_ref;
        inline app::DoorSetupData__Class* get_class() {
            return il2cpp::get_class<app::DoorSetupData__Class>(type_info, "", "DoorSetupData");
        }
        inline app::DoorSetupData* create() {
            return il2cpp::create_object<app::DoorSetupData>(get_class());
        }
        inline app::DoorSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::DoorSetupData__Array>(get_class(), size);
        }
        inline app::DoorSetupData__Array* create_array(const std::vector<app::DoorSetupData*>& items) {
            return il2cpp::array_new<app::DoorSetupData__Array>(get_class(), items);
        }
    } // namespace DoorSetupData
} // namespace app::classes::types

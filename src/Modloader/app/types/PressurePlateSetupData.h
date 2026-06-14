#pragma once
#include <Modloader/app/structs/PressurePlateSetupData.h>
#include <Modloader/app/structs/PressurePlateSetupData__Array.h>
#include <Modloader/app/structs/PressurePlateSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PressurePlateSetupData {
        inline app::PressurePlateSetupData__Class** type_info() {
            static app::PressurePlateSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PressurePlateSetupData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PressurePlateSetupData__Class* get_class() {
            return il2cpp::get_class<app::PressurePlateSetupData__Class>(type_info(), "", "PressurePlateSetupData");
        }
        inline app::PressurePlateSetupData* create() {
            return il2cpp::create_object<app::PressurePlateSetupData>(get_class());
        }
        inline app::PressurePlateSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::PressurePlateSetupData__Array>(get_class(), size);
        }
        inline app::PressurePlateSetupData__Array* create_array(const std::vector<app::PressurePlateSetupData*>& items) {
            return il2cpp::array_new<app::PressurePlateSetupData__Array>(get_class(), items);
        }
    } // namespace PressurePlateSetupData
} // namespace app::classes::types

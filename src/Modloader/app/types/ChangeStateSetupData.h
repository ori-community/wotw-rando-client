#pragma once
#include <Modloader/app/structs/ChangeStateSetupData.h>
#include <Modloader/app/structs/ChangeStateSetupData__Array.h>
#include <Modloader/app/structs/ChangeStateSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateSetupData {
        inline app::ChangeStateSetupData__Class** type_info() {
            static app::ChangeStateSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateSetupData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateSetupData__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateSetupData__Class>(type_info(), "Moon.Setups", "ChangeStateSetupData");
        }
        inline app::ChangeStateSetupData* create() {
            return il2cpp::create_object<app::ChangeStateSetupData>(get_class());
        }
        inline app::ChangeStateSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::ChangeStateSetupData__Array>(get_class(), size);
        }
        inline app::ChangeStateSetupData__Array* create_array(const std::vector<app::ChangeStateSetupData*>& items) {
            return il2cpp::array_new<app::ChangeStateSetupData__Array>(get_class(), items);
        }
    } // namespace ChangeStateSetupData
} // namespace app::classes::types

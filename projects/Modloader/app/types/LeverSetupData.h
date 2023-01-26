#pragma once
#include <Modloader/app/structs/LeverSetupData.h>
#include <Modloader/app/structs/LeverSetupData__Array.h>
#include <Modloader/app/structs/LeverSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeverSetupData {
        inline app::LeverSetupData__Class** type_info() {
            static app::LeverSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeverSetupData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeverSetupData__Class* get_class() {
            return il2cpp::get_class<app::LeverSetupData__Class>(type_info(), "", "LeverSetupData");
        }
        inline app::LeverSetupData* create() {
            return il2cpp::create_object<app::LeverSetupData>(get_class());
        }
        inline app::LeverSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::LeverSetupData__Array>(get_class(), size);
        }
        inline app::LeverSetupData__Array* create_array(const std::vector<app::LeverSetupData*>& items) {
            return il2cpp::array_new<app::LeverSetupData__Array>(get_class(), items);
        }
    } // namespace LeverSetupData
} // namespace app::classes::types

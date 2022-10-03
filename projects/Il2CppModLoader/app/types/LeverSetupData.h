#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeverSetupData {
        namespace {
            app::LeverSetupData__Class* type_info_ref = nullptr;
        }
        app::LeverSetupData__Class** type_info = &type_info_ref;
        inline app::LeverSetupData__Class* get_class() {
            return il2cpp::get_class<app::LeverSetupData__Class>(type_info, "", "LeverSetupData");
        }
        inline app::LeverSetupData* create() {
            return il2cpp::create_object<app::LeverSetupData>(get_class());
        }
        inline app::LeverSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::LeverSetupData__Array>(get_class(), size);
        }
    } // namespace LeverSetupData
} // namespace app::classes::types

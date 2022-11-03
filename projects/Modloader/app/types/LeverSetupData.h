#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeverSetupData {
        namespace {
            inline app::LeverSetupData__Class* type_info_ref = nullptr;
        }
        inline app::LeverSetupData__Class** type_info = &type_info_ref;
        inline app::LeverSetupData__Class* get_class() {
            return il2cpp::get_class<app::LeverSetupData__Class>(type_info, "", "LeverSetupData");
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

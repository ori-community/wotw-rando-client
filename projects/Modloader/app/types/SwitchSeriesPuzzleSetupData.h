#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwitchSeriesPuzzleSetupData {
        namespace {
            inline app::SwitchSeriesPuzzleSetupData__Class* type_info_ref = nullptr;
        }
        inline app::SwitchSeriesPuzzleSetupData__Class** type_info = &type_info_ref;
        inline app::SwitchSeriesPuzzleSetupData__Class* get_class() {
            return il2cpp::get_class<app::SwitchSeriesPuzzleSetupData__Class>(type_info, "", "SwitchSeriesPuzzleSetupData");
        }
        inline app::SwitchSeriesPuzzleSetupData* create() {
            return il2cpp::create_object<app::SwitchSeriesPuzzleSetupData>(get_class());
        }
        inline app::SwitchSeriesPuzzleSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::SwitchSeriesPuzzleSetupData__Array>(get_class(), size);
        }
        inline app::SwitchSeriesPuzzleSetupData__Array* create_array(const std::vector<app::SwitchSeriesPuzzleSetupData*>& items) {
            return il2cpp::array_new<app::SwitchSeriesPuzzleSetupData__Array>(get_class(), items);
        }
    } // namespace SwitchSeriesPuzzleSetupData
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SwitchSeriesPuzzleSetupData__Array.h>
#include <Modloader/app/structs/SwitchSeriesPuzzleSetupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchSeriesPuzzleSetupData__Array {
        inline app::SwitchSeriesPuzzleSetupData__Array__Class** type_info() {
            static app::SwitchSeriesPuzzleSetupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwitchSeriesPuzzleSetupData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwitchSeriesPuzzleSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::SwitchSeriesPuzzleSetupData__Array__Class>(type_info(), "", "SwitchSeriesPuzzleSetupData[]");
        }
        inline app::SwitchSeriesPuzzleSetupData__Array* create() {
            return il2cpp::create_object<app::SwitchSeriesPuzzleSetupData__Array>(get_class());
        }
    } // namespace SwitchSeriesPuzzleSetupData__Array
} // namespace app::classes::types

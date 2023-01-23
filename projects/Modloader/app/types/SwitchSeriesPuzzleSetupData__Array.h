#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwitchSeriesPuzzleSetupData__Array__Class.h>
#include <Modloader/app/structs/SwitchSeriesPuzzleSetupData__Array.h>

namespace app::classes::types {
    namespace SwitchSeriesPuzzleSetupData__Array {
        namespace {
            inline app::SwitchSeriesPuzzleSetupData__Array__Class* type_info_ref = nullptr;
        }
        inline app::SwitchSeriesPuzzleSetupData__Array__Class** type_info = &type_info_ref;
        inline app::SwitchSeriesPuzzleSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::SwitchSeriesPuzzleSetupData__Array__Class>(type_info, "", "SwitchSeriesPuzzleSetupData[]");
        }
        inline app::SwitchSeriesPuzzleSetupData__Array* create() {
            return il2cpp::create_object<app::SwitchSeriesPuzzleSetupData__Array>(get_class());
        }
    } // namespace SwitchSeriesPuzzleSetupData__Array
} // namespace app::classes::types

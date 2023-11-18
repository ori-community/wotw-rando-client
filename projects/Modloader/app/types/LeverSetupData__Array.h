#pragma once
#include <Modloader/app/structs/LeverSetupData__Array.h>
#include <Modloader/app/structs/LeverSetupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeverSetupData__Array {
        inline app::LeverSetupData__Array__Class** type_info() {
            static app::LeverSetupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeverSetupData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeverSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::LeverSetupData__Array__Class>(type_info(), "", "LeverSetupData[]");
        }
        inline app::LeverSetupData__Array* create() {
            return il2cpp::create_object<app::LeverSetupData__Array>(get_class());
        }
    } // namespace LeverSetupData__Array
} // namespace app::classes::types

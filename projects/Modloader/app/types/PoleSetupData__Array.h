#pragma once
#include <Modloader/app/structs/PoleSetupData__Array.h>
#include <Modloader/app/structs/PoleSetupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoleSetupData__Array {
        inline app::PoleSetupData__Array__Class** type_info() {
            static app::PoleSetupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoleSetupData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoleSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::PoleSetupData__Array__Class>(type_info(), "Game", "PoleSetupData[]");
        }
        inline app::PoleSetupData__Array* create() {
            return il2cpp::create_object<app::PoleSetupData__Array>(get_class());
        }
    } // namespace PoleSetupData__Array
} // namespace app::classes::types

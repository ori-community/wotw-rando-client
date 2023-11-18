#pragma once
#include <Modloader/app/structs/NewSetupStateController__Array.h>
#include <Modloader/app/structs/NewSetupStateController__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateController__Array {
        inline app::NewSetupStateController__Array__Class** type_info() {
            static app::NewSetupStateController__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewSetupStateController__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewSetupStateController__Array__Class* get_class() {
            return il2cpp::get_class<app::NewSetupStateController__Array__Class>(type_info(), "", "NewSetupStateController[]");
        }
        inline app::NewSetupStateController__Array* create() {
            return il2cpp::create_object<app::NewSetupStateController__Array>(get_class());
        }
    } // namespace NewSetupStateController__Array
} // namespace app::classes::types

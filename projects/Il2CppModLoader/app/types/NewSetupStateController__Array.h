#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateController__Array {
        namespace {
            app::NewSetupStateController__Array__Class* type_info_ref = nullptr;
        }
        app::NewSetupStateController__Array__Class** type_info = &type_info_ref;
        inline app::NewSetupStateController__Array__Class* get_class() {
            return il2cpp::get_class<app::NewSetupStateController__Array__Class>(type_info, "", "NewSetupStateController[]");
        }
        inline app::NewSetupStateController__Array* create() {
            return il2cpp::create_object<app::NewSetupStateController__Array>(get_class());
        }
    } // namespace NewSetupStateController__Array
} // namespace app::classes::types

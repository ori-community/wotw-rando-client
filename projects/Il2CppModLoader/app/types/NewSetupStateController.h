#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewSetupStateController {
        namespace {
            app::NewSetupStateController__Class* type_info_ref = nullptr;
        }
        app::NewSetupStateController__Class** type_info = &type_info_ref;
        inline app::NewSetupStateController__Class* get_class() {
            return il2cpp::get_class<app::NewSetupStateController__Class>(type_info, "", "NewSetupStateController");
        }
        inline app::NewSetupStateController* create() {
            return il2cpp::create_object<app::NewSetupStateController>(get_class());
        }
        inline app::NewSetupStateController__Array* create_array(int size) {
            return il2cpp::array_new<app::NewSetupStateController__Array>(get_class(), size);
        }
    } // namespace NewSetupStateController
} // namespace app::classes::types

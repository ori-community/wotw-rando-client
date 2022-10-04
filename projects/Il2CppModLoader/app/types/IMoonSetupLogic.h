#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonSetupLogic {
        namespace {
            app::IMoonSetupLogic__Class* type_info_ref = nullptr;
        }
        app::IMoonSetupLogic__Class** type_info = &type_info_ref;
        inline app::IMoonSetupLogic__Class* get_class() {
            return il2cpp::get_class<app::IMoonSetupLogic__Class>(type_info, "", "IMoonSetupLogic");
        }
    } // namespace IMoonSetupLogic
} // namespace app::classes::types

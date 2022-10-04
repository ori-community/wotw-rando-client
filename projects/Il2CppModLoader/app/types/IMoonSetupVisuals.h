#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonSetupVisuals {
        namespace {
            app::IMoonSetupVisuals__Class* type_info_ref = nullptr;
        }
        app::IMoonSetupVisuals__Class** type_info = &type_info_ref;
        inline app::IMoonSetupVisuals__Class* get_class() {
            return il2cpp::get_class<app::IMoonSetupVisuals__Class>(type_info, "", "IMoonSetupVisuals");
        }
    } // namespace IMoonSetupVisuals
} // namespace app::classes::types

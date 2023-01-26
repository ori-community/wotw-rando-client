#pragma once
#include <Modloader/app/structs/IMoonSetupVisuals.h>
#include <Modloader/app/structs/IMoonSetupVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonSetupVisuals {
        inline app::IMoonSetupVisuals__Class** type_info() {
            static app::IMoonSetupVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IMoonSetupVisuals__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IMoonSetupVisuals__Class* get_class() {
            return il2cpp::get_class<app::IMoonSetupVisuals__Class>(type_info(), "", "IMoonSetupVisuals");
        }
    } // namespace IMoonSetupVisuals
} // namespace app::classes::types

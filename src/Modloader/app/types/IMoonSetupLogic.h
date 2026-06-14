#pragma once
#include <Modloader/app/structs/IMoonSetupLogic.h>
#include <Modloader/app/structs/IMoonSetupLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonSetupLogic {
        inline app::IMoonSetupLogic__Class** type_info() {
            static app::IMoonSetupLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IMoonSetupLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IMoonSetupLogic__Class* get_class() {
            return il2cpp::get_class<app::IMoonSetupLogic__Class>(type_info(), "", "IMoonSetupLogic");
        }
    } // namespace IMoonSetupLogic
} // namespace app::classes::types

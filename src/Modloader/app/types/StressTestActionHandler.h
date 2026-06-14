#pragma once
#include <Modloader/app/structs/StressTestActionHandler.h>
#include <Modloader/app/structs/StressTestActionHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StressTestActionHandler {
        inline app::StressTestActionHandler__Class** type_info() {
            static app::StressTestActionHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StressTestActionHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StressTestActionHandler__Class* get_class() {
            return il2cpp::get_class<app::StressTestActionHandler__Class>(type_info(), "", "StressTestActionHandler");
        }
        inline app::StressTestActionHandler* create() {
            return il2cpp::create_object<app::StressTestActionHandler>(get_class());
        }
    } // namespace StressTestActionHandler
} // namespace app::classes::types

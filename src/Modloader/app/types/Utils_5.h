#pragma once
#include <Modloader/app/structs/Utils_5.h>
#include <Modloader/app/structs/Utils_5__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Utils_5 {
        inline app::Utils_5__Class** type_info() {
            static app::Utils_5__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Utils_5__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Utils_5__Class* get_class() {
            return il2cpp::get_class<app::Utils_5__Class>(type_info(), "usedStandaloneScripts.DeltaTimeManagers", "Utils");
        }
        inline app::Utils_5* create() {
            return il2cpp::create_object<app::Utils_5>(get_class());
        }
    } // namespace Utils_5
} // namespace app::classes::types

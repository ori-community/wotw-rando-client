#pragma once
#include <Modloader/app/structs/HR.h>
#include <Modloader/app/structs/HR__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HR {
        inline app::HR__Class** type_info() {
            static app::HR__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HR__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HR__Class* get_class() {
            return il2cpp::get_class<app::HR__Class>(type_info(), "XGamingRuntime.Interop", "HR");
        }
        inline app::HR* create() {
            return il2cpp::create_object<app::HR>(get_class());
        }
    } // namespace HR
} // namespace app::classes::types

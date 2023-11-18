#pragma once
#include <Modloader/app/structs/WarningException.h>
#include <Modloader/app/structs/WarningException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WarningException {
        inline app::WarningException__Class** type_info() {
            static app::WarningException__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WarningException__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WarningException__Class* get_class() {
            return il2cpp::get_class<app::WarningException__Class>(type_info(), "System.ComponentModel", "WarningException");
        }
        inline app::WarningException* create() {
            return il2cpp::create_object<app::WarningException>(get_class());
        }
    } // namespace WarningException
} // namespace app::classes::types

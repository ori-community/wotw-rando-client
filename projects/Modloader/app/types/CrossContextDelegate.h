#pragma once
#include <Modloader/app/structs/CrossContextDelegate.h>
#include <Modloader/app/structs/CrossContextDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossContextDelegate {
        inline app::CrossContextDelegate__Class** type_info() {
            static app::CrossContextDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossContextDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossContextDelegate__Class* get_class() {
            return il2cpp::get_class<app::CrossContextDelegate__Class>(type_info(), "System.Runtime.Remoting.Contexts", "CrossContextDelegate");
        }
        inline app::CrossContextDelegate* create() {
            return il2cpp::create_object<app::CrossContextDelegate>(get_class());
        }
    } // namespace CrossContextDelegate
} // namespace app::classes::types

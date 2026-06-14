#pragma once
#include <Modloader/app/structs/UnlockConnectionDelegate.h>
#include <Modloader/app/structs/UnlockConnectionDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlockConnectionDelegate {
        inline app::UnlockConnectionDelegate__Class** type_info() {
            static app::UnlockConnectionDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnlockConnectionDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnlockConnectionDelegate__Class* get_class() {
            return il2cpp::get_class<app::UnlockConnectionDelegate__Class>(type_info(), "System.Net", "UnlockConnectionDelegate");
        }
        inline app::UnlockConnectionDelegate* create() {
            return il2cpp::create_object<app::UnlockConnectionDelegate>(get_class());
        }
    } // namespace UnlockConnectionDelegate
} // namespace app::classes::types

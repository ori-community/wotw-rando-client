#pragma once
#include <Modloader/app/structs/DllCheck.h>
#include <Modloader/app/structs/DllCheck__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DllCheck {
        inline app::DllCheck__Class** type_info() {
            static app::DllCheck__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DllCheck__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DllCheck__Class* get_class() {
            return il2cpp::get_class<app::DllCheck__Class>(type_info(), "Steamworks", "DllCheck");
        }
        inline app::DllCheck* create() {
            return il2cpp::create_object<app::DllCheck>(get_class());
        }
    } // namespace DllCheck
} // namespace app::classes::types

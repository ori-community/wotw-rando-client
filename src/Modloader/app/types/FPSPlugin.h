#pragma once
#include <Modloader/app/structs/FPSPlugin.h>
#include <Modloader/app/structs/FPSPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FPSPlugin {
        inline app::FPSPlugin__Class** type_info() {
            static app::FPSPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FPSPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FPSPlugin__Class* get_class() {
            return il2cpp::get_class<app::FPSPlugin__Class>(type_info(), "", "FPSPlugin");
        }
        inline app::FPSPlugin* create() {
            return il2cpp::create_object<app::FPSPlugin>(get_class());
        }
    } // namespace FPSPlugin
} // namespace app::classes::types

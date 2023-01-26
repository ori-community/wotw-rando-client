#pragma once
#include <Modloader/app/structs/Display_DisplaysUpdatedDelegate.h>
#include <Modloader/app/structs/Display_DisplaysUpdatedDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Display_DisplaysUpdatedDelegate {
        inline app::Display_DisplaysUpdatedDelegate__Class** type_info() {
            static app::Display_DisplaysUpdatedDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Display_DisplaysUpdatedDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Display_DisplaysUpdatedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::Display_DisplaysUpdatedDelegate__Class>(type_info(), "UnityEngine", "Display", "DisplaysUpdatedDelegate");
        }
        inline app::Display_DisplaysUpdatedDelegate* create() {
            return il2cpp::create_object<app::Display_DisplaysUpdatedDelegate>(get_class());
        }
    } // namespace Display_DisplaysUpdatedDelegate
} // namespace app::classes::types

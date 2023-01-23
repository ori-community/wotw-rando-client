#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Display_DisplaysUpdatedDelegate__Class.h>
#include <Modloader/app/structs/Display_DisplaysUpdatedDelegate.h>

namespace app::classes::types {
    namespace Display_DisplaysUpdatedDelegate {
        namespace {
            inline app::Display_DisplaysUpdatedDelegate__Class* type_info_ref = nullptr;
        }
        inline app::Display_DisplaysUpdatedDelegate__Class** type_info = &type_info_ref;
        inline app::Display_DisplaysUpdatedDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::Display_DisplaysUpdatedDelegate__Class>(type_info, "UnityEngine", "Display", "DisplaysUpdatedDelegate");
        }
        inline app::Display_DisplaysUpdatedDelegate* create() {
            return il2cpp::create_object<app::Display_DisplaysUpdatedDelegate>(get_class());
        }
    } // namespace Display_DisplaysUpdatedDelegate
} // namespace app::classes::types

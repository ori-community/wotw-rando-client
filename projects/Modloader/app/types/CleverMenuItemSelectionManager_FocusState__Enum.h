#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager_FocusState__Enum__Class.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager_FocusState__Enum.h>

namespace app::classes::types {
    namespace CleverMenuItemSelectionManager_FocusState__Enum {
        namespace {
            inline app::CleverMenuItemSelectionManager_FocusState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CleverMenuItemSelectionManager_FocusState__Enum__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemSelectionManager_FocusState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemSelectionManager_FocusState__Enum__Class>(type_info, "", "CleverMenuItemSelectionManager", "FocusState");
        }
        inline app::CleverMenuItemSelectionManager_FocusState__Enum* create() {
            return il2cpp::create_object<app::CleverMenuItemSelectionManager_FocusState__Enum>(get_class());
        }
    } // namespace CleverMenuItemSelectionManager_FocusState__Enum
} // namespace app::classes::types

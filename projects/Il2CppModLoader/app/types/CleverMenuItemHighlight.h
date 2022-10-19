#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CleverMenuItemHighlight {
        namespace {
            inline app::CleverMenuItemHighlight__Class* type_info_ref = nullptr;
        }
        inline app::CleverMenuItemHighlight__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemHighlight__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemHighlight__Class>(type_info, "", "CleverMenuItemHighlight");
        }
        inline app::CleverMenuItemHighlight* create() {
            return il2cpp::create_object<app::CleverMenuItemHighlight>(get_class());
        }
    } // namespace CleverMenuItemHighlight
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CleverMenuItemLayout__Class.h>
#include <Modloader/app/structs/CleverMenuItemLayout.h>

namespace app::classes::types {
    namespace CleverMenuItemLayout {
        namespace {
            inline app::CleverMenuItemLayout__Class* type_info_ref = nullptr;
        }
        inline app::CleverMenuItemLayout__Class** type_info = &type_info_ref;
        inline app::CleverMenuItemLayout__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItemLayout__Class>(type_info, "", "CleverMenuItemLayout");
        }
        inline app::CleverMenuItemLayout* create() {
            return il2cpp::create_object<app::CleverMenuItemLayout>(get_class());
        }
    } // namespace CleverMenuItemLayout
} // namespace app::classes::types

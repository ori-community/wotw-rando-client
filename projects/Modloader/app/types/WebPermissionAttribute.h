#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebPermissionAttribute {
        namespace {
            inline app::WebPermissionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::WebPermissionAttribute__Class** type_info = &type_info_ref;
        inline app::WebPermissionAttribute__Class* get_class() {
            return il2cpp::get_class<app::WebPermissionAttribute__Class>(type_info, "System.Net", "WebPermissionAttribute");
        }
        inline app::WebPermissionAttribute* create() {
            return il2cpp::create_object<app::WebPermissionAttribute>(get_class());
        }
    } // namespace WebPermissionAttribute
} // namespace app::classes::types

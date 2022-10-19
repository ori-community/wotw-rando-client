#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SocketPermissionAttribute {
        namespace {
            inline app::SocketPermissionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SocketPermissionAttribute__Class** type_info = &type_info_ref;
        inline app::SocketPermissionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SocketPermissionAttribute__Class>(type_info, "System.Net", "SocketPermissionAttribute");
        }
        inline app::SocketPermissionAttribute* create() {
            return il2cpp::create_object<app::SocketPermissionAttribute>(get_class());
        }
    } // namespace SocketPermissionAttribute
} // namespace app::classes::types

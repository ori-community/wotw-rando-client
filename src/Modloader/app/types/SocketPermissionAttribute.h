#pragma once
#include <Modloader/app/structs/SocketPermissionAttribute.h>
#include <Modloader/app/structs/SocketPermissionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SocketPermissionAttribute {
        inline app::SocketPermissionAttribute__Class** type_info() {
            static app::SocketPermissionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SocketPermissionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SocketPermissionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SocketPermissionAttribute__Class>(type_info(), "System.Net", "SocketPermissionAttribute");
        }
        inline app::SocketPermissionAttribute* create() {
            return il2cpp::create_object<app::SocketPermissionAttribute>(get_class());
        }
    } // namespace SocketPermissionAttribute
} // namespace app::classes::types

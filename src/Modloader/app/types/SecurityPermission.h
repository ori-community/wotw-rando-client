#pragma once
#include <Modloader/app/structs/SecurityPermission.h>
#include <Modloader/app/structs/SecurityPermission__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityPermission {
        inline app::SecurityPermission__Class** type_info() {
            static app::SecurityPermission__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecurityPermission__Class**)(modloader::win::memory::resolve_rva(0x0476F818));
            }
            return cache;
        }
        inline app::SecurityPermission__Class* get_class() {
            return il2cpp::get_class<app::SecurityPermission__Class>(type_info(), "System.Security.Permissions", "SecurityPermission");
        }
        inline app::SecurityPermission* create() {
            return il2cpp::create_object<app::SecurityPermission>(get_class());
        }
    } // namespace SecurityPermission
} // namespace app::classes::types

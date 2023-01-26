#pragma once
#include <Modloader/app/structs/WebPermission.h>
#include <Modloader/app/structs/WebPermission__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebPermission {
        inline app::WebPermission__Class** type_info() {
            static app::WebPermission__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebPermission__Class**)(modloader::win::memory::resolve_rva(0x04735E38));
            }
            return cache;
        }
        inline app::WebPermission__Class* get_class() {
            return il2cpp::get_class<app::WebPermission__Class>(type_info(), "System.Net", "WebPermission");
        }
        inline app::WebPermission* create() {
            return il2cpp::create_object<app::WebPermission>(get_class());
        }
    } // namespace WebPermission
} // namespace app::classes::types

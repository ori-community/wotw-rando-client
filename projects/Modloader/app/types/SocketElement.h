#pragma once
#include <Modloader/app/structs/SocketElement.h>
#include <Modloader/app/structs/SocketElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SocketElement {
        inline app::SocketElement__Class** type_info() {
            static app::SocketElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SocketElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SocketElement__Class* get_class() {
            return il2cpp::get_class<app::SocketElement__Class>(type_info(), "System.Net.Configuration", "SocketElement");
        }
        inline app::SocketElement* create() {
            return il2cpp::create_object<app::SocketElement>(get_class());
        }
    } // namespace SocketElement
} // namespace app::classes::types

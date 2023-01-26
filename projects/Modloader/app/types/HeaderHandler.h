#pragma once
#include <Modloader/app/structs/HeaderHandler.h>
#include <Modloader/app/structs/HeaderHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HeaderHandler {
        inline app::HeaderHandler__Class** type_info() {
            static app::HeaderHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HeaderHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HeaderHandler__Class* get_class() {
            return il2cpp::get_class<app::HeaderHandler__Class>(type_info(), "System.Runtime.Remoting.Messaging", "HeaderHandler");
        }
        inline app::HeaderHandler* create() {
            return il2cpp::create_object<app::HeaderHandler>(get_class());
        }
    } // namespace HeaderHandler
} // namespace app::classes::types

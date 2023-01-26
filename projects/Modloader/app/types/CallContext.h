#pragma once
#include <Modloader/app/structs/CallContext.h>
#include <Modloader/app/structs/CallContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallContext {
        inline app::CallContext__Class** type_info() {
            static app::CallContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallContext__Class* get_class() {
            return il2cpp::get_class<app::CallContext__Class>(type_info(), "System.Runtime.Remoting.Messaging", "CallContext");
        }
        inline app::CallContext* create() {
            return il2cpp::create_object<app::CallContext>(get_class());
        }
    } // namespace CallContext
} // namespace app::classes::types

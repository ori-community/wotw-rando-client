#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallContext {
        namespace {
            app::CallContext__Class* type_info_ref = nullptr;
        }
        app::CallContext__Class** type_info = &type_info_ref;
        inline app::CallContext__Class* get_class() {
            return il2cpp::get_class<app::CallContext__Class>(type_info, "System.Runtime.Remoting.Messaging", "CallContext");
        }
        inline app::CallContext* create() {
            return il2cpp::create_object<app::CallContext>(get_class());
        }
    } // namespace CallContext
} // namespace app::classes::types

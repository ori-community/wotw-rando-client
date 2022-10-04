#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMessageCtrl {
        namespace {
            app::IMessageCtrl__Class* type_info_ref = nullptr;
        }
        app::IMessageCtrl__Class** type_info = &type_info_ref;
        inline app::IMessageCtrl__Class* get_class() {
            return il2cpp::get_class<app::IMessageCtrl__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMessageCtrl");
        }
        inline app::IMessageCtrl* create() {
            return il2cpp::create_object<app::IMessageCtrl>(get_class());
        }
    } // namespace IMessageCtrl
} // namespace app::classes::types

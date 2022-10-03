#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteActivator {
        namespace {
            app::RemoteActivator__Class* type_info_ref = nullptr;
        }
        app::RemoteActivator__Class** type_info = &type_info_ref;
        inline app::RemoteActivator__Class* get_class() {
            return il2cpp::get_class<app::RemoteActivator__Class>(type_info, "System.Runtime.Remoting.Activation", "RemoteActivator");
        }
        inline app::RemoteActivator* create() {
            return il2cpp::create_object<app::RemoteActivator>(get_class());
        }
    } // namespace RemoteActivator
} // namespace app::classes::types

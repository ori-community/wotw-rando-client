#pragma once
#include <Modloader/app/structs/RemoteActivator.h>
#include <Modloader/app/structs/RemoteActivator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteActivator {
        inline app::RemoteActivator__Class** type_info() {
            static app::RemoteActivator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteActivator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteActivator__Class* get_class() {
            return il2cpp::get_class<app::RemoteActivator__Class>(type_info(), "System.Runtime.Remoting.Activation", "RemoteActivator");
        }
        inline app::RemoteActivator* create() {
            return il2cpp::create_object<app::RemoteActivator>(get_class());
        }
    } // namespace RemoteActivator
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/RemoteActivationAttribute.h>
#include <Modloader/app/structs/RemoteActivationAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteActivationAttribute {
        inline app::RemoteActivationAttribute__Class** type_info() {
            static app::RemoteActivationAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoteActivationAttribute__Class**)(modloader::win::memory::resolve_rva(0x04743CF8));
            }
            return cache;
        }
        inline app::RemoteActivationAttribute__Class* get_class() {
            return il2cpp::get_class<app::RemoteActivationAttribute__Class>(type_info(), "System.Runtime.Remoting.Activation", "RemoteActivationAttribute");
        }
        inline app::RemoteActivationAttribute* create() {
            return il2cpp::create_object<app::RemoteActivationAttribute>(get_class());
        }
    } // namespace RemoteActivationAttribute
} // namespace app::classes::types

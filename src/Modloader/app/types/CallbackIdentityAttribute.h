#pragma once
#include <Modloader/app/structs/CallbackIdentityAttribute.h>
#include <Modloader/app/structs/CallbackIdentityAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallbackIdentityAttribute {
        inline app::CallbackIdentityAttribute__Class** type_info() {
            static app::CallbackIdentityAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CallbackIdentityAttribute__Class**)(modloader::win::memory::resolve_rva(0x04787358));
            }
            return cache;
        }
        inline app::CallbackIdentityAttribute__Class* get_class() {
            return il2cpp::get_class<app::CallbackIdentityAttribute__Class>(type_info(), "Steamworks", "CallbackIdentityAttribute");
        }
        inline app::CallbackIdentityAttribute* create() {
            return il2cpp::create_object<app::CallbackIdentityAttribute>(get_class());
        }
    } // namespace CallbackIdentityAttribute
} // namespace app::classes::types

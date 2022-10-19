#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CallbackIdentityAttribute {
        inline app::CallbackIdentityAttribute__Class** type_info = (app::CallbackIdentityAttribute__Class**)(modloader::win::memory::resolve_rva(0x04787358));
        inline app::CallbackIdentityAttribute__Class* get_class() {
            return il2cpp::get_class<app::CallbackIdentityAttribute__Class>(type_info, "Steamworks", "CallbackIdentityAttribute");
        }
        inline app::CallbackIdentityAttribute* create() {
            return il2cpp::create_object<app::CallbackIdentityAttribute>(get_class());
        }
    } // namespace CallbackIdentityAttribute
} // namespace app::classes::types

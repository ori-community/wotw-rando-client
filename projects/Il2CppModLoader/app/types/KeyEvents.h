#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyEvents {
        inline app::KeyEvents__Class** type_info = (app::KeyEvents__Class**)(modloader::win::memory::resolve_rva(0x047851C0));
        inline app::KeyEvents__Class* get_class() {
            return il2cpp::get_class<app::KeyEvents__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "KeyEvents");
        }
        inline app::KeyEvents* create() {
            return il2cpp::create_object<app::KeyEvents>(get_class());
        }
    } // namespace KeyEvents
} // namespace app::classes::types

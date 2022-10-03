#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoWorkEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DoWorkEventHandler__Class** type_info;
        inline app::DoWorkEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DoWorkEventHandler__Class>(type_info, "System.ComponentModel", "DoWorkEventHandler");
        }
        inline app::DoWorkEventHandler* create() {
            return il2cpp::create_object<app::DoWorkEventHandler>(get_class());
        }
    } // namespace DoWorkEventHandler
} // namespace app::classes::types

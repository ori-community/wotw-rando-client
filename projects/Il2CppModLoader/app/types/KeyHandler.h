#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyHandler__Class** type_info;
        inline app::KeyHandler__Class* get_class() {
            return il2cpp::get_class<app::KeyHandler__Class>(type_info, "Microsoft.Win32", "KeyHandler");
        }
        inline app::KeyHandler* create() {
            return il2cpp::create_object<app::KeyHandler>(get_class());
        }
    } // namespace KeyHandler
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MainThreadDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MainThreadDelegate__Class** type_info;
        inline app::MainThreadDelegate__Class* get_class() {
            return il2cpp::get_class<app::MainThreadDelegate__Class>(type_info, "Moon.Network.Web", "MainThreadDelegate");
        }
        inline app::MainThreadDelegate* create() {
            return il2cpp::create_object<app::MainThreadDelegate>(get_class());
        }
    } // namespace MainThreadDelegate
} // namespace app::classes::types

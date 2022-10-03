#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaitCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaitCallback__Class** type_info;
        inline app::WaitCallback__Class* get_class() {
            return il2cpp::get_class<app::WaitCallback__Class>(type_info, "System.Threading", "WaitCallback");
        }
        inline app::WaitCallback* create() {
            return il2cpp::create_object<app::WaitCallback>(get_class());
        }
    } // namespace WaitCallback
} // namespace app::classes::types

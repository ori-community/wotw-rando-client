#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThreadStart {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ThreadStart__Class** type_info;
        inline app::ThreadStart__Class* get_class() {
            return il2cpp::get_class<app::ThreadStart__Class>(type_info, "System.Threading", "ThreadStart");
        }
        inline app::ThreadStart* create() {
            return il2cpp::create_object<app::ThreadStart>(get_class());
        }
    } // namespace ThreadStart
} // namespace app::classes::types

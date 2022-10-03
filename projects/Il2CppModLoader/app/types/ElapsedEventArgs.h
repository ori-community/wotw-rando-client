#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ElapsedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ElapsedEventArgs__Class** type_info;
        inline app::ElapsedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ElapsedEventArgs__Class>(type_info, "System.Timers", "ElapsedEventArgs");
        }
        inline app::ElapsedEventArgs* create() {
            return il2cpp::create_object<app::ElapsedEventArgs>(get_class());
        }
    } // namespace ElapsedEventArgs
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrashContext_Callback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrashContext_Callback__Class** type_info;
        inline app::CrashContext_Callback__Class* get_class() {
            return il2cpp::get_nested_class<app::CrashContext_Callback__Class>(type_info, "Moon", "CrashContext", "Callback");
        }
        inline app::CrashContext_Callback* create() {
            return il2cpp::create_object<app::CrashContext_Callback>(get_class());
        }
    } // namespace CrashContext_Callback
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrashContext_Callback {
        inline app::CrashContext_Callback__Class** type_info = (app::CrashContext_Callback__Class**)(modloader::win::memory::resolve_rva(0x04723E40));
        inline app::CrashContext_Callback__Class* get_class() {
            return il2cpp::get_nested_class<app::CrashContext_Callback__Class>(type_info, "Moon", "CrashContext", "Callback");
        }
        inline app::CrashContext_Callback* create() {
            return il2cpp::create_object<app::CrashContext_Callback>(get_class());
        }
    } // namespace CrashContext_Callback
} // namespace app::classes::types

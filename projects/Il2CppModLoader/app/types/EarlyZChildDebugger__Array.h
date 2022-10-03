#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyZChildDebugger__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EarlyZChildDebugger__Array__Class** type_info;
        inline app::EarlyZChildDebugger__Array__Class* get_class() {
            return il2cpp::get_class<app::EarlyZChildDebugger__Array__Class>(type_info, "Moon.Rendering", "EarlyZChildDebugger[]");
        }
        inline app::EarlyZChildDebugger__Array* create() {
            return il2cpp::create_object<app::EarlyZChildDebugger__Array>(get_class());
        }
    } // namespace EarlyZChildDebugger__Array
} // namespace app::classes::types

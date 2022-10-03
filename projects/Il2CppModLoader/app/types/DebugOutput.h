#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugOutput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugOutput__Class** type_info;
        inline app::DebugOutput__Class* get_class() {
            return il2cpp::get_class<app::DebugOutput__Class>(type_info, "", "DebugOutput");
        }
        inline app::DebugOutput* create() {
            return il2cpp::create_object<app::DebugOutput>(get_class());
        }
    } // namespace DebugOutput
} // namespace app::classes::types

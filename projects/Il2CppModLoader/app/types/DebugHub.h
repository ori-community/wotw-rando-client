#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugHub {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugHub__Class** type_info;
        inline app::DebugHub__Class* get_class() {
            return il2cpp::get_class<app::DebugHub__Class>(type_info, "", "DebugHub");
        }
        inline app::DebugHub* create() {
            return il2cpp::create_object<app::DebugHub>(get_class());
        }
    } // namespace DebugHub
} // namespace app::classes::types

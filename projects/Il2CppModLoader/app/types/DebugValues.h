#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugValues {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugValues__Class** type_info;
        inline app::DebugValues__Class* get_class() {
            return il2cpp::get_class<app::DebugValues__Class>(type_info, "Game", "DebugValues");
        }
        inline app::DebugValues* create() {
            return il2cpp::create_object<app::DebugValues>(get_class());
        }
    } // namespace DebugValues
} // namespace app::classes::types

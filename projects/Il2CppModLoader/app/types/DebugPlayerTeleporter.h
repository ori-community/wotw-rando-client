#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugPlayerTeleporter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugPlayerTeleporter__Class** type_info;
        inline app::DebugPlayerTeleporter__Class* get_class() {
            return il2cpp::get_class<app::DebugPlayerTeleporter__Class>(type_info, "", "DebugPlayerTeleporter");
        }
        inline app::DebugPlayerTeleporter* create() {
            return il2cpp::create_object<app::DebugPlayerTeleporter>(get_class());
        }
    } // namespace DebugPlayerTeleporter
} // namespace app::classes::types

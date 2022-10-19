#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugPlayerTeleporter {
        inline app::DebugPlayerTeleporter__Class** type_info = (app::DebugPlayerTeleporter__Class**)(modloader::win::memory::resolve_rva(0x0474A4A0));
        inline app::DebugPlayerTeleporter__Class* get_class() {
            return il2cpp::get_class<app::DebugPlayerTeleporter__Class>(type_info, "", "DebugPlayerTeleporter");
        }
        inline app::DebugPlayerTeleporter* create() {
            return il2cpp::create_object<app::DebugPlayerTeleporter>(get_class());
        }
    } // namespace DebugPlayerTeleporter
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebugValues {
        inline app::DebugValues__Class** type_info = (app::DebugValues__Class**)(modloader::win::memory::resolve_rva(0x0478BBE0));
        inline app::DebugValues__Class* get_class() {
            return il2cpp::get_class<app::DebugValues__Class>(type_info, "Game", "DebugValues");
        }
        inline app::DebugValues* create() {
            return il2cpp::create_object<app::DebugValues>(get_class());
        }
    } // namespace DebugValues
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LowLevelComparer {
        inline app::LowLevelComparer__Class** type_info = (app::LowLevelComparer__Class**)(modloader::win::memory::resolve_rva(0x047087B0));
        inline app::LowLevelComparer__Class* get_class() {
            return il2cpp::get_class<app::LowLevelComparer__Class>(type_info, "System.Collections", "LowLevelComparer");
        }
        inline app::LowLevelComparer* create() {
            return il2cpp::create_object<app::LowLevelComparer>(get_class());
        }
    } // namespace LowLevelComparer
} // namespace app::classes::types

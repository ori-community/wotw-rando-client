#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LowLevelComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LowLevelComparer__Class** type_info;
        inline app::LowLevelComparer__Class* get_class() {
            return il2cpp::get_class<app::LowLevelComparer__Class>(type_info, "System.Collections", "LowLevelComparer");
        }
        inline app::LowLevelComparer* create() {
            return il2cpp::create_object<app::LowLevelComparer>(get_class());
        }
    } // namespace LowLevelComparer
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompatibleComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompatibleComparer__Class** type_info;
        inline app::CompatibleComparer__Class* get_class() {
            return il2cpp::get_class<app::CompatibleComparer__Class>(type_info, "System.Collections", "CompatibleComparer");
        }
        inline app::CompatibleComparer* create() {
            return il2cpp::create_object<app::CompatibleComparer>(get_class());
        }
    } // namespace CompatibleComparer
} // namespace app::classes::types

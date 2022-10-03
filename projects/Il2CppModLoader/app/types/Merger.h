#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Merger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Merger__Class** type_info;
        inline app::Merger__Class* get_class() {
            return il2cpp::get_class<app::Merger__Class>(type_info, "System.Data", "Merger");
        }
        inline app::Merger* create() {
            return il2cpp::create_object<app::Merger>(get_class());
        }
    } // namespace Merger
} // namespace app::classes::types

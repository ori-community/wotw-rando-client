#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VisualLog {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VisualLog__Class** type_info;
        inline app::VisualLog__Class* get_class() {
            return il2cpp::get_class<app::VisualLog__Class>(type_info, "", "VisualLog");
        }
        inline app::VisualLog* create() {
            return il2cpp::create_object<app::VisualLog>(get_class());
        }
    } // namespace VisualLog
} // namespace app::classes::types

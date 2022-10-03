#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoubleDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DoubleDebugMenuItem__Class** type_info;
        inline app::DoubleDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::DoubleDebugMenuItem__Class>(type_info, "", "DoubleDebugMenuItem");
        }
        inline app::DoubleDebugMenuItem* create() {
            return il2cpp::create_object<app::DoubleDebugMenuItem>(get_class());
        }
    } // namespace DoubleDebugMenuItem
} // namespace app::classes::types

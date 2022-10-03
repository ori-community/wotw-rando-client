#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FloatDebugMenuItem__Class** type_info;
        inline app::FloatDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::FloatDebugMenuItem__Class>(type_info, "", "FloatDebugMenuItem");
        }
        inline app::FloatDebugMenuItem* create() {
            return il2cpp::create_object<app::FloatDebugMenuItem>(get_class());
        }
    } // namespace FloatDebugMenuItem
} // namespace app::classes::types

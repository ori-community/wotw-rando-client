#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Trail {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Trail__Class** type_info;
        inline app::Trail__Class* get_class() {
            return il2cpp::get_class<app::Trail__Class>(type_info, "Moon", "Trail");
        }
        inline app::Trail* create() {
            return il2cpp::create_object<app::Trail>(get_class());
        }
    } // namespace Trail
} // namespace app::classes::types

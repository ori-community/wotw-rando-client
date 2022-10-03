#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Warning {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Warning__Class** type_info;
        inline app::Warning__Class* get_class() {
            return il2cpp::get_class<app::Warning__Class>(type_info, "RootMotion", "Warning");
        }
        inline app::Warning* create() {
            return il2cpp::create_object<app::Warning>(get_class());
        }
    } // namespace Warning
} // namespace app::classes::types

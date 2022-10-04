#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITweenLerpInputProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITweenLerpInputProvider__Class** type_info;
        inline app::ITweenLerpInputProvider__Class* get_class() {
            return il2cpp::get_class<app::ITweenLerpInputProvider__Class>(type_info, "Moon", "ITweenLerpInputProvider");
        }
        inline app::ITweenLerpInputProvider* create() {
            return il2cpp::create_object<app::ITweenLerpInputProvider>(get_class());
        }
    } // namespace ITweenLerpInputProvider
} // namespace app::classes::types

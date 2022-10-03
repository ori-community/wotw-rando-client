#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformingFXFunctionality {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlatformingFXFunctionality__Class** type_info;
        inline app::PlatformingFXFunctionality__Class* get_class() {
            return il2cpp::get_class<app::PlatformingFXFunctionality__Class>(type_info, "", "PlatformingFXFunctionality");
        }
        inline app::PlatformingFXFunctionality* create() {
            return il2cpp::create_object<app::PlatformingFXFunctionality>(get_class());
        }
    } // namespace PlatformingFXFunctionality
} // namespace app::classes::types

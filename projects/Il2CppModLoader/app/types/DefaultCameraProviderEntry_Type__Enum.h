#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultCameraProviderEntry_Type__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultCameraProviderEntry_Type__Enum__Class** type_info;
        inline app::DefaultCameraProviderEntry_Type__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultCameraProviderEntry_Type__Enum__Class>(type_info, "", "DefaultCameraProviderEntry", "Type");
        }
        inline app::DefaultCameraProviderEntry_Type__Enum* create() {
            return il2cpp::create_object<app::DefaultCameraProviderEntry_Type__Enum>(get_class());
        }
    } // namespace DefaultCameraProviderEntry_Type__Enum
} // namespace app::classes::types

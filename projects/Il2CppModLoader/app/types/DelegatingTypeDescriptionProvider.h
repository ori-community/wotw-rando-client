#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DelegatingTypeDescriptionProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DelegatingTypeDescriptionProvider__Class** type_info;
        inline app::DelegatingTypeDescriptionProvider__Class* get_class() {
            return il2cpp::get_class<app::DelegatingTypeDescriptionProvider__Class>(type_info, "System.ComponentModel", "DelegatingTypeDescriptionProvider");
        }
        inline app::DelegatingTypeDescriptionProvider* create() {
            return il2cpp::create_object<app::DelegatingTypeDescriptionProvider>(get_class());
        }
    } // namespace DelegatingTypeDescriptionProvider
} // namespace app::classes::types

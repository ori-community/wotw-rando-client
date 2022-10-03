#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholder_BaseEntityPlaceholderSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class** type_info;
        inline app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class>(type_info, "", "EntityPlaceholder", "BaseEntityPlaceholderSettings");
        }
        inline app::EntityPlaceholder_BaseEntityPlaceholderSettings* create() {
            return il2cpp::create_object<app::EntityPlaceholder_BaseEntityPlaceholderSettings>(get_class());
        }
    } // namespace EntityPlaceholder_BaseEntityPlaceholderSettings
} // namespace app::classes::types

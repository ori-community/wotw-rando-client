#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityPlaceholder_BaseEntityPlaceholderSettings {
        inline app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class** type_info = (app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class**)(modloader::win::memory::resolve_rva(0x0476F568));
        inline app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class>(type_info, "", "EntityPlaceholder", "BaseEntityPlaceholderSettings");
        }
        inline app::EntityPlaceholder_BaseEntityPlaceholderSettings* create() {
            return il2cpp::create_object<app::EntityPlaceholder_BaseEntityPlaceholderSettings>(get_class());
        }
    } // namespace EntityPlaceholder_BaseEntityPlaceholderSettings
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/EntityPlaceholder_BaseEntityPlaceholderSettings.h>
#include <Modloader/app/structs/EntityPlaceholder_BaseEntityPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholder_BaseEntityPlaceholderSettings {
        inline app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class** type_info() {
            static app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class**)(modloader::win::memory::resolve_rva(0x0476F568));
            }
            return cache;
        }
        inline app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholder_BaseEntityPlaceholderSettings__Class>(type_info(), "", "EntityPlaceholder", "BaseEntityPlaceholderSettings");
        }
        inline app::EntityPlaceholder_BaseEntityPlaceholderSettings* create() {
            return il2cpp::create_object<app::EntityPlaceholder_BaseEntityPlaceholderSettings>(get_class());
        }
    } // namespace EntityPlaceholder_BaseEntityPlaceholderSettings
} // namespace app::classes::types

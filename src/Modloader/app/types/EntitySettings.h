#pragma once
#include <Modloader/app/structs/EntitySettings.h>
#include <Modloader/app/structs/EntitySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntitySettings {
        inline app::EntitySettings__Class** type_info() {
            static app::EntitySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntitySettings__Class**)(modloader::win::memory::resolve_rva(0x0472B7B0));
            }
            return cache;
        }
        inline app::EntitySettings__Class* get_class() {
            return il2cpp::get_class<app::EntitySettings__Class>(type_info(), "Moon", "EntitySettings");
        }
        inline app::EntitySettings* create() {
            return il2cpp::create_object<app::EntitySettings>(get_class());
        }
    } // namespace EntitySettings
} // namespace app::classes::types

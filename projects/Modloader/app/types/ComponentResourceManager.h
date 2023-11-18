#pragma once
#include <Modloader/app/structs/ComponentResourceManager.h>
#include <Modloader/app/structs/ComponentResourceManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComponentResourceManager {
        inline app::ComponentResourceManager__Class** type_info() {
            static app::ComponentResourceManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComponentResourceManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComponentResourceManager__Class* get_class() {
            return il2cpp::get_class<app::ComponentResourceManager__Class>(type_info(), "System.ComponentModel", "ComponentResourceManager");
        }
        inline app::ComponentResourceManager* create() {
            return il2cpp::create_object<app::ComponentResourceManager>(get_class());
        }
    } // namespace ComponentResourceManager
} // namespace app::classes::types

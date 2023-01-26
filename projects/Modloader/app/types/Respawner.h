#pragma once
#include <Modloader/app/structs/Respawner.h>
#include <Modloader/app/structs/Respawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Respawner {
        inline app::Respawner__Class** type_info() {
            static app::Respawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Respawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Respawner__Class* get_class() {
            return il2cpp::get_class<app::Respawner__Class>(type_info(), "", "Respawner");
        }
        inline app::Respawner* create() {
            return il2cpp::create_object<app::Respawner>(get_class());
        }
    } // namespace Respawner
} // namespace app::classes::types

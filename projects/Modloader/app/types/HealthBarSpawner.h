#pragma once
#include <Modloader/app/structs/HealthBarSpawner.h>
#include <Modloader/app/structs/HealthBarSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HealthBarSpawner {
        inline app::HealthBarSpawner__Class** type_info() {
            static app::HealthBarSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HealthBarSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HealthBarSpawner__Class* get_class() {
            return il2cpp::get_class<app::HealthBarSpawner__Class>(type_info(), "", "HealthBarSpawner");
        }
        inline app::HealthBarSpawner* create() {
            return il2cpp::create_object<app::HealthBarSpawner>(get_class());
        }
    } // namespace HealthBarSpawner
} // namespace app::classes::types

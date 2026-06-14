#pragma once
#include <Modloader/app/structs/DamageTextSpawner.h>
#include <Modloader/app/structs/DamageTextSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageTextSpawner {
        inline app::DamageTextSpawner__Class** type_info() {
            static app::DamageTextSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageTextSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageTextSpawner__Class* get_class() {
            return il2cpp::get_class<app::DamageTextSpawner__Class>(type_info(), "", "DamageTextSpawner");
        }
        inline app::DamageTextSpawner* create() {
            return il2cpp::create_object<app::DamageTextSpawner>(get_class());
        }
    } // namespace DamageTextSpawner
} // namespace app::classes::types

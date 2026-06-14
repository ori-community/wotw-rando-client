#pragma once
#include <Modloader/app/structs/ProjectileDamageDealer.h>
#include <Modloader/app/structs/ProjectileDamageDealer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProjectileDamageDealer {
        inline app::ProjectileDamageDealer__Class** type_info() {
            static app::ProjectileDamageDealer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProjectileDamageDealer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProjectileDamageDealer__Class* get_class() {
            return il2cpp::get_class<app::ProjectileDamageDealer__Class>(type_info(), "", "ProjectileDamageDealer");
        }
        inline app::ProjectileDamageDealer* create() {
            return il2cpp::create_object<app::ProjectileDamageDealer>(get_class());
        }
    } // namespace ProjectileDamageDealer
} // namespace app::classes::types

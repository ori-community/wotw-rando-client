#pragma once
#include <Modloader/app/structs/ElectricSlugEntity.h>
#include <Modloader/app/structs/ElectricSlugEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ElectricSlugEntity {
        inline app::ElectricSlugEntity__Class** type_info() {
            static app::ElectricSlugEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ElectricSlugEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ElectricSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::ElectricSlugEntity__Class>(type_info(), "", "ElectricSlugEntity");
        }
        inline app::ElectricSlugEntity* create() {
            return il2cpp::create_object<app::ElectricSlugEntity>(get_class());
        }
    } // namespace ElectricSlugEntity
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/DiscoverAreasEntity.h>
#include <Modloader/app/structs/DiscoverAreasEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DiscoverAreasEntity {
        inline app::DiscoverAreasEntity__Class** type_info() {
            static app::DiscoverAreasEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DiscoverAreasEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DiscoverAreasEntity__Class* get_class() {
            return il2cpp::get_class<app::DiscoverAreasEntity__Class>(type_info(), "Moon.Timeline", "DiscoverAreasEntity");
        }
        inline app::DiscoverAreasEntity* create() {
            return il2cpp::create_object<app::DiscoverAreasEntity>(get_class());
        }
    } // namespace DiscoverAreasEntity
} // namespace app::classes::types

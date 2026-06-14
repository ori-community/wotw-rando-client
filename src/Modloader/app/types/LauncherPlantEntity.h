#pragma once
#include <Modloader/app/structs/LauncherPlantEntity.h>
#include <Modloader/app/structs/LauncherPlantEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LauncherPlantEntity {
        inline app::LauncherPlantEntity__Class** type_info() {
            static app::LauncherPlantEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LauncherPlantEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LauncherPlantEntity__Class* get_class() {
            return il2cpp::get_class<app::LauncherPlantEntity__Class>(type_info(), "", "LauncherPlantEntity");
        }
        inline app::LauncherPlantEntity* create() {
            return il2cpp::create_object<app::LauncherPlantEntity>(get_class());
        }
    } // namespace LauncherPlantEntity
} // namespace app::classes::types

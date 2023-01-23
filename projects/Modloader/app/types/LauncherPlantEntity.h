#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LauncherPlantEntity__Class.h>
#include <Modloader/app/structs/LauncherPlantEntity.h>

namespace app::classes::types {
    namespace LauncherPlantEntity {
        namespace {
            inline app::LauncherPlantEntity__Class* type_info_ref = nullptr;
        }
        inline app::LauncherPlantEntity__Class** type_info = &type_info_ref;
        inline app::LauncherPlantEntity__Class* get_class() {
            return il2cpp::get_class<app::LauncherPlantEntity__Class>(type_info, "", "LauncherPlantEntity");
        }
        inline app::LauncherPlantEntity* create() {
            return il2cpp::create_object<app::LauncherPlantEntity>(get_class());
        }
    } // namespace LauncherPlantEntity
} // namespace app::classes::types

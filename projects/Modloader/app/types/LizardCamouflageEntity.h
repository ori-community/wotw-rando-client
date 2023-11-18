#pragma once
#include <Modloader/app/structs/LizardCamouflageEntity.h>
#include <Modloader/app/structs/LizardCamouflageEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardCamouflageEntity {
        inline app::LizardCamouflageEntity__Class** type_info() {
            static app::LizardCamouflageEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardCamouflageEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardCamouflageEntity__Class* get_class() {
            return il2cpp::get_class<app::LizardCamouflageEntity__Class>(type_info(), "", "LizardCamouflageEntity");
        }
        inline app::LizardCamouflageEntity* create() {
            return il2cpp::create_object<app::LizardCamouflageEntity>(get_class());
        }
    } // namespace LizardCamouflageEntity
} // namespace app::classes::types

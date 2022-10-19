#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LizardCamouflageEntity {
        namespace {
            inline app::LizardCamouflageEntity__Class* type_info_ref = nullptr;
        }
        inline app::LizardCamouflageEntity__Class** type_info = &type_info_ref;
        inline app::LizardCamouflageEntity__Class* get_class() {
            return il2cpp::get_class<app::LizardCamouflageEntity__Class>(type_info, "", "LizardCamouflageEntity");
        }
        inline app::LizardCamouflageEntity* create() {
            return il2cpp::create_object<app::LizardCamouflageEntity>(get_class());
        }
    } // namespace LizardCamouflageEntity
} // namespace app::classes::types

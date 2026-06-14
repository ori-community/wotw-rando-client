#pragma once
#include <Modloader/app/structs/MinerThrowAttackSettings.h>
#include <Modloader/app/structs/MinerThrowAttackSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerThrowAttackSettings {
        inline app::MinerThrowAttackSettings__Class** type_info() {
            static app::MinerThrowAttackSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerThrowAttackSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerThrowAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::MinerThrowAttackSettings__Class>(type_info(), "", "MinerThrowAttackSettings");
        }
        inline app::MinerThrowAttackSettings* create() {
            return il2cpp::create_object<app::MinerThrowAttackSettings>(get_class());
        }
    } // namespace MinerThrowAttackSettings
} // namespace app::classes::types

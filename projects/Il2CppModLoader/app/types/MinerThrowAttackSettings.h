#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerThrowAttackSettings {
        namespace {
            app::MinerThrowAttackSettings__Class* type_info_ref = nullptr;
        }
        app::MinerThrowAttackSettings__Class** type_info = &type_info_ref;
        inline app::MinerThrowAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::MinerThrowAttackSettings__Class>(type_info, "", "MinerThrowAttackSettings");
        }
        inline app::MinerThrowAttackSettings* create() {
            return il2cpp::create_object<app::MinerThrowAttackSettings>(get_class());
        }
    } // namespace MinerThrowAttackSettings
} // namespace app::classes::types

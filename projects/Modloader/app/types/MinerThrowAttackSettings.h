#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MinerThrowAttackSettings__Class.h>
#include <Modloader/app/structs/MinerThrowAttackSettings.h>

namespace app::classes::types {
    namespace MinerThrowAttackSettings {
        namespace {
            inline app::MinerThrowAttackSettings__Class* type_info_ref = nullptr;
        }
        inline app::MinerThrowAttackSettings__Class** type_info = &type_info_ref;
        inline app::MinerThrowAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::MinerThrowAttackSettings__Class>(type_info, "", "MinerThrowAttackSettings");
        }
        inline app::MinerThrowAttackSettings* create() {
            return il2cpp::create_object<app::MinerThrowAttackSettings>(get_class());
        }
    } // namespace MinerThrowAttackSettings
} // namespace app::classes::types

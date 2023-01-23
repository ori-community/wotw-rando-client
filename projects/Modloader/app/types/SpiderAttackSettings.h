#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderAttackSettings__Class.h>
#include <Modloader/app/structs/SpiderAttackSettings.h>

namespace app::classes::types {
    namespace SpiderAttackSettings {
        namespace {
            inline app::SpiderAttackSettings__Class* type_info_ref = nullptr;
        }
        inline app::SpiderAttackSettings__Class** type_info = &type_info_ref;
        inline app::SpiderAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::SpiderAttackSettings__Class>(type_info, "", "SpiderAttackSettings");
        }
        inline app::SpiderAttackSettings* create() {
            return il2cpp::create_object<app::SpiderAttackSettings>(get_class());
        }
    } // namespace SpiderAttackSettings
} // namespace app::classes::types

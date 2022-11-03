#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CloudAttackSettings {
        namespace {
            inline app::CloudAttackSettings__Class* type_info_ref = nullptr;
        }
        inline app::CloudAttackSettings__Class** type_info = &type_info_ref;
        inline app::CloudAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::CloudAttackSettings__Class>(type_info, "", "CloudAttackSettings");
        }
        inline app::CloudAttackSettings* create() {
            return il2cpp::create_object<app::CloudAttackSettings>(get_class());
        }
    } // namespace CloudAttackSettings
} // namespace app::classes::types

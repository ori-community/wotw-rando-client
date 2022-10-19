#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CanUseBackupsCondition {
        namespace {
            inline app::CanUseBackupsCondition__Class* type_info_ref = nullptr;
        }
        inline app::CanUseBackupsCondition__Class** type_info = &type_info_ref;
        inline app::CanUseBackupsCondition__Class* get_class() {
            return il2cpp::get_class<app::CanUseBackupsCondition__Class>(type_info, "", "CanUseBackupsCondition");
        }
        inline app::CanUseBackupsCondition* create() {
            return il2cpp::create_object<app::CanUseBackupsCondition>(get_class());
        }
    } // namespace CanUseBackupsCondition
} // namespace app::classes::types

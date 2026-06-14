#pragma once
#include <Modloader/app/structs/CanUseBackupsCondition.h>
#include <Modloader/app/structs/CanUseBackupsCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanUseBackupsCondition {
        inline app::CanUseBackupsCondition__Class** type_info() {
            static app::CanUseBackupsCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanUseBackupsCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanUseBackupsCondition__Class* get_class() {
            return il2cpp::get_class<app::CanUseBackupsCondition__Class>(type_info(), "", "CanUseBackupsCondition");
        }
        inline app::CanUseBackupsCondition* create() {
            return il2cpp::create_object<app::CanUseBackupsCondition>(get_class());
        }
    } // namespace CanUseBackupsCondition
} // namespace app::classes::types

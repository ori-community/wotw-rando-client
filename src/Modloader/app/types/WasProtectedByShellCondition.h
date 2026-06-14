#pragma once
#include <Modloader/app/structs/WasProtectedByShellCondition.h>
#include <Modloader/app/structs/WasProtectedByShellCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WasProtectedByShellCondition {
        inline app::WasProtectedByShellCondition__Class** type_info() {
            static app::WasProtectedByShellCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WasProtectedByShellCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WasProtectedByShellCondition__Class* get_class() {
            return il2cpp::get_class<app::WasProtectedByShellCondition__Class>(type_info(), "", "WasProtectedByShellCondition");
        }
        inline app::WasProtectedByShellCondition* create() {
            return il2cpp::create_object<app::WasProtectedByShellCondition>(get_class());
        }
    } // namespace WasProtectedByShellCondition
} // namespace app::classes::types

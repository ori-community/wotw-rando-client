#pragma once
#include <Modloader/app/structs/ProtectedByShellCondition.h>
#include <Modloader/app/structs/ProtectedByShellCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProtectedByShellCondition {
        inline app::ProtectedByShellCondition__Class** type_info() {
            static app::ProtectedByShellCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProtectedByShellCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProtectedByShellCondition__Class* get_class() {
            return il2cpp::get_class<app::ProtectedByShellCondition__Class>(type_info(), "", "ProtectedByShellCondition");
        }
        inline app::ProtectedByShellCondition* create() {
            return il2cpp::create_object<app::ProtectedByShellCondition>(get_class());
        }
    } // namespace ProtectedByShellCondition
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/TrigonometricIK.h>
#include <Modloader/app/structs/TrigonometricIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrigonometricIK {
        inline app::TrigonometricIK__Class** type_info() {
            static app::TrigonometricIK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrigonometricIK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrigonometricIK__Class* get_class() {
            return il2cpp::get_class<app::TrigonometricIK__Class>(type_info(), "RootMotion.FinalIK", "TrigonometricIK");
        }
        inline app::TrigonometricIK* create() {
            return il2cpp::create_object<app::TrigonometricIK>(get_class());
        }
    } // namespace TrigonometricIK
} // namespace app::classes::types

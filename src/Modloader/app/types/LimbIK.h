#pragma once
#include <Modloader/app/structs/LimbIK.h>
#include <Modloader/app/structs/LimbIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LimbIK {
        inline app::LimbIK__Class** type_info() {
            static app::LimbIK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LimbIK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LimbIK__Class* get_class() {
            return il2cpp::get_class<app::LimbIK__Class>(type_info(), "RootMotion.FinalIK", "LimbIK");
        }
        inline app::LimbIK* create() {
            return il2cpp::create_object<app::LimbIK>(get_class());
        }
    } // namespace LimbIK
} // namespace app::classes::types

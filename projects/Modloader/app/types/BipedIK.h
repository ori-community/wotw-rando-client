#pragma once
#include <Modloader/app/structs/BipedIK.h>
#include <Modloader/app/structs/BipedIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BipedIK {
        inline app::BipedIK__Class** type_info() {
            static app::BipedIK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BipedIK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BipedIK__Class* get_class() {
            return il2cpp::get_class<app::BipedIK__Class>(type_info(), "RootMotion.FinalIK", "BipedIK");
        }
        inline app::BipedIK* create() {
            return il2cpp::create_object<app::BipedIK>(get_class());
        }
    } // namespace BipedIK
} // namespace app::classes::types

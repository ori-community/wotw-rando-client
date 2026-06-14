#pragma once
#include <Modloader/app/structs/LookAtIK.h>
#include <Modloader/app/structs/LookAtIK__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LookAtIK {
        inline app::LookAtIK__Class** type_info() {
            static app::LookAtIK__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LookAtIK__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LookAtIK__Class* get_class() {
            return il2cpp::get_class<app::LookAtIK__Class>(type_info(), "RootMotion.FinalIK", "LookAtIK");
        }
        inline app::LookAtIK* create() {
            return il2cpp::create_object<app::LookAtIK>(get_class());
        }
    } // namespace LookAtIK
} // namespace app::classes::types

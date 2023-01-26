#pragma once
#include <Modloader/app/structs/TargetMatch.h>
#include <Modloader/app/structs/TargetMatch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetMatch {
        inline app::TargetMatch__Class** type_info() {
            static app::TargetMatch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetMatch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetMatch__Class* get_class() {
            return il2cpp::get_class<app::TargetMatch__Class>(type_info(), "", "TargetMatch");
        }
        inline app::TargetMatch* create() {
            return il2cpp::create_object<app::TargetMatch>(get_class());
        }
    } // namespace TargetMatch
} // namespace app::classes::types

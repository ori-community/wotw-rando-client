#pragma once
#include <Modloader/app/structs/TargetIndicator.h>
#include <Modloader/app/structs/TargetIndicator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetIndicator {
        inline app::TargetIndicator__Class** type_info() {
            static app::TargetIndicator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetIndicator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetIndicator__Class* get_class() {
            return il2cpp::get_class<app::TargetIndicator__Class>(type_info(), "", "TargetIndicator");
        }
        inline app::TargetIndicator* create() {
            return il2cpp::create_object<app::TargetIndicator>(get_class());
        }
    } // namespace TargetIndicator
} // namespace app::classes::types

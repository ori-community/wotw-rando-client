#pragma once
#include <Modloader/app/structs/ReviewTargetChangesSerialization.h>
#include <Modloader/app/structs/ReviewTargetChangesSerialization__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReviewTargetChangesSerialization {
        inline app::ReviewTargetChangesSerialization__Class** type_info() {
            static app::ReviewTargetChangesSerialization__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReviewTargetChangesSerialization__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReviewTargetChangesSerialization__Class* get_class() {
            return il2cpp::get_class<app::ReviewTargetChangesSerialization__Class>(type_info(), "Moon.ReviewFramework", "ReviewTargetChangesSerialization");
        }
        inline app::ReviewTargetChangesSerialization* create() {
            return il2cpp::create_object<app::ReviewTargetChangesSerialization>(get_class());
        }
    } // namespace ReviewTargetChangesSerialization
} // namespace app::classes::types

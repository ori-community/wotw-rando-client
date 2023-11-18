#pragma once
#include <Modloader/app/structs/ReviewTargetMetadata__Array.h>
#include <Modloader/app/structs/ReviewTargetMetadata__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReviewTargetMetadata__Array {
        inline app::ReviewTargetMetadata__Array__Class** type_info() {
            static app::ReviewTargetMetadata__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReviewTargetMetadata__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReviewTargetMetadata__Array__Class* get_class() {
            return il2cpp::get_class<app::ReviewTargetMetadata__Array__Class>(type_info(), "Moon.ReviewFramework", "ReviewTargetMetadata[]");
        }
        inline app::ReviewTargetMetadata__Array* create() {
            return il2cpp::create_object<app::ReviewTargetMetadata__Array>(get_class());
        }
    } // namespace ReviewTargetMetadata__Array
} // namespace app::classes::types

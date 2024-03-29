#pragma once
#include <Modloader/app/structs/ReviewTargetMetadata.h>
#include <Modloader/app/structs/ReviewTargetMetadata__Array.h>
#include <Modloader/app/structs/ReviewTargetMetadata__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReviewTargetMetadata {
        inline app::ReviewTargetMetadata__Class** type_info() {
            static app::ReviewTargetMetadata__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReviewTargetMetadata__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReviewTargetMetadata__Class* get_class() {
            return il2cpp::get_class<app::ReviewTargetMetadata__Class>(type_info(), "Moon.ReviewFramework", "ReviewTargetMetadata");
        }
        inline app::ReviewTargetMetadata* create() {
            return il2cpp::create_object<app::ReviewTargetMetadata>(get_class());
        }
        inline app::ReviewTargetMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::ReviewTargetMetadata__Array>(get_class(), size);
        }
        inline app::ReviewTargetMetadata__Array* create_array(const std::vector<app::ReviewTargetMetadata*>& items) {
            return il2cpp::array_new<app::ReviewTargetMetadata__Array>(get_class(), items);
        }
    } // namespace ReviewTargetMetadata
} // namespace app::classes::types

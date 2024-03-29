#pragma once
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry.h>
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry__Array.h>
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry__Boxed.h>
#include <Modloader/app/structs/RuntimeGuidMapping_BucketEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeGuidMapping_BucketEntry {
        inline app::RuntimeGuidMapping_BucketEntry__Class** type_info() {
            static app::RuntimeGuidMapping_BucketEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeGuidMapping_BucketEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeGuidMapping_BucketEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeGuidMapping_BucketEntry__Class>(type_info(), "", "RuntimeGuidMapping", "BucketEntry");
        }
        inline app::RuntimeGuidMapping_BucketEntry* create() {
            return il2cpp::create_object<app::RuntimeGuidMapping_BucketEntry>(get_class());
        }
        inline app::RuntimeGuidMapping_BucketEntry__Boxed* box(app::RuntimeGuidMapping_BucketEntry value) {
            return il2cpp::box_value<app::RuntimeGuidMapping_BucketEntry__Boxed>(get_class(), value);
        }
        inline app::RuntimeGuidMapping_BucketEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeGuidMapping_BucketEntry__Array>(get_class(), size);
        }
        inline app::RuntimeGuidMapping_BucketEntry__Array* create_array(const std::vector<app::RuntimeGuidMapping_BucketEntry>& items) {
            return il2cpp::array_new<app::RuntimeGuidMapping_BucketEntry__Array>(get_class(), items);
        }
    } // namespace RuntimeGuidMapping_BucketEntry
} // namespace app::classes::types

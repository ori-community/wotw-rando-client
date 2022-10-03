#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeGuidMapping_BucketEntry {
        namespace {
            app::RuntimeGuidMapping_BucketEntry__Class* type_info_ref = nullptr;
        }
        app::RuntimeGuidMapping_BucketEntry__Class** type_info = &type_info_ref;
        inline app::RuntimeGuidMapping_BucketEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeGuidMapping_BucketEntry__Class>(type_info, "", "RuntimeGuidMapping", "BucketEntry");
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
    } // namespace RuntimeGuidMapping_BucketEntry
} // namespace app::classes::types

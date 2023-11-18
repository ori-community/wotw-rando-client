#pragma once
#include <Modloader/app/structs/RuntimeGuidMapping_CacheEntry__Array.h>
#include <Modloader/app/structs/RuntimeGuidMapping_CacheEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeGuidMapping_CacheEntry__Array {
        inline app::RuntimeGuidMapping_CacheEntry__Array__Class** type_info() {
            static app::RuntimeGuidMapping_CacheEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeGuidMapping_CacheEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeGuidMapping_CacheEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGuidMapping_CacheEntry__Array__Class>(type_info(), "", "RuntimeGuidMapping+CacheEntry[]");
        }
        inline app::RuntimeGuidMapping_CacheEntry__Array* create() {
            return il2cpp::create_object<app::RuntimeGuidMapping_CacheEntry__Array>(get_class());
        }
    } // namespace RuntimeGuidMapping_CacheEntry__Array
} // namespace app::classes::types

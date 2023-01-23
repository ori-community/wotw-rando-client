#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeGuidMapping_CacheEntry__Class.h>
#include <Modloader/app/structs/RuntimeGuidMapping_CacheEntry.h>
#include <Modloader/app/structs/RuntimeGuidMapping_CacheEntry__Boxed.h>
#include <Modloader/app/structs/RuntimeGuidMapping_CacheEntry__Array.h>

namespace app::classes::types {
    namespace RuntimeGuidMapping_CacheEntry {
        namespace {
            inline app::RuntimeGuidMapping_CacheEntry__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeGuidMapping_CacheEntry__Class** type_info = &type_info_ref;
        inline app::RuntimeGuidMapping_CacheEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeGuidMapping_CacheEntry__Class>(type_info, "", "RuntimeGuidMapping", "CacheEntry");
        }
        inline app::RuntimeGuidMapping_CacheEntry* create() {
            return il2cpp::create_object<app::RuntimeGuidMapping_CacheEntry>(get_class());
        }
        inline app::RuntimeGuidMapping_CacheEntry__Boxed* box(app::RuntimeGuidMapping_CacheEntry value) {
            return il2cpp::box_value<app::RuntimeGuidMapping_CacheEntry__Boxed>(get_class(), value);
        }
        inline app::RuntimeGuidMapping_CacheEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeGuidMapping_CacheEntry__Array>(get_class(), size);
        }
        inline app::RuntimeGuidMapping_CacheEntry__Array* create_array(const std::vector<app::RuntimeGuidMapping_CacheEntry>& items) {
            return il2cpp::array_new<app::RuntimeGuidMapping_CacheEntry__Array>(get_class(), items);
        }
    } // namespace RuntimeGuidMapping_CacheEntry
} // namespace app::classes::types

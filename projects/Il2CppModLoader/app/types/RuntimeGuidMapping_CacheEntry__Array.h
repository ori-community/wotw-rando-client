#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeGuidMapping_CacheEntry__Array {
        namespace {
            inline app::RuntimeGuidMapping_CacheEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeGuidMapping_CacheEntry__Array__Class** type_info = &type_info_ref;
        inline app::RuntimeGuidMapping_CacheEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGuidMapping_CacheEntry__Array__Class>(type_info, "", "RuntimeGuidMapping+CacheEntry[]");
        }
        inline app::RuntimeGuidMapping_CacheEntry__Array* create() {
            return il2cpp::create_object<app::RuntimeGuidMapping_CacheEntry__Array>(get_class());
        }
    } // namespace RuntimeGuidMapping_CacheEntry__Array
} // namespace app::classes::types

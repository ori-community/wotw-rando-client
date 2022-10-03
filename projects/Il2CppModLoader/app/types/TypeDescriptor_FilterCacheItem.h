#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_FilterCacheItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeDescriptor_FilterCacheItem__Class** type_info;
        inline app::TypeDescriptor_FilterCacheItem__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_FilterCacheItem__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "FilterCacheItem");
        }
        inline app::TypeDescriptor_FilterCacheItem* create() {
            return il2cpp::create_object<app::TypeDescriptor_FilterCacheItem>(get_class());
        }
    } // namespace TypeDescriptor_FilterCacheItem
} // namespace app::classes::types

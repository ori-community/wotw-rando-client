#pragma once
#include <Modloader/app/structs/TypeDescriptor_FilterCacheItem.h>
#include <Modloader/app/structs/TypeDescriptor_FilterCacheItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_FilterCacheItem {
        inline app::TypeDescriptor_FilterCacheItem__Class** type_info() {
            static app::TypeDescriptor_FilterCacheItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor_FilterCacheItem__Class**)(modloader::win::memory::resolve_rva(0x04790B80));
            }
            return cache;
        }
        inline app::TypeDescriptor_FilterCacheItem__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_FilterCacheItem__Class>(type_info(), "System.ComponentModel", "TypeDescriptor", "FilterCacheItem");
        }
        inline app::TypeDescriptor_FilterCacheItem* create() {
            return il2cpp::create_object<app::TypeDescriptor_FilterCacheItem>(get_class());
        }
    } // namespace TypeDescriptor_FilterCacheItem
} // namespace app::classes::types

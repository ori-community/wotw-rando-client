#pragma once
#include <Modloader/app/structs/TypeDescriptor_AttributeFilterCacheItem.h>
#include <Modloader/app/structs/TypeDescriptor_AttributeFilterCacheItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_AttributeFilterCacheItem {
        inline app::TypeDescriptor_AttributeFilterCacheItem__Class** type_info() {
            static app::TypeDescriptor_AttributeFilterCacheItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor_AttributeFilterCacheItem__Class**)(modloader::win::memory::resolve_rva(0x04730168));
            }
            return cache;
        }
        inline app::TypeDescriptor_AttributeFilterCacheItem__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_AttributeFilterCacheItem__Class>(type_info(), "System.ComponentModel", "TypeDescriptor", "AttributeFilterCacheItem");
        }
        inline app::TypeDescriptor_AttributeFilterCacheItem* create() {
            return il2cpp::create_object<app::TypeDescriptor_AttributeFilterCacheItem>(get_class());
        }
    } // namespace TypeDescriptor_AttributeFilterCacheItem
} // namespace app::classes::types

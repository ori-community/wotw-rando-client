#pragma once
#include <Modloader/app/structs/XsdCachingReader_CachingReaderState__Enum.h>
#include <Modloader/app/structs/XsdCachingReader_CachingReaderState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdCachingReader_CachingReaderState__Enum {
        inline app::XsdCachingReader_CachingReaderState__Enum__Class** type_info() {
            static app::XsdCachingReader_CachingReaderState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XsdCachingReader_CachingReaderState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XsdCachingReader_CachingReaderState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdCachingReader_CachingReaderState__Enum__Class>(type_info(), "System.Xml", "XsdCachingReader", "CachingReaderState");
        }
        inline app::XsdCachingReader_CachingReaderState__Enum* create() {
            return il2cpp::create_object<app::XsdCachingReader_CachingReaderState__Enum>(get_class());
        }
    } // namespace XsdCachingReader_CachingReaderState__Enum
} // namespace app::classes::types

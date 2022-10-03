#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdCachingReader_CachingReaderState__Enum {
        namespace {
            app::XsdCachingReader_CachingReaderState__Enum__Class* type_info_ref = nullptr;
        }
        app::XsdCachingReader_CachingReaderState__Enum__Class** type_info = &type_info_ref;
        inline app::XsdCachingReader_CachingReaderState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdCachingReader_CachingReaderState__Enum__Class>(type_info, "System.Xml", "XsdCachingReader", "CachingReaderState");
        }
        inline app::XsdCachingReader_CachingReaderState__Enum* create() {
            return il2cpp::create_object<app::XsdCachingReader_CachingReaderState__Enum>(get_class());
        }
    } // namespace XsdCachingReader_CachingReaderState__Enum
} // namespace app::classes::types

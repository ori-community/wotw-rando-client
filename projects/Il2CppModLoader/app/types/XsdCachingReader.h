#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdCachingReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdCachingReader__Class** type_info;
        inline app::XsdCachingReader__Class* get_class() {
            return il2cpp::get_class<app::XsdCachingReader__Class>(type_info, "System.Xml", "XsdCachingReader");
        }
        inline app::XsdCachingReader* create() {
            return il2cpp::create_object<app::XsdCachingReader>(get_class());
        }
    } // namespace XsdCachingReader
} // namespace app::classes::types

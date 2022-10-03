#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlCachedStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlCachedStream__Class** type_info;
        inline app::XmlCachedStream__Class* get_class() {
            return il2cpp::get_class<app::XmlCachedStream__Class>(type_info, "System.Xml", "XmlCachedStream");
        }
        inline app::XmlCachedStream* create() {
            return il2cpp::create_object<app::XmlCachedStream>(get_class());
        }
    } // namespace XmlCachedStream
} // namespace app::classes::types

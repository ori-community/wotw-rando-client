#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlRegisteredNonCachedStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlRegisteredNonCachedStream__Class** type_info;
        inline app::XmlRegisteredNonCachedStream__Class* get_class() {
            return il2cpp::get_class<app::XmlRegisteredNonCachedStream__Class>(type_info, "System.Xml", "XmlRegisteredNonCachedStream");
        }
        inline app::XmlRegisteredNonCachedStream* create() {
            return il2cpp::create_object<app::XmlRegisteredNonCachedStream>(get_class());
        }
    } // namespace XmlRegisteredNonCachedStream
} // namespace app::classes::types

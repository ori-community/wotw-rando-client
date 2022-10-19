#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlRegisteredNonCachedStream {
        inline app::XmlRegisteredNonCachedStream__Class** type_info = (app::XmlRegisteredNonCachedStream__Class**)(modloader::win::memory::resolve_rva(0x047035B0));
        inline app::XmlRegisteredNonCachedStream__Class* get_class() {
            return il2cpp::get_class<app::XmlRegisteredNonCachedStream__Class>(type_info, "System.Xml", "XmlRegisteredNonCachedStream");
        }
        inline app::XmlRegisteredNonCachedStream* create() {
            return il2cpp::create_object<app::XmlRegisteredNonCachedStream>(get_class());
        }
    } // namespace XmlRegisteredNonCachedStream
} // namespace app::classes::types

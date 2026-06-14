#pragma once
#include <Modloader/app/structs/XmlRegisteredNonCachedStream.h>
#include <Modloader/app/structs/XmlRegisteredNonCachedStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlRegisteredNonCachedStream {
        inline app::XmlRegisteredNonCachedStream__Class** type_info() {
            static app::XmlRegisteredNonCachedStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlRegisteredNonCachedStream__Class**)(modloader::win::memory::resolve_rva(0x047035B0));
            }
            return cache;
        }
        inline app::XmlRegisteredNonCachedStream__Class* get_class() {
            return il2cpp::get_class<app::XmlRegisteredNonCachedStream__Class>(type_info(), "System.Xml", "XmlRegisteredNonCachedStream");
        }
        inline app::XmlRegisteredNonCachedStream* create() {
            return il2cpp::create_object<app::XmlRegisteredNonCachedStream>(get_class());
        }
    } // namespace XmlRegisteredNonCachedStream
} // namespace app::classes::types

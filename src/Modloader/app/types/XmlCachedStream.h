#pragma once
#include <Modloader/app/structs/XmlCachedStream.h>
#include <Modloader/app/structs/XmlCachedStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlCachedStream {
        inline app::XmlCachedStream__Class** type_info() {
            static app::XmlCachedStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlCachedStream__Class**)(modloader::win::memory::resolve_rva(0x04715C30));
            }
            return cache;
        }
        inline app::XmlCachedStream__Class* get_class() {
            return il2cpp::get_class<app::XmlCachedStream__Class>(type_info(), "System.Xml", "XmlCachedStream");
        }
        inline app::XmlCachedStream* create() {
            return il2cpp::create_object<app::XmlCachedStream>(get_class());
        }
    } // namespace XmlCachedStream
} // namespace app::classes::types

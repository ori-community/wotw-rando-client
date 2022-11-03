#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlCachedStream {
        inline app::XmlCachedStream__Class** type_info = (app::XmlCachedStream__Class**)(modloader::win::memory::resolve_rva(0x04715C30));
        inline app::XmlCachedStream__Class* get_class() {
            return il2cpp::get_class<app::XmlCachedStream__Class>(type_info, "System.Xml", "XmlCachedStream");
        }
        inline app::XmlCachedStream* create() {
            return il2cpp::create_object<app::XmlCachedStream>(get_class());
        }
    } // namespace XmlCachedStream
} // namespace app::classes::types

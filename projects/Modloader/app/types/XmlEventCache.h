#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlEventCache {
        inline app::XmlEventCache__Class** type_info = (app::XmlEventCache__Class**)(modloader::win::memory::resolve_rva(0x04745A48));
        inline app::XmlEventCache__Class* get_class() {
            return il2cpp::get_class<app::XmlEventCache__Class>(type_info, "System.Xml", "XmlEventCache");
        }
        inline app::XmlEventCache* create() {
            return il2cpp::create_object<app::XmlEventCache>(get_class());
        }
    } // namespace XmlEventCache
} // namespace app::classes::types

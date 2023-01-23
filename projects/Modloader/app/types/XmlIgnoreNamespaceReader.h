#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlIgnoreNamespaceReader__Class.h>
#include <Modloader/app/structs/XmlIgnoreNamespaceReader.h>

namespace app::classes::types {
    namespace XmlIgnoreNamespaceReader {
        inline app::XmlIgnoreNamespaceReader__Class** type_info = (app::XmlIgnoreNamespaceReader__Class**)(modloader::win::memory::resolve_rva(0x04737418));
        inline app::XmlIgnoreNamespaceReader__Class* get_class() {
            return il2cpp::get_class<app::XmlIgnoreNamespaceReader__Class>(type_info, "System.Data", "XmlIgnoreNamespaceReader");
        }
        inline app::XmlIgnoreNamespaceReader* create() {
            return il2cpp::create_object<app::XmlIgnoreNamespaceReader>(get_class());
        }
    } // namespace XmlIgnoreNamespaceReader
} // namespace app::classes::types

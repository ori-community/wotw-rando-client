#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlImplementation__Class.h>
#include <Modloader/app/structs/XmlImplementation.h>

namespace app::classes::types {
    namespace XmlImplementation {
        inline app::XmlImplementation__Class** type_info = (app::XmlImplementation__Class**)(modloader::win::memory::resolve_rva(0x0476BDC8));
        inline app::XmlImplementation__Class* get_class() {
            return il2cpp::get_class<app::XmlImplementation__Class>(type_info, "System.Xml", "XmlImplementation");
        }
        inline app::XmlImplementation* create() {
            return il2cpp::create_object<app::XmlImplementation>(get_class());
        }
    } // namespace XmlImplementation
} // namespace app::classes::types

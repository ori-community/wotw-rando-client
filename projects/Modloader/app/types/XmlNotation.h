#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlNotation__Class.h>
#include <Modloader/app/structs/XmlNotation.h>

namespace app::classes::types {
    namespace XmlNotation {
        inline app::XmlNotation__Class** type_info = (app::XmlNotation__Class**)(modloader::win::memory::resolve_rva(0x04708C20));
        inline app::XmlNotation__Class* get_class() {
            return il2cpp::get_class<app::XmlNotation__Class>(type_info, "System.Xml", "XmlNotation");
        }
        inline app::XmlNotation* create() {
            return il2cpp::create_object<app::XmlNotation>(get_class());
        }
    } // namespace XmlNotation
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlText {
        inline app::XmlText__Class** type_info = (app::XmlText__Class**)(modloader::win::memory::resolve_rva(0x0473B100));
        inline app::XmlText__Class* get_class() {
            return il2cpp::get_class<app::XmlText__Class>(type_info, "System.Xml", "XmlText");
        }
        inline app::XmlText* create() {
            return il2cpp::create_object<app::XmlText>(get_class());
        }
    } // namespace XmlText
} // namespace app::classes::types

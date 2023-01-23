#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlTextEncoder__Class.h>
#include <Modloader/app/structs/XmlTextEncoder.h>

namespace app::classes::types {
    namespace XmlTextEncoder {
        inline app::XmlTextEncoder__Class** type_info = (app::XmlTextEncoder__Class**)(modloader::win::memory::resolve_rva(0x04763228));
        inline app::XmlTextEncoder__Class* get_class() {
            return il2cpp::get_class<app::XmlTextEncoder__Class>(type_info, "System.Xml", "XmlTextEncoder");
        }
        inline app::XmlTextEncoder* create() {
            return il2cpp::create_object<app::XmlTextEncoder>(get_class());
        }
    } // namespace XmlTextEncoder
} // namespace app::classes::types

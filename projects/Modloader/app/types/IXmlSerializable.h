#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IXmlSerializable__Class.h>

namespace app::classes::types {
    namespace IXmlSerializable {
        inline app::IXmlSerializable__Class** type_info = (app::IXmlSerializable__Class**)(modloader::win::memory::resolve_rva(0x04741788));
        inline app::IXmlSerializable__Class* get_class() {
            return il2cpp::get_class<app::IXmlSerializable__Class>(type_info, "System.Xml.Serialization", "IXmlSerializable");
        }
    } // namespace IXmlSerializable
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlValidatingReaderImpl__Class.h>
#include <Modloader/app/structs/XmlValidatingReaderImpl.h>

namespace app::classes::types {
    namespace XmlValidatingReaderImpl {
        inline app::XmlValidatingReaderImpl__Class** type_info = (app::XmlValidatingReaderImpl__Class**)(modloader::win::memory::resolve_rva(0x047787B0));
        inline app::XmlValidatingReaderImpl__Class* get_class() {
            return il2cpp::get_class<app::XmlValidatingReaderImpl__Class>(type_info, "System.Xml", "XmlValidatingReaderImpl");
        }
        inline app::XmlValidatingReaderImpl* create() {
            return il2cpp::create_object<app::XmlValidatingReaderImpl>(get_class());
        }
    } // namespace XmlValidatingReaderImpl
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlTextReaderImpl__Class.h>
#include <Modloader/app/structs/XmlTextReaderImpl.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl {
        inline app::XmlTextReaderImpl__Class** type_info = (app::XmlTextReaderImpl__Class**)(modloader::win::memory::resolve_rva(0x04759D28));
        inline app::XmlTextReaderImpl__Class* get_class() {
            return il2cpp::get_class<app::XmlTextReaderImpl__Class>(type_info, "System.Xml", "XmlTextReaderImpl");
        }
        inline app::XmlTextReaderImpl* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl>(get_class());
        }
    } // namespace XmlTextReaderImpl
} // namespace app::classes::types

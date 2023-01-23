#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlAsyncCheckReaderWithNS__Class.h>
#include <Modloader/app/structs/XmlAsyncCheckReaderWithNS.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReaderWithNS {
        inline app::XmlAsyncCheckReaderWithNS__Class** type_info = (app::XmlAsyncCheckReaderWithNS__Class**)(modloader::win::memory::resolve_rva(0x04731910));
        inline app::XmlAsyncCheckReaderWithNS__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReaderWithNS__Class>(type_info, "System.Xml", "XmlAsyncCheckReaderWithNS");
        }
        inline app::XmlAsyncCheckReaderWithNS* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReaderWithNS>(get_class());
        }
    } // namespace XmlAsyncCheckReaderWithNS
} // namespace app::classes::types

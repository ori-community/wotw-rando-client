#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlAsyncCheckReaderWithLineInfoNS__Class.h>
#include <Modloader/app/structs/XmlAsyncCheckReaderWithLineInfoNS.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReaderWithLineInfoNS {
        inline app::XmlAsyncCheckReaderWithLineInfoNS__Class** type_info = (app::XmlAsyncCheckReaderWithLineInfoNS__Class**)(modloader::win::memory::resolve_rva(0x0476AFD8));
        inline app::XmlAsyncCheckReaderWithLineInfoNS__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReaderWithLineInfoNS__Class>(type_info, "System.Xml", "XmlAsyncCheckReaderWithLineInfoNS");
        }
        inline app::XmlAsyncCheckReaderWithLineInfoNS* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReaderWithLineInfoNS>(get_class());
        }
    } // namespace XmlAsyncCheckReaderWithLineInfoNS
} // namespace app::classes::types

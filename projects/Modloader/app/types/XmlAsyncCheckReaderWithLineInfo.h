#pragma once
#include <Modloader/app/structs/XmlAsyncCheckReaderWithLineInfo.h>
#include <Modloader/app/structs/XmlAsyncCheckReaderWithLineInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReaderWithLineInfo {
        inline app::XmlAsyncCheckReaderWithLineInfo__Class** type_info() {
            static app::XmlAsyncCheckReaderWithLineInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAsyncCheckReaderWithLineInfo__Class**)(modloader::win::memory::resolve_rva(0x047010C0));
            }
            return cache;
        }
        inline app::XmlAsyncCheckReaderWithLineInfo__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReaderWithLineInfo__Class>(type_info(), "System.Xml", "XmlAsyncCheckReaderWithLineInfo");
        }
        inline app::XmlAsyncCheckReaderWithLineInfo* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReaderWithLineInfo>(get_class());
        }
    } // namespace XmlAsyncCheckReaderWithLineInfo
} // namespace app::classes::types

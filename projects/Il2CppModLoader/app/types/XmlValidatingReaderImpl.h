#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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

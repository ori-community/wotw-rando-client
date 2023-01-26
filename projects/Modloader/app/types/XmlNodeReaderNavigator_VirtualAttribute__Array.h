#pragma once
#include <Modloader/app/structs/XmlNodeReaderNavigator_VirtualAttribute__Array.h>
#include <Modloader/app/structs/XmlNodeReaderNavigator_VirtualAttribute__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNodeReaderNavigator_VirtualAttribute__Array {
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Array__Class** type_info() {
            static app::XmlNodeReaderNavigator_VirtualAttribute__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNodeReaderNavigator_VirtualAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x04735898));
            }
            return cache;
        }
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeReaderNavigator_VirtualAttribute__Array__Class>(type_info(), "System.Xml", "XmlNodeReaderNavigator+VirtualAttribute[]");
        }
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Array* create() {
            return il2cpp::create_object<app::XmlNodeReaderNavigator_VirtualAttribute__Array>(get_class());
        }
    } // namespace XmlNodeReaderNavigator_VirtualAttribute__Array
} // namespace app::classes::types

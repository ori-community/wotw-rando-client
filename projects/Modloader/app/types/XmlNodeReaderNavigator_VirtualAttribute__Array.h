#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlNodeReaderNavigator_VirtualAttribute__Array__Class.h>
#include <Modloader/app/structs/XmlNodeReaderNavigator_VirtualAttribute__Array.h>

namespace app::classes::types {
    namespace XmlNodeReaderNavigator_VirtualAttribute__Array {
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Array__Class** type_info = (app::XmlNodeReaderNavigator_VirtualAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x04735898));
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeReaderNavigator_VirtualAttribute__Array__Class>(type_info, "System.Xml", "XmlNodeReaderNavigator+VirtualAttribute[]");
        }
        inline app::XmlNodeReaderNavigator_VirtualAttribute__Array* create() {
            return il2cpp::create_object<app::XmlNodeReaderNavigator_VirtualAttribute__Array>(get_class());
        }
    } // namespace XmlNodeReaderNavigator_VirtualAttribute__Array
} // namespace app::classes::types

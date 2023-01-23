#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlValueConverter__Array__Class.h>
#include <Modloader/app/structs/XmlValueConverter__Array.h>

namespace app::classes::types {
    namespace XmlValueConverter__Array {
        inline app::XmlValueConverter__Array__Class** type_info = (app::XmlValueConverter__Array__Class**)(modloader::win::memory::resolve_rva(0x0476D5B0));
        inline app::XmlValueConverter__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlValueConverter__Array__Class>(type_info, "System.Xml.Schema", "XmlValueConverter[]");
        }
        inline app::XmlValueConverter__Array* create() {
            return il2cpp::create_object<app::XmlValueConverter__Array>(get_class());
        }
    } // namespace XmlValueConverter__Array
} // namespace app::classes::types

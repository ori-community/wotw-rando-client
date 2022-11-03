#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlElementWrapper {
        inline app::XmlElementWrapper__Class** type_info = (app::XmlElementWrapper__Class**)(modloader::win::memory::resolve_rva(0x047687D8));
        inline app::XmlElementWrapper__Class* get_class() {
            return il2cpp::get_class<app::XmlElementWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XmlElementWrapper");
        }
        inline app::XmlElementWrapper* create() {
            return il2cpp::create_object<app::XmlElementWrapper>(get_class());
        }
    } // namespace XmlElementWrapper
} // namespace app::classes::types

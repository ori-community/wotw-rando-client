#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XAttribute {
        inline app::XAttribute__Class** type_info = (app::XAttribute__Class**)(modloader::win::memory::resolve_rva(0x04713338));
        inline app::XAttribute__Class* get_class() {
            return il2cpp::get_class<app::XAttribute__Class>(type_info, "System.Xml.Linq", "XAttribute");
        }
        inline app::XAttribute* create() {
            return il2cpp::create_object<app::XAttribute>(get_class());
        }
        inline app::XAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::XAttribute__Array>(get_class(), size);
        }
        inline app::XAttribute__Array* create_array(const std::vector<app::XAttribute*>& items) {
            return il2cpp::array_new<app::XAttribute__Array>(get_class(), items);
        }
    } // namespace XAttribute
} // namespace app::classes::types

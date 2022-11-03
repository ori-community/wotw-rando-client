#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdSimpleValue {
        inline app::XsdSimpleValue__Class** type_info = (app::XsdSimpleValue__Class**)(modloader::win::memory::resolve_rva(0x0477B718));
        inline app::XsdSimpleValue__Class* get_class() {
            return il2cpp::get_class<app::XsdSimpleValue__Class>(type_info, "System.Xml.Schema", "XsdSimpleValue");
        }
        inline app::XsdSimpleValue* create() {
            return il2cpp::create_object<app::XsdSimpleValue>(get_class());
        }
    } // namespace XsdSimpleValue
} // namespace app::classes::types

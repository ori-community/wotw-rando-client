#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XPathResultType__Enum__Array__Class.h>
#include <Modloader/app/structs/XPathResultType__Enum__Array.h>

namespace app::classes::types {
    namespace XPathResultType__Enum__Array {
        inline app::XPathResultType__Enum__Array__Class** type_info = (app::XPathResultType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04703818));
        inline app::XPathResultType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::XPathResultType__Enum__Array__Class>(type_info, "System.Xml.XPath", "XPathResultType[]");
        }
        inline app::XPathResultType__Enum__Array* create() {
            return il2cpp::create_object<app::XPathResultType__Enum__Array>(get_class());
        }
    } // namespace XPathResultType__Enum__Array
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XElement_GetAttributes_d_105 {
        inline app::XElement_GetAttributes_d_105__Class** type_info = (app::XElement_GetAttributes_d_105__Class**)(modloader::win::memory::resolve_rva(0x047851D0));
        inline app::XElement_GetAttributes_d_105__Class* get_class() {
            return il2cpp::get_nested_class<app::XElement_GetAttributes_d_105__Class>(type_info, "System.Xml.Linq", "XElement", "<GetAttributes>d__105");
        }
        inline app::XElement_GetAttributes_d_105* create() {
            return il2cpp::create_object<app::XElement_GetAttributes_d_105>(get_class());
        }
    } // namespace XElement_GetAttributes_d_105
} // namespace app::classes::types

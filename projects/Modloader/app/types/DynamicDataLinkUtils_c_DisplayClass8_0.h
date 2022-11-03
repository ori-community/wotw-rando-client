#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils_c_DisplayClass8_0 {
        inline app::DynamicDataLinkUtils_c_DisplayClass8_0__Class** type_info = (app::DynamicDataLinkUtils_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x04723608));
        inline app::DynamicDataLinkUtils_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataLinkUtils_c_DisplayClass8_0__Class>(type_info, "Moon", "DynamicDataLinkUtils", "<>c__DisplayClass8_0");
        }
        inline app::DynamicDataLinkUtils_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils_c_DisplayClass8_0>(get_class());
        }
    } // namespace DynamicDataLinkUtils_c_DisplayClass8_0
} // namespace app::classes::types

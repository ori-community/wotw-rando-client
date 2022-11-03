#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils_c_DisplayClass9_1 {
        inline app::DynamicDataLinkUtils_c_DisplayClass9_1__Class** type_info = (app::DynamicDataLinkUtils_c_DisplayClass9_1__Class**)(modloader::win::memory::resolve_rva(0x04708C68));
        inline app::DynamicDataLinkUtils_c_DisplayClass9_1__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataLinkUtils_c_DisplayClass9_1__Class>(type_info, "Moon", "DynamicDataLinkUtils", "<>c__DisplayClass9_1");
        }
        inline app::DynamicDataLinkUtils_c_DisplayClass9_1* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils_c_DisplayClass9_1>(get_class());
        }
    } // namespace DynamicDataLinkUtils_c_DisplayClass9_1
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils_c_DisplayClass9_2 {
        inline app::DynamicDataLinkUtils_c_DisplayClass9_2__Class** type_info = (app::DynamicDataLinkUtils_c_DisplayClass9_2__Class**)(modloader::win::memory::resolve_rva(0x04723198));
        inline app::DynamicDataLinkUtils_c_DisplayClass9_2__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataLinkUtils_c_DisplayClass9_2__Class>(type_info, "Moon", "DynamicDataLinkUtils", "<>c__DisplayClass9_2");
        }
        inline app::DynamicDataLinkUtils_c_DisplayClass9_2* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils_c_DisplayClass9_2>(get_class());
        }
    } // namespace DynamicDataLinkUtils_c_DisplayClass9_2
} // namespace app::classes::types

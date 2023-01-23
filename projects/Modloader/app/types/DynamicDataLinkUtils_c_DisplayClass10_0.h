#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicDataLinkUtils_c_DisplayClass10_0__Class.h>
#include <Modloader/app/structs/DynamicDataLinkUtils_c_DisplayClass10_0.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils_c_DisplayClass10_0 {
        inline app::DynamicDataLinkUtils_c_DisplayClass10_0__Class** type_info = (app::DynamicDataLinkUtils_c_DisplayClass10_0__Class**)(modloader::win::memory::resolve_rva(0x04781340));
        inline app::DynamicDataLinkUtils_c_DisplayClass10_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataLinkUtils_c_DisplayClass10_0__Class>(type_info, "Moon", "DynamicDataLinkUtils", "<>c__DisplayClass10_0");
        }
        inline app::DynamicDataLinkUtils_c_DisplayClass10_0* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils_c_DisplayClass10_0>(get_class());
        }
    } // namespace DynamicDataLinkUtils_c_DisplayClass10_0
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/DynamicDataLinkUtils_c_DisplayClass9_2.h>
#include <Modloader/app/structs/DynamicDataLinkUtils_c_DisplayClass9_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils_c_DisplayClass9_2 {
        inline app::DynamicDataLinkUtils_c_DisplayClass9_2__Class** type_info() {
            static app::DynamicDataLinkUtils_c_DisplayClass9_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicDataLinkUtils_c_DisplayClass9_2__Class**)(modloader::win::memory::resolve_rva(0x04723198));
            }
            return cache;
        }
        inline app::DynamicDataLinkUtils_c_DisplayClass9_2__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataLinkUtils_c_DisplayClass9_2__Class>(type_info(), "Moon", "DynamicDataLinkUtils", "<>c__DisplayClass9_2");
        }
        inline app::DynamicDataLinkUtils_c_DisplayClass9_2* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils_c_DisplayClass9_2>(get_class());
        }
    } // namespace DynamicDataLinkUtils_c_DisplayClass9_2
} // namespace app::classes::types

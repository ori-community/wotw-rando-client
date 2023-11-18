#pragma once
#include <Modloader/app/structs/DynamicDataLinkUtils_c_DisplayClass9_1.h>
#include <Modloader/app/structs/DynamicDataLinkUtils_c_DisplayClass9_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils_c_DisplayClass9_1 {
        inline app::DynamicDataLinkUtils_c_DisplayClass9_1__Class** type_info() {
            static app::DynamicDataLinkUtils_c_DisplayClass9_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicDataLinkUtils_c_DisplayClass9_1__Class**)(modloader::win::memory::resolve_rva(0x04708C68));
            }
            return cache;
        }
        inline app::DynamicDataLinkUtils_c_DisplayClass9_1__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataLinkUtils_c_DisplayClass9_1__Class>(type_info(), "Moon", "DynamicDataLinkUtils", "<>c__DisplayClass9_1");
        }
        inline app::DynamicDataLinkUtils_c_DisplayClass9_1* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils_c_DisplayClass9_1>(get_class());
        }
    } // namespace DynamicDataLinkUtils_c_DisplayClass9_1
} // namespace app::classes::types

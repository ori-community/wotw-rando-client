#pragma once
#include <Modloader/app/structs/ConvertUtils_c_DisplayClass8_0.h>
#include <Modloader/app/structs/ConvertUtils_c_DisplayClass8_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConvertUtils_c_DisplayClass8_0 {
        inline app::ConvertUtils_c_DisplayClass8_0__Class** type_info() {
            static app::ConvertUtils_c_DisplayClass8_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConvertUtils_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x0476EF00));
            }
            return cache;
        }
        inline app::ConvertUtils_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ConvertUtils_c_DisplayClass8_0__Class>(type_info(), "Newtonsoft.Json.Utilities", "ConvertUtils", "<>c__DisplayClass8_0");
        }
        inline app::ConvertUtils_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::ConvertUtils_c_DisplayClass8_0>(get_class());
        }
    } // namespace ConvertUtils_c_DisplayClass8_0
} // namespace app::classes::types

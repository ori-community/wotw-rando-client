#pragma once
#include <Modloader/app/structs/FSharpUtils_c_DisplayClass49_0.h>
#include <Modloader/app/structs/FSharpUtils_c_DisplayClass49_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FSharpUtils_c_DisplayClass49_0 {
        inline app::FSharpUtils_c_DisplayClass49_0__Class** type_info() {
            static app::FSharpUtils_c_DisplayClass49_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FSharpUtils_c_DisplayClass49_0__Class**)(modloader::win::memory::resolve_rva(0x04745610));
            }
            return cache;
        }
        inline app::FSharpUtils_c_DisplayClass49_0__Class* get_class() {
            return il2cpp::get_nested_class<app::FSharpUtils_c_DisplayClass49_0__Class>(type_info(), "Newtonsoft.Json.Utilities", "FSharpUtils", "<>c__DisplayClass49_0");
        }
        inline app::FSharpUtils_c_DisplayClass49_0* create() {
            return il2cpp::create_object<app::FSharpUtils_c_DisplayClass49_0>(get_class());
        }
    } // namespace FSharpUtils_c_DisplayClass49_0
} // namespace app::classes::types

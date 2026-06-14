#pragma once
#include <Modloader/app/structs/PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0.h>
#include <Modloader/app/structs/PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0 {
        inline app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class** type_info() {
            static app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class**)(modloader::win::memory::resolve_rva(0x04797D00));
            }
            return cache;
        }
        inline app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class>(type_info(), "", "PostProcessingDebugFloatDebugMenuItem", "<>c__DisplayClass1_0");
        }
        inline app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0* create() {
            return il2cpp::create_object<app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0>(get_class());
        }
    } // namespace PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0
} // namespace app::classes::types

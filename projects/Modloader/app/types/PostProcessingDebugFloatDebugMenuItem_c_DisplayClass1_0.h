#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0 {
        inline app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class** type_info = (app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class**)(modloader::win::memory::resolve_rva(0x04797D00));
        inline app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0__Class>(type_info, "", "PostProcessingDebugFloatDebugMenuItem", "<>c__DisplayClass1_0");
        }
        inline app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0* create() {
            return il2cpp::create_object<app::PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0>(get_class());
        }
    } // namespace PostProcessingDebugFloatDebugMenuItem_c_DisplayClass1_0
} // namespace app::classes::types

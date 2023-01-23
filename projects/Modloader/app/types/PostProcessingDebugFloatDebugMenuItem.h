#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PostProcessingDebugFloatDebugMenuItem__Class.h>
#include <Modloader/app/structs/PostProcessingDebugFloatDebugMenuItem.h>

namespace app::classes::types {
    namespace PostProcessingDebugFloatDebugMenuItem {
        inline app::PostProcessingDebugFloatDebugMenuItem__Class** type_info = (app::PostProcessingDebugFloatDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04719490));
        inline app::PostProcessingDebugFloatDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::PostProcessingDebugFloatDebugMenuItem__Class>(type_info, "", "PostProcessingDebugFloatDebugMenuItem");
        }
        inline app::PostProcessingDebugFloatDebugMenuItem* create() {
            return il2cpp::create_object<app::PostProcessingDebugFloatDebugMenuItem>(get_class());
        }
    } // namespace PostProcessingDebugFloatDebugMenuItem
} // namespace app::classes::types

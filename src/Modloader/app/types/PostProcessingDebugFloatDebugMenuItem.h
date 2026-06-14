#pragma once
#include <Modloader/app/structs/PostProcessingDebugFloatDebugMenuItem.h>
#include <Modloader/app/structs/PostProcessingDebugFloatDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostProcessingDebugFloatDebugMenuItem {
        inline app::PostProcessingDebugFloatDebugMenuItem__Class** type_info() {
            static app::PostProcessingDebugFloatDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PostProcessingDebugFloatDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04719490));
            }
            return cache;
        }
        inline app::PostProcessingDebugFloatDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::PostProcessingDebugFloatDebugMenuItem__Class>(type_info(), "", "PostProcessingDebugFloatDebugMenuItem");
        }
        inline app::PostProcessingDebugFloatDebugMenuItem* create() {
            return il2cpp::create_object<app::PostProcessingDebugFloatDebugMenuItem>(get_class());
        }
    } // namespace PostProcessingDebugFloatDebugMenuItem
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PostProcessingDebugFloatDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PostProcessingDebugFloatDebugMenuItem__Class** type_info;
        inline app::PostProcessingDebugFloatDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::PostProcessingDebugFloatDebugMenuItem__Class>(type_info, "", "PostProcessingDebugFloatDebugMenuItem");
        }
        inline app::PostProcessingDebugFloatDebugMenuItem* create() {
            return il2cpp::create_object<app::PostProcessingDebugFloatDebugMenuItem>(get_class());
        }
    } // namespace PostProcessingDebugFloatDebugMenuItem
} // namespace app::classes::types

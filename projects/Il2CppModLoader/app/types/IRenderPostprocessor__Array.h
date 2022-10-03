#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRenderPostprocessor__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRenderPostprocessor__Array__Class** type_info;
        inline app::IRenderPostprocessor__Array__Class* get_class() {
            return il2cpp::get_class<app::IRenderPostprocessor__Array__Class>(type_info, "", "IRenderPostprocessor[]");
        }
        inline app::IRenderPostprocessor__Array* create() {
            return il2cpp::create_object<app::IRenderPostprocessor__Array>(get_class());
        }
    } // namespace IRenderPostprocessor__Array
} // namespace app::classes::types

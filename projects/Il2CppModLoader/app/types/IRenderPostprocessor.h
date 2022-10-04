#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRenderPostprocessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRenderPostprocessor__Class** type_info;
        inline app::IRenderPostprocessor__Class* get_class() {
            return il2cpp::get_class<app::IRenderPostprocessor__Class>(type_info, "", "IRenderPostprocessor");
        }
        inline app::IRenderPostprocessor__Array* create_array(int size) {
            return il2cpp::array_new<app::IRenderPostprocessor__Array>(get_class(), size);
        }
    } // namespace IRenderPostprocessor
} // namespace app::classes::types

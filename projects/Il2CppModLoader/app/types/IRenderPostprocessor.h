#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRenderPostprocessor {
        inline app::IRenderPostprocessor__Class** type_info = (app::IRenderPostprocessor__Class**)(modloader::win::memory::resolve_rva(0x0472BEF8));
        inline app::IRenderPostprocessor__Class* get_class() {
            return il2cpp::get_class<app::IRenderPostprocessor__Class>(type_info, "", "IRenderPostprocessor");
        }
        inline app::IRenderPostprocessor__Array* create_array(int size) {
            return il2cpp::array_new<app::IRenderPostprocessor__Array>(get_class(), size);
        }
        inline app::IRenderPostprocessor__Array* create_array(const std::vector<app::IRenderPostprocessor*>& items) {
            return il2cpp::array_new<app::IRenderPostprocessor__Array>(get_class(), items);
        }
    } // namespace IRenderPostprocessor
} // namespace app::classes::types

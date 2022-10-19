#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRenderPostprocessor__Array {
        inline app::IRenderPostprocessor__Array__Class** type_info = (app::IRenderPostprocessor__Array__Class**)(modloader::win::memory::resolve_rva(0x047480C0));
        inline app::IRenderPostprocessor__Array__Class* get_class() {
            return il2cpp::get_class<app::IRenderPostprocessor__Array__Class>(type_info, "", "IRenderPostprocessor[]");
        }
        inline app::IRenderPostprocessor__Array* create() {
            return il2cpp::create_object<app::IRenderPostprocessor__Array>(get_class());
        }
    } // namespace IRenderPostprocessor__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_c {
        inline app::DynamicInstantiationScanner_c__Class** type_info = (app::DynamicInstantiationScanner_c__Class**)(modloader::win::memory::resolve_rva(0x0476DDA0));
        inline app::DynamicInstantiationScanner_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_c__Class>(type_info, "", "DynamicInstantiationScanner", "<>c");
        }
        inline app::DynamicInstantiationScanner_c* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_c>(get_class());
        }
    } // namespace DynamicInstantiationScanner_c
} // namespace app::classes::types

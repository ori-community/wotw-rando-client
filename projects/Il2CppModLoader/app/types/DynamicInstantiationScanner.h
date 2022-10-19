#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner {
        inline app::DynamicInstantiationScanner__Class** type_info = (app::DynamicInstantiationScanner__Class**)(modloader::win::memory::resolve_rva(0x04767C78));
        inline app::DynamicInstantiationScanner__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationScanner__Class>(type_info, "", "DynamicInstantiationScanner");
        }
        inline app::DynamicInstantiationScanner* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner>(get_class());
        }
    } // namespace DynamicInstantiationScanner
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSTestResult {
        inline app::FPSTestResult__Class** type_info = (app::FPSTestResult__Class**)(modloader::win::memory::resolve_rva(0x0472B4F8));
        inline app::FPSTestResult__Class* get_class() {
            return il2cpp::get_class<app::FPSTestResult__Class>(type_info, "", "FPSTestResult");
        }
        inline app::FPSTestResult* create() {
            return il2cpp::create_object<app::FPSTestResult>(get_class());
        }
        inline app::FPSTestResult__Array* create_array(int size) {
            return il2cpp::array_new<app::FPSTestResult__Array>(get_class(), size);
        }
        inline app::FPSTestResult__Array* create_array(const std::vector<app::FPSTestResult*>& items) {
            return il2cpp::array_new<app::FPSTestResult__Array>(get_class(), items);
        }
    } // namespace FPSTestResult
} // namespace app::classes::types

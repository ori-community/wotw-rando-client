#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeAssembly {
        inline app::RuntimeAssembly__Class** type_info = (app::RuntimeAssembly__Class**)(modloader::win::memory::resolve_rva(0x047261A8));
        inline app::RuntimeAssembly__Class* get_class() {
            return il2cpp::get_class<app::RuntimeAssembly__Class>(type_info, "System.Reflection", "RuntimeAssembly");
        }
        inline app::RuntimeAssembly* create() {
            return il2cpp::create_object<app::RuntimeAssembly>(get_class());
        }
    } // namespace RuntimeAssembly
} // namespace app::classes::types

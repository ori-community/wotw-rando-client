#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoAssembly {
        namespace {
            inline app::MonoAssembly__Class* type_info_ref = nullptr;
        }
        inline app::MonoAssembly__Class** type_info = &type_info_ref;
        inline app::MonoAssembly__Class* get_class() {
            return il2cpp::get_class<app::MonoAssembly__Class>(type_info, "System.Reflection", "MonoAssembly");
        }
        inline app::MonoAssembly* create() {
            return il2cpp::create_object<app::MonoAssembly>(get_class());
        }
    } // namespace MonoAssembly
} // namespace app::classes::types

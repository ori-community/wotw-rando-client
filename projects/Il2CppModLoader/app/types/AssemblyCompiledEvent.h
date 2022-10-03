#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyCompiledEvent {
        namespace {
            app::AssemblyCompiledEvent__Class* type_info_ref = nullptr;
        }
        app::AssemblyCompiledEvent__Class** type_info = &type_info_ref;
        inline app::AssemblyCompiledEvent__Class* get_class() {
            return il2cpp::get_class<app::AssemblyCompiledEvent__Class>(type_info, "", "AssemblyCompiledEvent");
        }
        inline app::AssemblyCompiledEvent* create() {
            return il2cpp::create_object<app::AssemblyCompiledEvent>(get_class());
        }
    } // namespace AssemblyCompiledEvent
} // namespace app::classes::types

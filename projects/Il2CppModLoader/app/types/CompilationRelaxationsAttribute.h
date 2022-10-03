#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompilationRelaxationsAttribute {
        namespace {
            app::CompilationRelaxationsAttribute__Class* type_info_ref = nullptr;
        }
        app::CompilationRelaxationsAttribute__Class** type_info = &type_info_ref;
        inline app::CompilationRelaxationsAttribute__Class* get_class() {
            return il2cpp::get_class<app::CompilationRelaxationsAttribute__Class>(type_info, "System.Runtime.CompilerServices", "CompilationRelaxationsAttribute");
        }
        inline app::CompilationRelaxationsAttribute* create() {
            return il2cpp::create_object<app::CompilationRelaxationsAttribute>(get_class());
        }
    } // namespace CompilationRelaxationsAttribute
} // namespace app::classes::types

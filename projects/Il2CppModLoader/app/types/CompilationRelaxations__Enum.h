#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompilationRelaxations__Enum {
        namespace {
            app::CompilationRelaxations__Enum__Class* type_info_ref = nullptr;
        }
        app::CompilationRelaxations__Enum__Class** type_info = &type_info_ref;
        inline app::CompilationRelaxations__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompilationRelaxations__Enum__Class>(type_info, "System.Runtime.CompilerServices", "CompilationRelaxations");
        }
        inline app::CompilationRelaxations__Enum* create() {
            return il2cpp::create_object<app::CompilationRelaxations__Enum>(get_class());
        }
    } // namespace CompilationRelaxations__Enum
} // namespace app::classes::types

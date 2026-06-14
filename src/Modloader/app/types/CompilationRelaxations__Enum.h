#pragma once
#include <Modloader/app/structs/CompilationRelaxations__Enum.h>
#include <Modloader/app/structs/CompilationRelaxations__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompilationRelaxations__Enum {
        inline app::CompilationRelaxations__Enum__Class** type_info() {
            static app::CompilationRelaxations__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompilationRelaxations__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompilationRelaxations__Enum__Class* get_class() {
            return il2cpp::get_class<app::CompilationRelaxations__Enum__Class>(type_info(), "System.Runtime.CompilerServices", "CompilationRelaxations");
        }
        inline app::CompilationRelaxations__Enum* create() {
            return il2cpp::create_object<app::CompilationRelaxations__Enum>(get_class());
        }
    } // namespace CompilationRelaxations__Enum
} // namespace app::classes::types

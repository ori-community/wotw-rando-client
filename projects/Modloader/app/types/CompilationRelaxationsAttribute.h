#pragma once
#include <Modloader/app/structs/CompilationRelaxationsAttribute.h>
#include <Modloader/app/structs/CompilationRelaxationsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompilationRelaxationsAttribute {
        inline app::CompilationRelaxationsAttribute__Class** type_info() {
            static app::CompilationRelaxationsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompilationRelaxationsAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompilationRelaxationsAttribute__Class* get_class() {
            return il2cpp::get_class<app::CompilationRelaxationsAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "CompilationRelaxationsAttribute");
        }
        inline app::CompilationRelaxationsAttribute* create() {
            return il2cpp::create_object<app::CompilationRelaxationsAttribute>(get_class());
        }
    } // namespace CompilationRelaxationsAttribute
} // namespace app::classes::types

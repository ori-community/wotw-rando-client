#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PathTracerOutput {
        namespace {
            app::PathTracerOutput__Class* type_info_ref = nullptr;
        }
        app::PathTracerOutput__Class** type_info = &type_info_ref;
        inline app::PathTracerOutput__Class* get_class() {
            return il2cpp::get_class<app::PathTracerOutput__Class>(type_info, "", "PathTracerOutput");
        }
        inline app::PathTracerOutput* create() {
            return il2cpp::create_object<app::PathTracerOutput>(get_class());
        }
    } // namespace PathTracerOutput
} // namespace app::classes::types

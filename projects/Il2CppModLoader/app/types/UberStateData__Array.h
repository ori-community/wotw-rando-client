#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateData__Array {
        namespace {
            app::UberStateData__Array__Class* type_info_ref = nullptr;
        }
        app::UberStateData__Array__Class** type_info = &type_info_ref;
        inline app::UberStateData__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateData__Array__Class>(type_info, "Moon.UberStateVisualization", "UberStateData[]");
        }
        inline app::UberStateData__Array* create() {
            return il2cpp::create_object<app::UberStateData__Array>(get_class());
        }
    } // namespace UberStateData__Array
} // namespace app::classes::types

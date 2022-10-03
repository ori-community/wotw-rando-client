#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateGroupData__Array {
        namespace {
            app::UberStateGroupData__Array__Class* type_info_ref = nullptr;
        }
        app::UberStateGroupData__Array__Class** type_info = &type_info_ref;
        inline app::UberStateGroupData__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateGroupData__Array__Class>(type_info, "Moon.UberStateVisualization", "UberStateGroupData[]");
        }
        inline app::UberStateGroupData__Array* create() {
            return il2cpp::create_object<app::UberStateGroupData__Array>(get_class());
        }
    } // namespace UberStateGroupData__Array
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LineRenderer__Array {
        namespace {
            app::LineRenderer__Array__Class* type_info_ref = nullptr;
        }
        app::LineRenderer__Array__Class** type_info = &type_info_ref;
        inline app::LineRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::LineRenderer__Array__Class>(type_info, "UnityEngine", "LineRenderer[]");
        }
        inline app::LineRenderer__Array* create() {
            return il2cpp::create_object<app::LineRenderer__Array>(get_class());
        }
    } // namespace LineRenderer__Array
} // namespace app::classes::types

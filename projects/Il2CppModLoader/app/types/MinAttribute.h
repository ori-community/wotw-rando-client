#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinAttribute {
        namespace {
            app::MinAttribute__Class* type_info_ref = nullptr;
        }
        app::MinAttribute__Class** type_info = &type_info_ref;
        inline app::MinAttribute__Class* get_class() {
            return il2cpp::get_class<app::MinAttribute__Class>(type_info, "UnityEngine", "MinAttribute");
        }
        inline app::MinAttribute* create() {
            return il2cpp::create_object<app::MinAttribute>(get_class());
        }
    } // namespace MinAttribute
} // namespace app::classes::types

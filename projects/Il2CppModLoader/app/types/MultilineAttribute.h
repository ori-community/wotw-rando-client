#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultilineAttribute {
        namespace {
            app::MultilineAttribute__Class* type_info_ref = nullptr;
        }
        app::MultilineAttribute__Class** type_info = &type_info_ref;
        inline app::MultilineAttribute__Class* get_class() {
            return il2cpp::get_class<app::MultilineAttribute__Class>(type_info, "UnityEngine", "MultilineAttribute");
        }
        inline app::MultilineAttribute* create() {
            return il2cpp::create_object<app::MultilineAttribute>(get_class());
        }
    } // namespace MultilineAttribute
} // namespace app::classes::types

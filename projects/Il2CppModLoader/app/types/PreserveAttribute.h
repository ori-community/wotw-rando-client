#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreserveAttribute {
        namespace {
            app::PreserveAttribute__Class* type_info_ref = nullptr;
        }
        app::PreserveAttribute__Class** type_info = &type_info_ref;
        inline app::PreserveAttribute__Class* get_class() {
            return il2cpp::get_class<app::PreserveAttribute__Class>(type_info, "UnityEngine.Scripting", "PreserveAttribute");
        }
        inline app::PreserveAttribute* create() {
            return il2cpp::create_object<app::PreserveAttribute>(get_class());
        }
    } // namespace PreserveAttribute
} // namespace app::classes::types

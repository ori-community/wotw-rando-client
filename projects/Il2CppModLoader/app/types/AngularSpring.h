#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AngularSpring {
        namespace {
            app::AngularSpring__Class* type_info_ref = nullptr;
        }
        app::AngularSpring__Class** type_info = &type_info_ref;
        inline app::AngularSpring__Class* get_class() {
            return il2cpp::get_class<app::AngularSpring__Class>(type_info, "", "AngularSpring");
        }
        inline app::AngularSpring* create() {
            return il2cpp::create_object<app::AngularSpring>(get_class());
        }
    } // namespace AngularSpring
} // namespace app::classes::types

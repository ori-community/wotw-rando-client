#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WWWForm {
        namespace {
            app::WWWForm__Class* type_info_ref = nullptr;
        }
        app::WWWForm__Class** type_info = &type_info_ref;
        inline app::WWWForm__Class* get_class() {
            return il2cpp::get_class<app::WWWForm__Class>(type_info, "UnityEngine", "WWWForm");
        }
        inline app::WWWForm* create() {
            return il2cpp::create_object<app::WWWForm>(get_class());
        }
    } // namespace WWWForm
} // namespace app::classes::types

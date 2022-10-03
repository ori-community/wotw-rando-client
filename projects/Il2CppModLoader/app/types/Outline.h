#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Outline {
        namespace {
            app::Outline__Class* type_info_ref = nullptr;
        }
        app::Outline__Class** type_info = &type_info_ref;
        inline app::Outline__Class* get_class() {
            return il2cpp::get_class<app::Outline__Class>(type_info, "UnityEngine.UI", "Outline");
        }
        inline app::Outline* create() {
            return il2cpp::create_object<app::Outline>(get_class());
        }
    } // namespace Outline
} // namespace app::classes::types

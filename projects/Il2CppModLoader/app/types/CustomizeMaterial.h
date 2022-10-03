#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomizeMaterial {
        namespace {
            app::CustomizeMaterial__Class* type_info_ref = nullptr;
        }
        app::CustomizeMaterial__Class** type_info = &type_info_ref;
        inline app::CustomizeMaterial__Class* get_class() {
            return il2cpp::get_class<app::CustomizeMaterial__Class>(type_info, "", "CustomizeMaterial");
        }
        inline app::CustomizeMaterial* create() {
            return il2cpp::create_object<app::CustomizeMaterial>(get_class());
        }
    } // namespace CustomizeMaterial
} // namespace app::classes::types

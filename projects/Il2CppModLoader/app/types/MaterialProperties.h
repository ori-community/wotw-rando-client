#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialProperties {
        namespace {
            app::MaterialProperties__Class* type_info_ref = nullptr;
        }
        app::MaterialProperties__Class** type_info = &type_info_ref;
        inline app::MaterialProperties__Class* get_class() {
            return il2cpp::get_class<app::MaterialProperties__Class>(type_info, "", "MaterialProperties");
        }
        inline app::MaterialProperties* create() {
            return il2cpp::create_object<app::MaterialProperties>(get_class());
        }
    } // namespace MaterialProperties
} // namespace app::classes::types

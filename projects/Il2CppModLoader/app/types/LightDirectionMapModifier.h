#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightDirectionMapModifier {
        namespace {
            app::LightDirectionMapModifier__Class* type_info_ref = nullptr;
        }
        app::LightDirectionMapModifier__Class** type_info = &type_info_ref;
        inline app::LightDirectionMapModifier__Class* get_class() {
            return il2cpp::get_class<app::LightDirectionMapModifier__Class>(type_info, "", "LightDirectionMapModifier");
        }
        inline app::LightDirectionMapModifier* create() {
            return il2cpp::create_object<app::LightDirectionMapModifier>(get_class());
        }
    } // namespace LightDirectionMapModifier
} // namespace app::classes::types

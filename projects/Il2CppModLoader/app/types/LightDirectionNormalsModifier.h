#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightDirectionNormalsModifier {
        namespace {
            app::LightDirectionNormalsModifier__Class* type_info_ref = nullptr;
        }
        app::LightDirectionNormalsModifier__Class** type_info = &type_info_ref;
        inline app::LightDirectionNormalsModifier__Class* get_class() {
            return il2cpp::get_class<app::LightDirectionNormalsModifier__Class>(type_info, "", "LightDirectionNormalsModifier");
        }
        inline app::LightDirectionNormalsModifier* create() {
            return il2cpp::create_object<app::LightDirectionNormalsModifier>(get_class());
        }
    } // namespace LightDirectionNormalsModifier
} // namespace app::classes::types

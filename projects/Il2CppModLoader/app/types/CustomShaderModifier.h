#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CustomShaderModifier {
        namespace {
            inline app::CustomShaderModifier__Class* type_info_ref = nullptr;
        }
        inline app::CustomShaderModifier__Class** type_info = &type_info_ref;
        inline app::CustomShaderModifier__Class* get_class() {
            return il2cpp::get_class<app::CustomShaderModifier__Class>(type_info, "", "CustomShaderModifier");
        }
        inline app::CustomShaderModifier* create() {
            return il2cpp::create_object<app::CustomShaderModifier>(get_class());
        }
    } // namespace CustomShaderModifier
} // namespace app::classes::types

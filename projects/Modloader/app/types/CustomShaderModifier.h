#pragma once
#include <Modloader/app/structs/CustomShaderModifier.h>
#include <Modloader/app/structs/CustomShaderModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomShaderModifier {
        inline app::CustomShaderModifier__Class** type_info() {
            static app::CustomShaderModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomShaderModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomShaderModifier__Class* get_class() {
            return il2cpp::get_class<app::CustomShaderModifier__Class>(type_info(), "", "CustomShaderModifier");
        }
        inline app::CustomShaderModifier* create() {
            return il2cpp::create_object<app::CustomShaderModifier>(get_class());
        }
    } // namespace CustomShaderModifier
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/UberShaderProperty.h>
#include <Modloader/app/structs/UberShaderProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderProperty {
        inline app::UberShaderProperty__Class** type_info() {
            static app::UberShaderProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderProperty__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderProperty__Class* get_class() {
            return il2cpp::get_class<app::UberShaderProperty__Class>(type_info(), "", "UberShaderProperty");
        }
        inline app::UberShaderProperty* create() {
            return il2cpp::create_object<app::UberShaderProperty>(get_class());
        }
    } // namespace UberShaderProperty
} // namespace app::classes::types

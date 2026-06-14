#pragma once
#include <Modloader/app/structs/UberShaderColorMultiplyAttribute.h>
#include <Modloader/app/structs/UberShaderColorMultiplyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderColorMultiplyAttribute {
        inline app::UberShaderColorMultiplyAttribute__Class** type_info() {
            static app::UberShaderColorMultiplyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderColorMultiplyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderColorMultiplyAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderColorMultiplyAttribute__Class>(type_info(), "", "UberShaderColorMultiplyAttribute");
        }
        inline app::UberShaderColorMultiplyAttribute* create() {
            return il2cpp::create_object<app::UberShaderColorMultiplyAttribute>(get_class());
        }
    } // namespace UberShaderColorMultiplyAttribute
} // namespace app::classes::types

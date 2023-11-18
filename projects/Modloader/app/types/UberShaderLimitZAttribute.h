#pragma once
#include <Modloader/app/structs/UberShaderLimitZAttribute.h>
#include <Modloader/app/structs/UberShaderLimitZAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderLimitZAttribute {
        inline app::UberShaderLimitZAttribute__Class** type_info() {
            static app::UberShaderLimitZAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderLimitZAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderLimitZAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderLimitZAttribute__Class>(type_info(), "", "UberShaderLimitZAttribute");
        }
        inline app::UberShaderLimitZAttribute* create() {
            return il2cpp::create_object<app::UberShaderLimitZAttribute>(get_class());
        }
    } // namespace UberShaderLimitZAttribute
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/UberShaderGradient.h>
#include <Modloader/app/structs/UberShaderGradient__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderGradient {
        inline app::UberShaderGradient__Class** type_info() {
            static app::UberShaderGradient__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderGradient__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderGradient__Class* get_class() {
            return il2cpp::get_class<app::UberShaderGradient__Class>(type_info(), "", "UberShaderGradient");
        }
        inline app::UberShaderGradient* create() {
            return il2cpp::create_object<app::UberShaderGradient>(get_class());
        }
    } // namespace UberShaderGradient
} // namespace app::classes::types

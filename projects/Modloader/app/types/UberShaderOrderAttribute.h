#pragma once
#include <Modloader/app/structs/UberShaderOrderAttribute.h>
#include <Modloader/app/structs/UberShaderOrderAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderOrderAttribute {
        inline app::UberShaderOrderAttribute__Class** type_info() {
            static app::UberShaderOrderAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderOrderAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderOrderAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderOrderAttribute__Class>(type_info(), "", "UberShaderOrderAttribute");
        }
        inline app::UberShaderOrderAttribute* create() {
            return il2cpp::create_object<app::UberShaderOrderAttribute>(get_class());
        }
    } // namespace UberShaderOrderAttribute
} // namespace app::classes::types

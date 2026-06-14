#pragma once
#include <Modloader/app/structs/UberShaderCategoryAttribute.h>
#include <Modloader/app/structs/UberShaderCategoryAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderCategoryAttribute {
        inline app::UberShaderCategoryAttribute__Class** type_info() {
            static app::UberShaderCategoryAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderCategoryAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderCategoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCategoryAttribute__Class>(type_info(), "", "UberShaderCategoryAttribute");
        }
        inline app::UberShaderCategoryAttribute* create() {
            return il2cpp::create_object<app::UberShaderCategoryAttribute>(get_class());
        }
    } // namespace UberShaderCategoryAttribute
} // namespace app::classes::types

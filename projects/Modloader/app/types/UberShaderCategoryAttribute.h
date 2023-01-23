#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderCategoryAttribute__Class.h>
#include <Modloader/app/structs/UberShaderCategoryAttribute.h>

namespace app::classes::types {
    namespace UberShaderCategoryAttribute {
        namespace {
            inline app::UberShaderCategoryAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderCategoryAttribute__Class** type_info = &type_info_ref;
        inline app::UberShaderCategoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCategoryAttribute__Class>(type_info, "", "UberShaderCategoryAttribute");
        }
        inline app::UberShaderCategoryAttribute* create() {
            return il2cpp::create_object<app::UberShaderCategoryAttribute>(get_class());
        }
    } // namespace UberShaderCategoryAttribute
} // namespace app::classes::types

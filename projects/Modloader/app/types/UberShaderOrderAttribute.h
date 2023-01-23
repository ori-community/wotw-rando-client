#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderOrderAttribute__Class.h>
#include <Modloader/app/structs/UberShaderOrderAttribute.h>

namespace app::classes::types {
    namespace UberShaderOrderAttribute {
        namespace {
            inline app::UberShaderOrderAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderOrderAttribute__Class** type_info = &type_info_ref;
        inline app::UberShaderOrderAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderOrderAttribute__Class>(type_info, "", "UberShaderOrderAttribute");
        }
        inline app::UberShaderOrderAttribute* create() {
            return il2cpp::create_object<app::UberShaderOrderAttribute>(get_class());
        }
    } // namespace UberShaderOrderAttribute
} // namespace app::classes::types

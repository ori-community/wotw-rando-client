#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderColorMultiplyAttribute__Class.h>
#include <Modloader/app/structs/UberShaderColorMultiplyAttribute.h>

namespace app::classes::types {
    namespace UberShaderColorMultiplyAttribute {
        namespace {
            inline app::UberShaderColorMultiplyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderColorMultiplyAttribute__Class** type_info = &type_info_ref;
        inline app::UberShaderColorMultiplyAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberShaderColorMultiplyAttribute__Class>(type_info, "", "UberShaderColorMultiplyAttribute");
        }
        inline app::UberShaderColorMultiplyAttribute* create() {
            return il2cpp::create_object<app::UberShaderColorMultiplyAttribute>(get_class());
        }
    } // namespace UberShaderColorMultiplyAttribute
} // namespace app::classes::types

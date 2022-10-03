#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderRuntimeZShift {
        namespace {
            app::UberShaderRuntimeZShift__Class* type_info_ref = nullptr;
        }
        app::UberShaderRuntimeZShift__Class** type_info = &type_info_ref;
        inline app::UberShaderRuntimeZShift__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeZShift__Class>(type_info, "", "UberShaderRuntimeZShift");
        }
        inline app::UberShaderRuntimeZShift* create() {
            return il2cpp::create_object<app::UberShaderRuntimeZShift>(get_class());
        }
    } // namespace UberShaderRuntimeZShift
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderFloatDisplay {
        namespace {
            app::UberShaderFloatDisplay__Class* type_info_ref = nullptr;
        }
        app::UberShaderFloatDisplay__Class** type_info = &type_info_ref;
        inline app::UberShaderFloatDisplay__Class* get_class() {
            return il2cpp::get_class<app::UberShaderFloatDisplay__Class>(type_info, "", "UberShaderFloatDisplay");
        }
        inline app::UberShaderFloatDisplay* create() {
            return il2cpp::create_object<app::UberShaderFloatDisplay>(get_class());
        }
    } // namespace UberShaderFloatDisplay
} // namespace app::classes::types

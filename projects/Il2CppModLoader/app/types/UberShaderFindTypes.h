#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderFindTypes {
        namespace {
            app::UberShaderFindTypes__Class* type_info_ref = nullptr;
        }
        app::UberShaderFindTypes__Class** type_info = &type_info_ref;
        inline app::UberShaderFindTypes__Class* get_class() {
            return il2cpp::get_class<app::UberShaderFindTypes__Class>(type_info, "", "UberShaderFindTypes");
        }
        inline app::UberShaderFindTypes* create() {
            return il2cpp::create_object<app::UberShaderFindTypes>(get_class());
        }
    } // namespace UberShaderFindTypes
} // namespace app::classes::types

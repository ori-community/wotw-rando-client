#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwaggerComunicator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwaggerComunicator_c__Class** type_info;
        inline app::SwaggerComunicator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SwaggerComunicator_c__Class>(type_info, "", "SwaggerComunicator", "<>c");
        }
        inline app::SwaggerComunicator_c* create() {
            return il2cpp::create_object<app::SwaggerComunicator_c>(get_class());
        }
    } // namespace SwaggerComunicator_c
} // namespace app::classes::types

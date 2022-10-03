#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwaggerComunicator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SwaggerComunicator__Class** type_info;
        inline app::SwaggerComunicator__Class* get_class() {
            return il2cpp::get_class<app::SwaggerComunicator__Class>(type_info, "", "SwaggerComunicator");
        }
        inline app::SwaggerComunicator* create() {
            return il2cpp::create_object<app::SwaggerComunicator>(get_class());
        }
    } // namespace SwaggerComunicator
} // namespace app::classes::types

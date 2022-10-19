#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SwaggerComunicator_c {
        inline app::SwaggerComunicator_c__Class** type_info = (app::SwaggerComunicator_c__Class**)(modloader::win::memory::resolve_rva(0x0472BCE8));
        inline app::SwaggerComunicator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SwaggerComunicator_c__Class>(type_info, "", "SwaggerComunicator", "<>c");
        }
        inline app::SwaggerComunicator_c* create() {
            return il2cpp::create_object<app::SwaggerComunicator_c>(get_class());
        }
    } // namespace SwaggerComunicator_c
} // namespace app::classes::types

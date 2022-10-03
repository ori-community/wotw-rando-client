#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OptionalInstantiationHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OptionalInstantiationHandler__Class** type_info;
        inline app::OptionalInstantiationHandler__Class* get_class() {
            return il2cpp::get_class<app::OptionalInstantiationHandler__Class>(type_info, "", "OptionalInstantiationHandler");
        }
        inline app::OptionalInstantiationHandler* create() {
            return il2cpp::create_object<app::OptionalInstantiationHandler>(get_class());
        }
    } // namespace OptionalInstantiationHandler
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInstantiationHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IInstantiationHandler__Class** type_info;
        inline app::IInstantiationHandler__Class* get_class() {
            return il2cpp::get_class<app::IInstantiationHandler__Class>(type_info, "", "IInstantiationHandler");
        }
        inline app::IInstantiationHandler* create() {
            return il2cpp::create_object<app::IInstantiationHandler>(get_class());
        }
    } // namespace IInstantiationHandler
} // namespace app::classes::types

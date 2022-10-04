#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IComponentChangeService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IComponentChangeService__Class** type_info;
        inline app::IComponentChangeService__Class* get_class() {
            return il2cpp::get_class<app::IComponentChangeService__Class>(type_info, "System.ComponentModel.Design", "IComponentChangeService");
        }
        inline app::IComponentChangeService* create() {
            return il2cpp::create_object<app::IComponentChangeService>(get_class());
        }
    } // namespace IComponentChangeService
} // namespace app::classes::types

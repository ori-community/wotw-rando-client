#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPhysicsTriggerHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPhysicsTriggerHandler__Class** type_info;
        inline app::IPhysicsTriggerHandler__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsTriggerHandler__Class>(type_info, "", "IPhysicsTriggerHandler");
        }
        inline app::IPhysicsTriggerHandler* create() {
            return il2cpp::create_object<app::IPhysicsTriggerHandler>(get_class());
        }
    } // namespace IPhysicsTriggerHandler
} // namespace app::classes::types

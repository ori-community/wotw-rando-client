#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPhysicsUpdateHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPhysicsUpdateHandler__Class** type_info;
        inline app::IPhysicsUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsUpdateHandler__Class>(type_info, "Moon", "IPhysicsUpdateHandler");
        }
        inline app::IPhysicsUpdateHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IPhysicsUpdateHandler__Array>(get_class(), size);
        }
    } // namespace IPhysicsUpdateHandler
} // namespace app::classes::types

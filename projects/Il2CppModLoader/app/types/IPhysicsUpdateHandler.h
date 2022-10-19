#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPhysicsUpdateHandler {
        inline app::IPhysicsUpdateHandler__Class** type_info = (app::IPhysicsUpdateHandler__Class**)(modloader::win::memory::resolve_rva(0x0472B5B8));
        inline app::IPhysicsUpdateHandler__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsUpdateHandler__Class>(type_info, "Moon", "IPhysicsUpdateHandler");
        }
        inline app::IPhysicsUpdateHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::IPhysicsUpdateHandler__Array>(get_class(), size);
        }
        inline app::IPhysicsUpdateHandler__Array* create_array(const std::vector<app::IPhysicsUpdateHandler*>& items) {
            return il2cpp::array_new<app::IPhysicsUpdateHandler__Array>(get_class(), items);
        }
    } // namespace IPhysicsUpdateHandler
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICollisionContext {
        inline app::ICollisionContext__Class** type_info = (app::ICollisionContext__Class**)(modloader::win::memory::resolve_rva(0x0472F9E8));
        inline app::ICollisionContext__Class* get_class() {
            return il2cpp::get_class<app::ICollisionContext__Class>(type_info, "", "ICollisionContext");
        }
    } // namespace ICollisionContext
} // namespace app::classes::types

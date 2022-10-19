#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityContext {
        inline app::EntityContext__Class** type_info = (app::EntityContext__Class**)(modloader::win::memory::resolve_rva(0x04722728));
        inline app::EntityContext__Class* get_class() {
            return il2cpp::get_class<app::EntityContext__Class>(type_info, "", "EntityContext");
        }
        inline app::EntityContext* create() {
            return il2cpp::create_object<app::EntityContext>(get_class());
        }
    } // namespace EntityContext
} // namespace app::classes::types

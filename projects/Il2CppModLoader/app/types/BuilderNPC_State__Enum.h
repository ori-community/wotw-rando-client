#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderNPC_State__Enum {
        inline app::BuilderNPC_State__Enum__Class** type_info = (app::BuilderNPC_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x04792538));
        inline app::BuilderNPC_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderNPC_State__Enum__Class>(type_info, "", "BuilderNPC", "State");
        }
        inline app::BuilderNPC_State__Enum* create() {
            return il2cpp::create_object<app::BuilderNPC_State__Enum>(get_class());
        }
    } // namespace BuilderNPC_State__Enum
} // namespace app::classes::types

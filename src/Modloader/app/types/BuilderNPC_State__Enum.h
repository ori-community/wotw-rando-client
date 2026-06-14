#pragma once
#include <Modloader/app/structs/BuilderNPC_State__Enum.h>
#include <Modloader/app/structs/BuilderNPC_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderNPC_State__Enum {
        inline app::BuilderNPC_State__Enum__Class** type_info() {
            static app::BuilderNPC_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuilderNPC_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x04792538));
            }
            return cache;
        }
        inline app::BuilderNPC_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderNPC_State__Enum__Class>(type_info(), "", "BuilderNPC", "State");
        }
        inline app::BuilderNPC_State__Enum* create() {
            return il2cpp::create_object<app::BuilderNPC_State__Enum>(get_class());
        }
    } // namespace BuilderNPC_State__Enum
} // namespace app::classes::types

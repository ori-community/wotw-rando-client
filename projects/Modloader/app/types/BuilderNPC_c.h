#pragma once
#include <Modloader/app/structs/BuilderNPC_c.h>
#include <Modloader/app/structs/BuilderNPC_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderNPC_c {
        inline app::BuilderNPC_c__Class** type_info() {
            static app::BuilderNPC_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuilderNPC_c__Class**)(modloader::win::memory::resolve_rva(0x04711248));
            }
            return cache;
        }
        inline app::BuilderNPC_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderNPC_c__Class>(type_info(), "", "BuilderNPC", "<>c");
        }
        inline app::BuilderNPC_c* create() {
            return il2cpp::create_object<app::BuilderNPC_c>(get_class());
        }
    } // namespace BuilderNPC_c
} // namespace app::classes::types

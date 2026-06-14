#pragma once
#include <Modloader/app/structs/WandererNPC_c.h>
#include <Modloader/app/structs/WandererNPC_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererNPC_c {
        inline app::WandererNPC_c__Class** type_info() {
            static app::WandererNPC_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WandererNPC_c__Class**)(modloader::win::memory::resolve_rva(0x04786620));
            }
            return cache;
        }
        inline app::WandererNPC_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererNPC_c__Class>(type_info(), "", "WandererNPC", "<>c");
        }
        inline app::WandererNPC_c* create() {
            return il2cpp::create_object<app::WandererNPC_c>(get_class());
        }
    } // namespace WandererNPC_c
} // namespace app::classes::types

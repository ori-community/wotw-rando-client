#pragma once
#include <Modloader/app/structs/CompoundState_c.h>
#include <Modloader/app/structs/CompoundState_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompoundState_c {
        inline app::CompoundState_c__Class** type_info() {
            static app::CompoundState_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompoundState_c__Class**)(modloader::win::memory::resolve_rva(0x0473EAF8));
            }
            return cache;
        }
        inline app::CompoundState_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CompoundState_c__Class>(type_info(), "Moon.InteractionGraph", "CompoundState", "<>c");
        }
        inline app::CompoundState_c* create() {
            return il2cpp::create_object<app::CompoundState_c>(get_class());
        }
    } // namespace CompoundState_c
} // namespace app::classes::types

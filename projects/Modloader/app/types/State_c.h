#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/State_c__Class.h>
#include <Modloader/app/structs/State_c.h>

namespace app::classes::types {
    namespace State_c {
        inline app::State_c__Class** type_info = (app::State_c__Class**)(modloader::win::memory::resolve_rva(0x0472D8D8));
        inline app::State_c__Class* get_class() {
            return il2cpp::get_nested_class<app::State_c__Class>(type_info, "Moon.InteractionGraph", "State", "<>c");
        }
        inline app::State_c* create() {
            return il2cpp::create_object<app::State_c>(get_class());
        }
    } // namespace State_c
} // namespace app::classes::types

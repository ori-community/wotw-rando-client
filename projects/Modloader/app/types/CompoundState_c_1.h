#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompoundState_c_1 {
        inline app::CompoundState_c_1__Class** type_info = (app::CompoundState_c_1__Class**)(modloader::win::memory::resolve_rva(0x0477ACD8));
        inline app::CompoundState_c_1__Class* get_class() {
            return il2cpp::get_nested_class<app::CompoundState_c_1__Class>(type_info, "fsm", "CompoundState", "<>c");
        }
        inline app::CompoundState_c_1* create() {
            return il2cpp::create_object<app::CompoundState_c_1>(get_class());
        }
    } // namespace CompoundState_c_1
} // namespace app::classes::types

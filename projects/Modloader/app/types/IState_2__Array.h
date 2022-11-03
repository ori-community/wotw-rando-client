#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IState_2__Array {
        inline app::IState_2__Array__Class** type_info = (app::IState_2__Array__Class**)(modloader::win::memory::resolve_rva(0x0478F6E8));
        inline app::IState_2__Array__Class* get_class() {
            return il2cpp::get_class<app::IState_2__Array__Class>(type_info, "fsm", "IState[]");
        }
        inline app::IState_2__Array* create() {
            return il2cpp::create_object<app::IState_2__Array>(get_class());
        }
    } // namespace IState_2__Array
} // namespace app::classes::types

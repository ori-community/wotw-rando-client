#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StateMachineBehaviour__Array {
        inline app::StateMachineBehaviour__Array__Class** type_info = (app::StateMachineBehaviour__Array__Class**)(modloader::win::memory::resolve_rva(0x047529B8));
        inline app::StateMachineBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::StateMachineBehaviour__Array__Class>(type_info, "UnityEngine", "StateMachineBehaviour[]");
        }
        inline app::StateMachineBehaviour__Array* create() {
            return il2cpp::create_object<app::StateMachineBehaviour__Array>(get_class());
        }
    } // namespace StateMachineBehaviour__Array
} // namespace app::classes::types

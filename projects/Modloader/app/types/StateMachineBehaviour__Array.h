#pragma once
#include <Modloader/app/structs/StateMachineBehaviour__Array.h>
#include <Modloader/app/structs/StateMachineBehaviour__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachineBehaviour__Array {
        inline app::StateMachineBehaviour__Array__Class** type_info() {
            static app::StateMachineBehaviour__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StateMachineBehaviour__Array__Class**)(modloader::win::memory::resolve_rva(0x047529B8));
            }
            return cache;
        }
        inline app::StateMachineBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::StateMachineBehaviour__Array__Class>(type_info(), "UnityEngine", "StateMachineBehaviour[]");
        }
        inline app::StateMachineBehaviour__Array* create() {
            return il2cpp::create_object<app::StateMachineBehaviour__Array>(get_class());
        }
    } // namespace StateMachineBehaviour__Array
} // namespace app::classes::types

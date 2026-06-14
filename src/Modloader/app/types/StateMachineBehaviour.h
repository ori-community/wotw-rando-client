#pragma once
#include <Modloader/app/structs/StateMachineBehaviour.h>
#include <Modloader/app/structs/StateMachineBehaviour__Array.h>
#include <Modloader/app/structs/StateMachineBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateMachineBehaviour {
        inline app::StateMachineBehaviour__Class** type_info() {
            static app::StateMachineBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateMachineBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateMachineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StateMachineBehaviour__Class>(type_info(), "UnityEngine", "StateMachineBehaviour");
        }
        inline app::StateMachineBehaviour* create() {
            return il2cpp::create_object<app::StateMachineBehaviour>(get_class());
        }
        inline app::StateMachineBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::StateMachineBehaviour__Array>(get_class(), size);
        }
        inline app::StateMachineBehaviour__Array* create_array(const std::vector<app::StateMachineBehaviour*>& items) {
            return il2cpp::array_new<app::StateMachineBehaviour__Array>(get_class(), items);
        }
    } // namespace StateMachineBehaviour
} // namespace app::classes::types

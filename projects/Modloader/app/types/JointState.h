#pragma once
#include <Modloader/app/structs/JointState.h>
#include <Modloader/app/structs/JointState__Array.h>
#include <Modloader/app/structs/JointState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JointState {
        inline app::JointState__Class** type_info() {
            static app::JointState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JointState__Class**)(modloader::win::memory::resolve_rva(0x04724B50));
            }
            return cache;
        }
        inline app::JointState__Class* get_class() {
            return il2cpp::get_class<app::JointState__Class>(type_info(), "", "JointState");
        }
        inline app::JointState* create() {
            return il2cpp::create_object<app::JointState>(get_class());
        }
        inline app::JointState__Array* create_array(int size) {
            return il2cpp::array_new<app::JointState__Array>(get_class(), size);
        }
        inline app::JointState__Array* create_array(const std::vector<app::JointState*>& items) {
            return il2cpp::array_new<app::JointState__Array>(get_class(), items);
        }
    } // namespace JointState
} // namespace app::classes::types

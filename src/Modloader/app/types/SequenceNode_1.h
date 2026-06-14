#pragma once
#include <Modloader/app/structs/SequenceNode_1.h>
#include <Modloader/app/structs/SequenceNode_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequenceNode_1 {
        inline app::SequenceNode_1__Class** type_info() {
            static app::SequenceNode_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SequenceNode_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SequenceNode_1__Class* get_class() {
            return il2cpp::get_class<app::SequenceNode_1__Class>(type_info(), "Moon.BehaviourSystem", "SequenceNode");
        }
        inline app::SequenceNode_1* create() {
            return il2cpp::create_object<app::SequenceNode_1>(get_class());
        }
    } // namespace SequenceNode_1
} // namespace app::classes::types

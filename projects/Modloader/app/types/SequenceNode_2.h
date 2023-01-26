#pragma once
#include <Modloader/app/structs/SequenceNode_2.h>
#include <Modloader/app/structs/SequenceNode_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequenceNode_2 {
        inline app::SequenceNode_2__Class** type_info() {
            static app::SequenceNode_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SequenceNode_2__Class**)(modloader::win::memory::resolve_rva(0x0477CC50));
            }
            return cache;
        }
        inline app::SequenceNode_2__Class* get_class() {
            return il2cpp::get_class<app::SequenceNode_2__Class>(type_info(), "UberBehaviourTree", "SequenceNode");
        }
        inline app::SequenceNode_2* create() {
            return il2cpp::create_object<app::SequenceNode_2>(get_class());
        }
    } // namespace SequenceNode_2
} // namespace app::classes::types

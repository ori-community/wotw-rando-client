#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SequenceNode_2__Class.h>
#include <Modloader/app/structs/SequenceNode_2.h>

namespace app::classes::types {
    namespace SequenceNode_2 {
        inline app::SequenceNode_2__Class** type_info = (app::SequenceNode_2__Class**)(modloader::win::memory::resolve_rva(0x0477CC50));
        inline app::SequenceNode_2__Class* get_class() {
            return il2cpp::get_class<app::SequenceNode_2__Class>(type_info, "UberBehaviourTree", "SequenceNode");
        }
        inline app::SequenceNode_2* create() {
            return il2cpp::create_object<app::SequenceNode_2>(get_class());
        }
    } // namespace SequenceNode_2
} // namespace app::classes::types

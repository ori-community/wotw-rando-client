#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SelectorNode_1__Class.h>
#include <Modloader/app/structs/SelectorNode_1.h>

namespace app::classes::types {
    namespace SelectorNode_1 {
        inline app::SelectorNode_1__Class** type_info = (app::SelectorNode_1__Class**)(modloader::win::memory::resolve_rva(0x04736B90));
        inline app::SelectorNode_1__Class* get_class() {
            return il2cpp::get_class<app::SelectorNode_1__Class>(type_info, "UberBehaviourTree", "SelectorNode");
        }
        inline app::SelectorNode_1* create() {
            return il2cpp::create_object<app::SelectorNode_1>(get_class());
        }
    } // namespace SelectorNode_1
} // namespace app::classes::types

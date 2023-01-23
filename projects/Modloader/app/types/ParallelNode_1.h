#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ParallelNode_1__Class.h>
#include <Modloader/app/structs/ParallelNode_1.h>

namespace app::classes::types {
    namespace ParallelNode_1 {
        inline app::ParallelNode_1__Class** type_info = (app::ParallelNode_1__Class**)(modloader::win::memory::resolve_rva(0x047941B8));
        inline app::ParallelNode_1__Class* get_class() {
            return il2cpp::get_class<app::ParallelNode_1__Class>(type_info, "UberBehaviourTree", "ParallelNode");
        }
        inline app::ParallelNode_1* create() {
            return il2cpp::create_object<app::ParallelNode_1>(get_class());
        }
    } // namespace ParallelNode_1
} // namespace app::classes::types

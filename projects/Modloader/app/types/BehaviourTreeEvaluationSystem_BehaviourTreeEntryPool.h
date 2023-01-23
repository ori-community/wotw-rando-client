#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool.h>

namespace app::classes::types {
    namespace BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool {
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class** type_info = (app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class**)(modloader::win::memory::resolve_rva(0x04783F48));
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class* get_class() {
            return il2cpp::get_nested_class<app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool__Class>(type_info, "", "BehaviourTreeEvaluationSystem", "BehaviourTreeEntryPool");
        }
        inline app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool* create() {
            return il2cpp::create_object<app::BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool>(get_class());
        }
    } // namespace BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugNode__Class.h>
#include <Modloader/app/structs/DebugNode.h>

namespace app::classes::types {
    namespace DebugNode {
        namespace {
            inline app::DebugNode__Class* type_info_ref = nullptr;
        }
        inline app::DebugNode__Class** type_info = &type_info_ref;
        inline app::DebugNode__Class* get_class() {
            return il2cpp::get_class<app::DebugNode__Class>(type_info, "Moon.BehaviourSystem", "DebugNode");
        }
        inline app::DebugNode* create() {
            return il2cpp::create_object<app::DebugNode>(get_class());
        }
    } // namespace DebugNode
} // namespace app::classes::types

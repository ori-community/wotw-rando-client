#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UtilitySelectorNode__Class.h>
#include <Modloader/app/structs/UtilitySelectorNode.h>

namespace app::classes::types {
    namespace UtilitySelectorNode {
        namespace {
            inline app::UtilitySelectorNode__Class* type_info_ref = nullptr;
        }
        inline app::UtilitySelectorNode__Class** type_info = &type_info_ref;
        inline app::UtilitySelectorNode__Class* get_class() {
            return il2cpp::get_class<app::UtilitySelectorNode__Class>(type_info, "Moon.BehaviourSystem", "UtilitySelectorNode");
        }
        inline app::UtilitySelectorNode* create() {
            return il2cpp::create_object<app::UtilitySelectorNode>(get_class());
        }
    } // namespace UtilitySelectorNode
} // namespace app::classes::types

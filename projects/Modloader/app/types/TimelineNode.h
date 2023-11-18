#pragma once
#include <Modloader/app/structs/TimelineNode.h>
#include <Modloader/app/structs/TimelineNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineNode {
        inline app::TimelineNode__Class** type_info() {
            static app::TimelineNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineNode__Class* get_class() {
            return il2cpp::get_class<app::TimelineNode__Class>(type_info(), "Moon.InteractionGraph", "TimelineNode");
        }
        inline app::TimelineNode* create() {
            return il2cpp::create_object<app::TimelineNode>(get_class());
        }
    } // namespace TimelineNode
} // namespace app::classes::types

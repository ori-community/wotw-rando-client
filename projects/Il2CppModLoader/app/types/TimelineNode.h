#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineNode {
        namespace {
            app::TimelineNode__Class* type_info_ref = nullptr;
        }
        app::TimelineNode__Class** type_info = &type_info_ref;
        inline app::TimelineNode__Class* get_class() {
            return il2cpp::get_class<app::TimelineNode__Class>(type_info, "Moon.InteractionGraph", "TimelineNode");
        }
        inline app::TimelineNode* create() {
            return il2cpp::create_object<app::TimelineNode>(get_class());
        }
    } // namespace TimelineNode
} // namespace app::classes::types

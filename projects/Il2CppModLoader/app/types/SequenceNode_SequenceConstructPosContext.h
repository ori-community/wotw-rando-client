#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SequenceNode_SequenceConstructPosContext {
        namespace {
            app::SequenceNode_SequenceConstructPosContext__Class* type_info_ref = nullptr;
        }
        app::SequenceNode_SequenceConstructPosContext__Class** type_info = &type_info_ref;
        inline app::SequenceNode_SequenceConstructPosContext__Class* get_class() {
            return il2cpp::get_nested_class<app::SequenceNode_SequenceConstructPosContext__Class>(type_info, "System.Xml.Schema", "SequenceNode", "SequenceConstructPosContext");
        }
        inline app::SequenceNode_SequenceConstructPosContext* create() {
            return il2cpp::create_object<app::SequenceNode_SequenceConstructPosContext>(get_class());
        }
        inline app::SequenceNode_SequenceConstructPosContext__Boxed* box(app::SequenceNode_SequenceConstructPosContext value) {
            return il2cpp::box_value<app::SequenceNode_SequenceConstructPosContext__Boxed>(get_class(), value);
        }
        inline app::SequenceNode_SequenceConstructPosContext__Array* create_array(int size) {
            return il2cpp::array_new<app::SequenceNode_SequenceConstructPosContext__Array>(get_class(), size);
        }
        inline app::SequenceNode_SequenceConstructPosContext__Array* create_array(const std::vector<app::SequenceNode_SequenceConstructPosContext>& items) {
            return il2cpp::array_new<app::SequenceNode_SequenceConstructPosContext__Array>(get_class(), items);
        }
    } // namespace SequenceNode_SequenceConstructPosContext
} // namespace app::classes::types

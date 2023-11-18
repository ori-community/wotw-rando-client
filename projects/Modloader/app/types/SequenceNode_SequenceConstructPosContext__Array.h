#pragma once
#include <Modloader/app/structs/SequenceNode_SequenceConstructPosContext__Array.h>
#include <Modloader/app/structs/SequenceNode_SequenceConstructPosContext__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequenceNode_SequenceConstructPosContext__Array {
        inline app::SequenceNode_SequenceConstructPosContext__Array__Class** type_info() {
            static app::SequenceNode_SequenceConstructPosContext__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SequenceNode_SequenceConstructPosContext__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SequenceNode_SequenceConstructPosContext__Array__Class* get_class() {
            return il2cpp::get_class<app::SequenceNode_SequenceConstructPosContext__Array__Class>(type_info(), "System.Xml.Schema", "SequenceNode+SequenceConstructPosContext[]");
        }
        inline app::SequenceNode_SequenceConstructPosContext__Array* create() {
            return il2cpp::create_object<app::SequenceNode_SequenceConstructPosContext__Array>(get_class());
        }
    } // namespace SequenceNode_SequenceConstructPosContext__Array
} // namespace app::classes::types

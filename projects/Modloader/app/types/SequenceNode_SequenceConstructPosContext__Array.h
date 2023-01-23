#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SequenceNode_SequenceConstructPosContext__Array__Class.h>
#include <Modloader/app/structs/SequenceNode_SequenceConstructPosContext__Array.h>

namespace app::classes::types {
    namespace SequenceNode_SequenceConstructPosContext__Array {
        namespace {
            inline app::SequenceNode_SequenceConstructPosContext__Array__Class* type_info_ref = nullptr;
        }
        inline app::SequenceNode_SequenceConstructPosContext__Array__Class** type_info = &type_info_ref;
        inline app::SequenceNode_SequenceConstructPosContext__Array__Class* get_class() {
            return il2cpp::get_class<app::SequenceNode_SequenceConstructPosContext__Array__Class>(type_info, "System.Xml.Schema", "SequenceNode+SequenceConstructPosContext[]");
        }
        inline app::SequenceNode_SequenceConstructPosContext__Array* create() {
            return il2cpp::create_object<app::SequenceNode_SequenceConstructPosContext__Array>(get_class());
        }
    } // namespace SequenceNode_SequenceConstructPosContext__Array
} // namespace app::classes::types

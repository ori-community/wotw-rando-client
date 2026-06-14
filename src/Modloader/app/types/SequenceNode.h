#pragma once
#include <Modloader/app/structs/SequenceNode.h>
#include <Modloader/app/structs/SequenceNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SequenceNode {
        inline app::SequenceNode__Class** type_info() {
            static app::SequenceNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SequenceNode__Class**)(modloader::win::memory::resolve_rva(0x0477BD70));
            }
            return cache;
        }
        inline app::SequenceNode__Class* get_class() {
            return il2cpp::get_class<app::SequenceNode__Class>(type_info(), "System.Xml.Schema", "SequenceNode");
        }
        inline app::SequenceNode* create() {
            return il2cpp::create_object<app::SequenceNode>(get_class());
        }
    } // namespace SequenceNode
} // namespace app::classes::types

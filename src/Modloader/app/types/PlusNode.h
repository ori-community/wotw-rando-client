#pragma once
#include <Modloader/app/structs/PlusNode.h>
#include <Modloader/app/structs/PlusNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlusNode {
        inline app::PlusNode__Class** type_info() {
            static app::PlusNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlusNode__Class**)(modloader::win::memory::resolve_rva(0x047314B8));
            }
            return cache;
        }
        inline app::PlusNode__Class* get_class() {
            return il2cpp::get_class<app::PlusNode__Class>(type_info(), "System.Xml.Schema", "PlusNode");
        }
        inline app::PlusNode* create() {
            return il2cpp::create_object<app::PlusNode>(get_class());
        }
    } // namespace PlusNode
} // namespace app::classes::types

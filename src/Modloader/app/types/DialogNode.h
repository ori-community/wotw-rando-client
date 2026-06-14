#pragma once
#include <Modloader/app/structs/DialogNode.h>
#include <Modloader/app/structs/DialogNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DialogNode {
        inline app::DialogNode__Class** type_info() {
            static app::DialogNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DialogNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DialogNode__Class* get_class() {
            return il2cpp::get_class<app::DialogNode__Class>(type_info(), "", "DialogNode");
        }
        inline app::DialogNode* create() {
            return il2cpp::create_object<app::DialogNode>(get_class());
        }
    } // namespace DialogNode
} // namespace app::classes::types

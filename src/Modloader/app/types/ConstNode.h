#pragma once
#include <Modloader/app/structs/ConstNode.h>
#include <Modloader/app/structs/ConstNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstNode {
        inline app::ConstNode__Class** type_info() {
            static app::ConstNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstNode__Class**)(modloader::win::memory::resolve_rva(0x04746638));
            }
            return cache;
        }
        inline app::ConstNode__Class* get_class() {
            return il2cpp::get_class<app::ConstNode__Class>(type_info(), "System.Data", "ConstNode");
        }
        inline app::ConstNode* create() {
            return il2cpp::create_object<app::ConstNode>(get_class());
        }
    } // namespace ConstNode
} // namespace app::classes::types

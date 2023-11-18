#pragma once
#include <Modloader/app/structs/ZeroOpNode.h>
#include <Modloader/app/structs/ZeroOpNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZeroOpNode {
        inline app::ZeroOpNode__Class** type_info() {
            static app::ZeroOpNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ZeroOpNode__Class**)(modloader::win::memory::resolve_rva(0x04746D58));
            }
            return cache;
        }
        inline app::ZeroOpNode__Class* get_class() {
            return il2cpp::get_class<app::ZeroOpNode__Class>(type_info(), "System.Data", "ZeroOpNode");
        }
        inline app::ZeroOpNode* create() {
            return il2cpp::create_object<app::ZeroOpNode>(get_class());
        }
    } // namespace ZeroOpNode
} // namespace app::classes::types

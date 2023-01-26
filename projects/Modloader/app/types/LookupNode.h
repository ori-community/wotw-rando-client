#pragma once
#include <Modloader/app/structs/LookupNode.h>
#include <Modloader/app/structs/LookupNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LookupNode {
        inline app::LookupNode__Class** type_info() {
            static app::LookupNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LookupNode__Class**)(modloader::win::memory::resolve_rva(0x04798D20));
            }
            return cache;
        }
        inline app::LookupNode__Class* get_class() {
            return il2cpp::get_class<app::LookupNode__Class>(type_info(), "System.Data", "LookupNode");
        }
        inline app::LookupNode* create() {
            return il2cpp::create_object<app::LookupNode>(get_class());
        }
    } // namespace LookupNode
} // namespace app::classes::types

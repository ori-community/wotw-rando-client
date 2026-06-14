#pragma once
#include <Modloader/app/structs/LikeNode.h>
#include <Modloader/app/structs/LikeNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LikeNode {
        inline app::LikeNode__Class** type_info() {
            static app::LikeNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LikeNode__Class**)(modloader::win::memory::resolve_rva(0x04703E58));
            }
            return cache;
        }
        inline app::LikeNode__Class* get_class() {
            return il2cpp::get_class<app::LikeNode__Class>(type_info(), "System.Data", "LikeNode");
        }
        inline app::LikeNode* create() {
            return il2cpp::create_object<app::LikeNode>(get_class());
        }
    } // namespace LikeNode
} // namespace app::classes::types

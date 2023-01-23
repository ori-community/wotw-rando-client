#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LikeNode__Class.h>
#include <Modloader/app/structs/LikeNode.h>

namespace app::classes::types {
    namespace LikeNode {
        inline app::LikeNode__Class** type_info = (app::LikeNode__Class**)(modloader::win::memory::resolve_rva(0x04703E58));
        inline app::LikeNode__Class* get_class() {
            return il2cpp::get_class<app::LikeNode__Class>(type_info, "System.Data", "LikeNode");
        }
        inline app::LikeNode* create() {
            return il2cpp::create_object<app::LikeNode>(get_class());
        }
    } // namespace LikeNode
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/SkeetoResetAttacksInRowIfOverMaxNode.h>
#include <Modloader/app/structs/SkeetoResetAttacksInRowIfOverMaxNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoResetAttacksInRowIfOverMaxNode {
        inline app::SkeetoResetAttacksInRowIfOverMaxNode__Class** type_info() {
            static app::SkeetoResetAttacksInRowIfOverMaxNode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoResetAttacksInRowIfOverMaxNode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoResetAttacksInRowIfOverMaxNode__Class* get_class() {
            return il2cpp::get_class<app::SkeetoResetAttacksInRowIfOverMaxNode__Class>(type_info(), "", "SkeetoResetAttacksInRowIfOverMaxNode");
        }
        inline app::SkeetoResetAttacksInRowIfOverMaxNode* create() {
            return il2cpp::create_object<app::SkeetoResetAttacksInRowIfOverMaxNode>(get_class());
        }
    } // namespace SkeetoResetAttacksInRowIfOverMaxNode
} // namespace app::classes::types

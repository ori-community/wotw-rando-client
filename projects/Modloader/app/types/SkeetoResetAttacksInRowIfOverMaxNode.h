#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoResetAttacksInRowIfOverMaxNode {
        namespace {
            inline app::SkeetoResetAttacksInRowIfOverMaxNode__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoResetAttacksInRowIfOverMaxNode__Class** type_info = &type_info_ref;
        inline app::SkeetoResetAttacksInRowIfOverMaxNode__Class* get_class() {
            return il2cpp::get_class<app::SkeetoResetAttacksInRowIfOverMaxNode__Class>(type_info, "", "SkeetoResetAttacksInRowIfOverMaxNode");
        }
        inline app::SkeetoResetAttacksInRowIfOverMaxNode* create() {
            return il2cpp::create_object<app::SkeetoResetAttacksInRowIfOverMaxNode>(get_class());
        }
    } // namespace SkeetoResetAttacksInRowIfOverMaxNode
} // namespace app::classes::types

#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoResetAttacksInRowIfOverMaxNode {
        namespace {
            app::SkeetoResetAttacksInRowIfOverMaxNode__Class* type_info_ref = nullptr;
        }
        app::SkeetoResetAttacksInRowIfOverMaxNode__Class** type_info = &type_info_ref;
        inline app::SkeetoResetAttacksInRowIfOverMaxNode__Class* get_class() {
            return il2cpp::get_class<app::SkeetoResetAttacksInRowIfOverMaxNode__Class>(type_info, "", "SkeetoResetAttacksInRowIfOverMaxNode");
        }
        inline app::SkeetoResetAttacksInRowIfOverMaxNode* create() {
            return il2cpp::create_object<app::SkeetoResetAttacksInRowIfOverMaxNode>(get_class());
        }
    } // namespace SkeetoResetAttacksInRowIfOverMaxNode
} // namespace app::classes::types

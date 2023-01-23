#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DialogNode__Class.h>
#include <Modloader/app/structs/DialogNode.h>

namespace app::classes::types {
    namespace DialogNode {
        namespace {
            inline app::DialogNode__Class* type_info_ref = nullptr;
        }
        inline app::DialogNode__Class** type_info = &type_info_ref;
        inline app::DialogNode__Class* get_class() {
            return il2cpp::get_class<app::DialogNode__Class>(type_info, "", "DialogNode");
        }
        inline app::DialogNode* create() {
            return il2cpp::create_object<app::DialogNode>(get_class());
        }
    } // namespace DialogNode
} // namespace app::classes::types

#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NPCMessageBox__Class.h>
#include <Modloader/app/structs/NPCMessageBox.h>

namespace app::classes::types {
    namespace NPCMessageBox {
        namespace {
            inline app::NPCMessageBox__Class* type_info_ref = nullptr;
        }
        inline app::NPCMessageBox__Class** type_info = &type_info_ref;
        inline app::NPCMessageBox__Class* get_class() {
            return il2cpp::get_class<app::NPCMessageBox__Class>(type_info, "", "NPCMessageBox");
        }
        inline app::NPCMessageBox* create() {
            return il2cpp::create_object<app::NPCMessageBox>(get_class());
        }
    } // namespace NPCMessageBox
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/NPCMessageBox.h>
#include <Modloader/app/structs/NPCMessageBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCMessageBox {
        inline app::NPCMessageBox__Class** type_info() {
            static app::NPCMessageBox__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCMessageBox__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCMessageBox__Class* get_class() {
            return il2cpp::get_class<app::NPCMessageBox__Class>(type_info(), "", "NPCMessageBox");
        }
        inline app::NPCMessageBox* create() {
            return il2cpp::create_object<app::NPCMessageBox>(get_class());
        }
    } // namespace NPCMessageBox
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/ChangeWorldMapIconAction.h>
#include <Modloader/app/structs/ChangeWorldMapIconAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeWorldMapIconAction {
        inline app::ChangeWorldMapIconAction__Class** type_info() {
            static app::ChangeWorldMapIconAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeWorldMapIconAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeWorldMapIconAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeWorldMapIconAction__Class>(type_info(), "", "ChangeWorldMapIconAction");
        }
        inline app::ChangeWorldMapIconAction* create() {
            return il2cpp::create_object<app::ChangeWorldMapIconAction>(get_class());
        }
    } // namespace ChangeWorldMapIconAction
} // namespace app::classes::types

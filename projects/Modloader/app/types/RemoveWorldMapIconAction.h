#pragma once
#include <Modloader/app/structs/RemoveWorldMapIconAction.h>
#include <Modloader/app/structs/RemoveWorldMapIconAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveWorldMapIconAction {
        inline app::RemoveWorldMapIconAction__Class** type_info() {
            static app::RemoveWorldMapIconAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoveWorldMapIconAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoveWorldMapIconAction__Class* get_class() {
            return il2cpp::get_class<app::RemoveWorldMapIconAction__Class>(type_info(), "", "RemoveWorldMapIconAction");
        }
        inline app::RemoveWorldMapIconAction* create() {
            return il2cpp::create_object<app::RemoveWorldMapIconAction>(get_class());
        }
    } // namespace RemoveWorldMapIconAction
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/PlaceOnGroundAction.h>
#include <Modloader/app/structs/PlaceOnGroundAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaceOnGroundAction {
        inline app::PlaceOnGroundAction__Class** type_info() {
            static app::PlaceOnGroundAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlaceOnGroundAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlaceOnGroundAction__Class* get_class() {
            return il2cpp::get_class<app::PlaceOnGroundAction__Class>(type_info(), "", "PlaceOnGroundAction");
        }
        inline app::PlaceOnGroundAction* create() {
            return il2cpp::create_object<app::PlaceOnGroundAction>(get_class());
        }
    } // namespace PlaceOnGroundAction
} // namespace app::classes::types

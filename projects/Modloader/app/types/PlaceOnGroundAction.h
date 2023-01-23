#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlaceOnGroundAction__Class.h>
#include <Modloader/app/structs/PlaceOnGroundAction.h>

namespace app::classes::types {
    namespace PlaceOnGroundAction {
        namespace {
            inline app::PlaceOnGroundAction__Class* type_info_ref = nullptr;
        }
        inline app::PlaceOnGroundAction__Class** type_info = &type_info_ref;
        inline app::PlaceOnGroundAction__Class* get_class() {
            return il2cpp::get_class<app::PlaceOnGroundAction__Class>(type_info, "", "PlaceOnGroundAction");
        }
        inline app::PlaceOnGroundAction* create() {
            return il2cpp::create_object<app::PlaceOnGroundAction>(get_class());
        }
    } // namespace PlaceOnGroundAction
} // namespace app::classes::types

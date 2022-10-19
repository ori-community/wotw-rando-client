#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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

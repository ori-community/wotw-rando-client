#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveWorldMapIconAction {
        namespace {
            app::RemoveWorldMapIconAction__Class* type_info_ref = nullptr;
        }
        app::RemoveWorldMapIconAction__Class** type_info = &type_info_ref;
        inline app::RemoveWorldMapIconAction__Class* get_class() {
            return il2cpp::get_class<app::RemoveWorldMapIconAction__Class>(type_info, "", "RemoveWorldMapIconAction");
        }
        inline app::RemoveWorldMapIconAction* create() {
            return il2cpp::create_object<app::RemoveWorldMapIconAction>(get_class());
        }
    } // namespace RemoveWorldMapIconAction
} // namespace app::classes::types

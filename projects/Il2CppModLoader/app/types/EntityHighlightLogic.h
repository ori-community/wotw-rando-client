#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityHighlightLogic {
        namespace {
            app::EntityHighlightLogic__Class* type_info_ref = nullptr;
        }
        app::EntityHighlightLogic__Class** type_info = &type_info_ref;
        inline app::EntityHighlightLogic__Class* get_class() {
            return il2cpp::get_class<app::EntityHighlightLogic__Class>(type_info, "", "EntityHighlightLogic");
        }
        inline app::EntityHighlightLogic* create() {
            return il2cpp::create_object<app::EntityHighlightLogic>(get_class());
        }
    } // namespace EntityHighlightLogic
} // namespace app::classes::types

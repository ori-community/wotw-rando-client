#pragma once
#include <Modloader/app/structs/EntityHighlightLogic.h>
#include <Modloader/app/structs/EntityHighlightLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityHighlightLogic {
        inline app::EntityHighlightLogic__Class** type_info() {
            static app::EntityHighlightLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityHighlightLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityHighlightLogic__Class* get_class() {
            return il2cpp::get_class<app::EntityHighlightLogic__Class>(type_info(), "", "EntityHighlightLogic");
        }
        inline app::EntityHighlightLogic* create() {
            return il2cpp::create_object<app::EntityHighlightLogic>(get_class());
        }
    } // namespace EntityHighlightLogic
} // namespace app::classes::types

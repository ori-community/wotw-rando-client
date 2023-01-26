#pragma once
#include <Modloader/app/structs/EntityHighlightColor.h>
#include <Modloader/app/structs/EntityHighlightColor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityHighlightColor {
        inline app::EntityHighlightColor__Class** type_info() {
            static app::EntityHighlightColor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityHighlightColor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityHighlightColor__Class* get_class() {
            return il2cpp::get_class<app::EntityHighlightColor__Class>(type_info(), "", "EntityHighlightColor");
        }
        inline app::EntityHighlightColor* create() {
            return il2cpp::create_object<app::EntityHighlightColor>(get_class());
        }
    } // namespace EntityHighlightColor
} // namespace app::classes::types

#pragma once
#include <Modloader/app/structs/TextShadowModifier.h>
#include <Modloader/app/structs/TextShadowModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextShadowModifier {
        inline app::TextShadowModifier__Class** type_info() {
            static app::TextShadowModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextShadowModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextShadowModifier__Class* get_class() {
            return il2cpp::get_class<app::TextShadowModifier__Class>(type_info(), "", "TextShadowModifier");
        }
        inline app::TextShadowModifier* create() {
            return il2cpp::create_object<app::TextShadowModifier>(get_class());
        }
    } // namespace TextShadowModifier
} // namespace app::classes::types

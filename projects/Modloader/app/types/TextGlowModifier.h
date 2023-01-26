#pragma once
#include <Modloader/app/structs/TextGlowModifier.h>
#include <Modloader/app/structs/TextGlowModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextGlowModifier {
        inline app::TextGlowModifier__Class** type_info() {
            static app::TextGlowModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextGlowModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextGlowModifier__Class* get_class() {
            return il2cpp::get_class<app::TextGlowModifier__Class>(type_info(), "", "TextGlowModifier");
        }
        inline app::TextGlowModifier* create() {
            return il2cpp::create_object<app::TextGlowModifier>(get_class());
        }
    } // namespace TextGlowModifier
} // namespace app::classes::types

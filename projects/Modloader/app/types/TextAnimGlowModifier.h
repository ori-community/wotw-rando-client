#pragma once
#include <Modloader/app/structs/TextAnimGlowModifier.h>
#include <Modloader/app/structs/TextAnimGlowModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextAnimGlowModifier {
        inline app::TextAnimGlowModifier__Class** type_info() {
            static app::TextAnimGlowModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextAnimGlowModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextAnimGlowModifier__Class* get_class() {
            return il2cpp::get_class<app::TextAnimGlowModifier__Class>(type_info(), "", "TextAnimGlowModifier");
        }
        inline app::TextAnimGlowModifier* create() {
            return il2cpp::create_object<app::TextAnimGlowModifier>(get_class());
        }
    } // namespace TextAnimGlowModifier
} // namespace app::classes::types

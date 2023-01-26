#pragma once
#include <Modloader/app/structs/TextAnimFadeModifier.h>
#include <Modloader/app/structs/TextAnimFadeModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextAnimFadeModifier {
        inline app::TextAnimFadeModifier__Class** type_info() {
            static app::TextAnimFadeModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextAnimFadeModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextAnimFadeModifier__Class* get_class() {
            return il2cpp::get_class<app::TextAnimFadeModifier__Class>(type_info(), "", "TextAnimFadeModifier");
        }
        inline app::TextAnimFadeModifier* create() {
            return il2cpp::create_object<app::TextAnimFadeModifier>(get_class());
        }
    } // namespace TextAnimFadeModifier
} // namespace app::classes::types

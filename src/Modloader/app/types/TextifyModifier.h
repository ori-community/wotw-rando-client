#pragma once
#include <Modloader/app/structs/TextifyModifier.h>
#include <Modloader/app/structs/TextifyModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextifyModifier {
        inline app::TextifyModifier__Class** type_info() {
            static app::TextifyModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextifyModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextifyModifier__Class* get_class() {
            return il2cpp::get_class<app::TextifyModifier__Class>(type_info(), "", "TextifyModifier");
        }
        inline app::TextifyModifier* create() {
            return il2cpp::create_object<app::TextifyModifier>(get_class());
        }
    } // namespace TextifyModifier
} // namespace app::classes::types

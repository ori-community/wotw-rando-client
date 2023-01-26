#pragma once
#include <Modloader/app/structs/TranslateModifier.h>
#include <Modloader/app/structs/TranslateModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TranslateModifier {
        inline app::TranslateModifier__Class** type_info() {
            static app::TranslateModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TranslateModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TranslateModifier__Class* get_class() {
            return il2cpp::get_class<app::TranslateModifier__Class>(type_info(), "", "TranslateModifier");
        }
        inline app::TranslateModifier* create() {
            return il2cpp::create_object<app::TranslateModifier>(get_class());
        }
    } // namespace TranslateModifier
} // namespace app::classes::types

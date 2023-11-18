#pragma once
#include <Modloader/app/structs/TextAnimDistortModifier.h>
#include <Modloader/app/structs/TextAnimDistortModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextAnimDistortModifier {
        inline app::TextAnimDistortModifier__Class** type_info() {
            static app::TextAnimDistortModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextAnimDistortModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextAnimDistortModifier__Class* get_class() {
            return il2cpp::get_class<app::TextAnimDistortModifier__Class>(type_info(), "", "TextAnimDistortModifier");
        }
        inline app::TextAnimDistortModifier* create() {
            return il2cpp::create_object<app::TextAnimDistortModifier>(get_class());
        }
    } // namespace TextAnimDistortModifier
} // namespace app::classes::types

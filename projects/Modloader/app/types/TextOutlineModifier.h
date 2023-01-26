#pragma once
#include <Modloader/app/structs/TextOutlineModifier.h>
#include <Modloader/app/structs/TextOutlineModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextOutlineModifier {
        inline app::TextOutlineModifier__Class** type_info() {
            static app::TextOutlineModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextOutlineModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextOutlineModifier__Class* get_class() {
            return il2cpp::get_class<app::TextOutlineModifier__Class>(type_info(), "", "TextOutlineModifier");
        }
        inline app::TextOutlineModifier* create() {
            return il2cpp::create_object<app::TextOutlineModifier>(get_class());
        }
    } // namespace TextOutlineModifier
} // namespace app::classes::types

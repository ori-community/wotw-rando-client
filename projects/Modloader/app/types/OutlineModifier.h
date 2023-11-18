#pragma once
#include <Modloader/app/structs/OutlineModifier.h>
#include <Modloader/app/structs/OutlineModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OutlineModifier {
        inline app::OutlineModifier__Class** type_info() {
            static app::OutlineModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OutlineModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OutlineModifier__Class* get_class() {
            return il2cpp::get_class<app::OutlineModifier__Class>(type_info(), "", "OutlineModifier");
        }
        inline app::OutlineModifier* create() {
            return il2cpp::create_object<app::OutlineModifier>(get_class());
        }
    } // namespace OutlineModifier
} // namespace app::classes::types

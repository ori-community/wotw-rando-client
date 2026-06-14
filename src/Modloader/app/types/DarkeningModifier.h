#pragma once
#include <Modloader/app/structs/DarkeningModifier.h>
#include <Modloader/app/structs/DarkeningModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DarkeningModifier {
        inline app::DarkeningModifier__Class** type_info() {
            static app::DarkeningModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DarkeningModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DarkeningModifier__Class* get_class() {
            return il2cpp::get_class<app::DarkeningModifier__Class>(type_info(), "", "DarkeningModifier");
        }
        inline app::DarkeningModifier* create() {
            return il2cpp::create_object<app::DarkeningModifier>(get_class());
        }
    } // namespace DarkeningModifier
} // namespace app::classes::types

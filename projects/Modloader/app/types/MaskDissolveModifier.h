#pragma once
#include <Modloader/app/structs/MaskDissolveModifier.h>
#include <Modloader/app/structs/MaskDissolveModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskDissolveModifier {
        inline app::MaskDissolveModifier__Class** type_info() {
            static app::MaskDissolveModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskDissolveModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskDissolveModifier__Class* get_class() {
            return il2cpp::get_class<app::MaskDissolveModifier__Class>(type_info(), "", "MaskDissolveModifier");
        }
        inline app::MaskDissolveModifier* create() {
            return il2cpp::create_object<app::MaskDissolveModifier>(get_class());
        }
    } // namespace MaskDissolveModifier
} // namespace app::classes::types

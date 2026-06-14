#pragma once
#include <Modloader/app/structs/MaskExtraModifier.h>
#include <Modloader/app/structs/MaskExtraModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskExtraModifier {
        inline app::MaskExtraModifier__Class** type_info() {
            static app::MaskExtraModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskExtraModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskExtraModifier__Class* get_class() {
            return il2cpp::get_class<app::MaskExtraModifier__Class>(type_info(), "", "MaskExtraModifier");
        }
        inline app::MaskExtraModifier* create() {
            return il2cpp::create_object<app::MaskExtraModifier>(get_class());
        }
    } // namespace MaskExtraModifier
} // namespace app::classes::types

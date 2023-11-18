#pragma once
#include <Modloader/app/structs/MaskModifier.h>
#include <Modloader/app/structs/MaskModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskModifier {
        inline app::MaskModifier__Class** type_info() {
            static app::MaskModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskModifier__Class* get_class() {
            return il2cpp::get_class<app::MaskModifier__Class>(type_info(), "", "MaskModifier");
        }
        inline app::MaskModifier* create() {
            return il2cpp::create_object<app::MaskModifier>(get_class());
        }
    } // namespace MaskModifier
} // namespace app::classes::types

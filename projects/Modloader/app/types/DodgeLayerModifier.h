#pragma once
#include <Modloader/app/structs/DodgeLayerModifier.h>
#include <Modloader/app/structs/DodgeLayerModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DodgeLayerModifier {
        inline app::DodgeLayerModifier__Class** type_info() {
            static app::DodgeLayerModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DodgeLayerModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DodgeLayerModifier__Class* get_class() {
            return il2cpp::get_class<app::DodgeLayerModifier__Class>(type_info(), "", "DodgeLayerModifier");
        }
        inline app::DodgeLayerModifier* create() {
            return il2cpp::create_object<app::DodgeLayerModifier>(get_class());
        }
    } // namespace DodgeLayerModifier
} // namespace app::classes::types

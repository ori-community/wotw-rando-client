#pragma once
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap.h>
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedSeinEffectsMap {
        inline app::MaterialBasedSeinEffectsMap__Class** type_info() {
            static app::MaterialBasedSeinEffectsMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialBasedSeinEffectsMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialBasedSeinEffectsMap__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedSeinEffectsMap__Class>(type_info(), "", "MaterialBasedSeinEffectsMap");
        }
        inline app::MaterialBasedSeinEffectsMap* create() {
            return il2cpp::create_object<app::MaterialBasedSeinEffectsMap>(get_class());
        }
    } // namespace MaterialBasedSeinEffectsMap
} // namespace app::classes::types
